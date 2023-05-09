bool sendData = false;
int i = 0;

String str_Start = "<START>";
String str_Stop = "<STOP>";
String str_Data1 = "<DATA: ";
String str_Data2 = ">";

unsigned long t_ms = 0;
unsigned long t_old = 0;
unsigned long t_interval = 500;

void setup() {
  // Start Serial Communication
  Serial.begin(9600);

  // Initialize built in LED
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  // Send Ready Message
  Serial.println("<Arduino: Ready>");

}

void loop() {
  // Update time
  t_ms = millis();

  if (sendData == false) {
    // Check if data is available and read it
    Serial.println("Waiting for Serial.");
    while (!Serial.available()) {};
  }
  
  if (Serial.available()) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(200);
    String input = Serial.readString();
    if (input == str_Start) { // Check for start signal
      sendData = true;
      digitalWrite(LED_BUILTIN, HIGH);
    }
    else if (input == str_Stop) { // Check for stop signal
      sendData = false;
      digitalWrite(LED_BUILTIN, LOW);
    }
    else {  // Throw error for others
      sendData = false;
      digitalWrite(LED_BUILTIN, LOW);
      Serial.print("<ERROR: Received bad command '");
      Serial.print(input);
      Serial.println("'>");
    }
  }
  
  if(t_ms-t_old > t_interval) {
    t_old = t_ms;
    if(sendData) {
      i++;
      String data = str_Data1 + String(i) + str_Data2;
      Serial.println(data);
    }
  }

}
