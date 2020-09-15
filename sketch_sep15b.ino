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
