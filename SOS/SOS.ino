// ---------------------------------------------------------------------------------
//  @Author:	  VingtDylan
//  @DateTime:	2019-01-16 01:29:33
//  @Description: cyh loves wmy.
//  @Email: 1205373709@qq.com
//  PS: Coding just for fun.
// ---------------------------------------------------------------------------------

int LEDPIN=13;

void setup(){
	pinMode(LEDPIN, OUTPUT);
}

void loop(){
	flash(200);flash(200);flash(200);//S
	flash(300);
	flash(500);flash(500);flash(500);//O
	flash(200);flash(200);flash(200);//S
	delay(1000);
}

void flash(int duration){
	digitalWrite(LEDPIN, HIGH);
	delay(duration);
	digitalWrite(LEDPIN, LOW);
	delay(duration);
}
