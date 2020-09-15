int x =255;
int y =5;
void setup() {
  // put your setup code here, to run once:

  pinMode (3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   analogWrite(3,x);
   x = x-y;
   if(x ==0 || x ==255)
   y = -y;
   delay(80);
   }
