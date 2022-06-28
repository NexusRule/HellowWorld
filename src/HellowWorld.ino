SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
//setting the integer 'value'
uint16_t value;

void setup() {
  //asigning the ports
  pinMode(D5, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() { 
  //reading the preset integer
  value = analogRead(A1);
  //actually using the integer to make the LED blink
  //(in accordance with the pentiometer)
  delay(value);
  digitalWrite(D5, HIGH);
  delay(value);
  digitalWrite(D5, LOW);
  //printing the stuffs in output
  Serial.println(value);
  Serial.begin(9600);
}
