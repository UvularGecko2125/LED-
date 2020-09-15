# LED-
work1
輸出腳設定 0~7</br>
功能:LED從右向左逐一亮起延遲0.1秒
```C++
int LED=9;
void setup() {
  // put your setup code here, to run once:
for(int i=0;i<8;i++)

  pinMode (i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   for(int i=7;i>-1;i--)

   digitalWrite(i, HIGH);
   if(LED>=0)
    digitalWrite(LED,LOW);
   
   else
     LED=9;
   LED--;
   delay(100);
}
```
