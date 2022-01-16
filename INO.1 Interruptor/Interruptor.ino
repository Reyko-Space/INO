// Projeto Interruptor
// By Reyko

int botao = 7;
int led = 13;
bool estadoLed = 0;
 
void setup()
{
  pinMode(botao, INPUT_PULLUP);       // define o pino do botao como entrada "INPUT"
  pinMode(led, OUTPUT);               // define o pino do LED como "OUTPUT"
}
 
void loop()
{
  if(digitalRead(botao) == LOW)       // se o botão for pressionado
  {
    estadoLed = !estadoLed;           // troca o estado da variável
    digitalWrite(led, estadoLed);     // fisicamente troca o estado do LED
    while(digitalRead(botao) == LOW); //  elimina o ruído do botão
    delay(100);       
  }    
}
