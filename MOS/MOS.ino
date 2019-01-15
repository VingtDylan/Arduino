// ---------------------------------------------------------------------------------
//  @Author:	  VingtDylan
//  @DateTime:	2019-01-16 02:02:45
//  @Description: cyh loves wmy.
//  @Email: 1205373709@qq.com
//  PS: Coding just for fun.
// ---------------------------------------------------------------------------------

int LEDPIN=13;

char* letters[]={
	".-","-...","-.-.","-..",".","..-","--.","....","..",
	".---","-.-",".-..","--","-.","---",".--.","--.-",".-.-",
	"...","-","..-","...-",".--","-..-","-.--","--.."
};

char* numbers[]={
	"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."
};

int dotDelay=200;

void setup()
{
	pinMode(LEDPIN, OUTPUT);
	Serial.begin(9600);
}

void loop(){
	char ch;
	if(Serial.available()){
		ch=Serial.read();
		if(ch>='a'&&ch<='z'){
			flashSequence(letters[ch-'a']);
		}else if(ch>='A'&&ch<='Z'){
			flashSequence(letters[ch-'A']);
		}else if(ch>='0'&&ch<='9'){
			flashSequence(letters[ch-'0']);
		}else if(ch==' '){
			delay(dotDelay*4);
		}
	}
}

void flashSequence(char * sequence){
	int i=0;
	while(sequence[i]!=NULL){
		flashDotOrDash(sequence[i]);
		i++;
	}
	delay(dotDelay*3);
}

void flashDotOrDash(char dotOrDash){
	digitalWrite(LEDPIN, HIGH);
	if(dotOrDash=='.'){
		delay(dotDelay);
	}else{
		delay(dotDelay*3);
	}
	digitalWrite(LEDPIN, LOW);
	delay(dotDelay);
}