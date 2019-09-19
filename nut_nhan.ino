#define LED 8
#define BUTTON 5
int LEDstatus = 0; // biến lưu trạng thái LED trước đó

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON) == 1 && LEDstatus == 0){
    digitalWrite( LED, 1);
    delay(1000);
    LEDstatus = 1;
  }
  if(digitalRead(BUTTON) == 1 && LEDstatus == 1){
    digitalWrite( LED, 0);
    delay(1000);
    LEDstatus = 0;
  }

}
