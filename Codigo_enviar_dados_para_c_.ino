const int LED = 13;
int var=0;
void setup() {
  Serial.begin(9600);    //configura comunicação serial com 9600 bps
  pinMode(LED,OUTPUT);   //configura pino do led como saída



}
void loop() 
    {
      if((Serial.available()))
      {

          Serial.write("ABCD");
          char c = Serial.read();   //le o byte disponivel
          delay(500);
          Serial.println(c); 
      }
    }
   
