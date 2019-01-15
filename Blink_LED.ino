// ---------------------------------------------------------------------------------
//  @Author:    VingtDylan
//  @DateTime:  2019-01-16 00:56:29
//  @Description: cyh loves wmy.
//  @Email: 1205373709@qq.com
//  PS: Coding just for fun.
// ---------------------------------------------------------------------------------

int LEDPIN=13;

void setup() {
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  digitalWrite(LEDPIN, HIGH);
  delay(1000);
  digitalWrite(LEDPIN, LOW);
  delay(1000);
}
