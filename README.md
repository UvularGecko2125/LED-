# LED-
工作1</br>
輸出腳設定 2~9</br>
功能:LED從左向右逐一亮起延遲0.1秒
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
![gmail](https://github.com/UvularGecko2125/LED-/blob/master/DSC_0003.JPG)
工作2</br>
輸出腳設定 2~9</br>
功能:LED從右向左逐一亮起延遲0.1秒
```c++
int LED=10;
void setup() {
  // put your setup code here, to run once:
for(int i=2;i<10;i++)

  pinMode (i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   for(int i=2;i<10;i++)

   digitalWrite(i, HIGH);
   if(LED<=10)
    digitalWrite(LED,LOW);
   
   else
     LED=1;
   LED++;
   delay(100);
}
```
![gmail](https://github.com/UvularGecko2125/LED-/blob/master/DSC_0004.JPG)
工作3</br>
輸出腳設定 3 初始設定值255 每0.08S-5 直到歸零 在每0.08S+5 </br>
功能:像人一樣會呼吸的燈(這呼吸速度估計快死了)
```c++
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
```
![gmail](https://github.com/UvularGecko2125/LED-/blob/master/DSC_0005.JPG)
