# LED-
work1</br>
輸出腳設定 0~7</br>
功能:LED從向右逐一亮起延遲0.1秒
```C++
int LED=10;
void setup() {
  // put your setup code here, to run once:
for(int i=2;i<10;i++)

  pinMode (i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   for(int i=9;i>1;i--)

   digitalWrite(i, HIGH);
   if(LED>=2)
    digitalWrite(LED,LOW);
   
   else
     LED=10;
   LED--;
   delay(100);
}
```
照片位
