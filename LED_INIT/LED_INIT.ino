//  @Description: cyh loves wmy.
//  @Email: 1205373709@qq.com
//  PS: Coding just for fun.
// ---------------------------------------------------------------------------------

int LEDPIN=13;

void setup() {
  pinMode(LEDPIN, OUTPUT);
  //LED connected to digital Pin 13
}

void loop() {
  digitalWrite(LEDPIN, HIGH);
  //set the LED on
  delay(1000);
  //wait for a second
  digitalWrite(LEDPIN, LOW);
  //set the LED off
  delay(1000);
  //wait for a second
}
