//  Projeto Botao liga - Botao desliga
//  By Reyko

int botao = 7;
int botao2 = 6;
int led = 13;
bool estadoLed = 0;

void setup()
{
  pinMode(botao, INPUT_PULLUP);       // define o pino do botao como entrada "INPUT"
  pinMode(botao2, INPUT_PULLUP);      // define o pino do botao2 como entrada "INPUT"
  pinMode(led, OUTPUT);               // define o pino do LED como saida "OUTPUT"
}

void loop()
{
  if(digitalRead(botao) == LOW)       // se o botão for pressionado
  {
    digitalWrite(led, HIGH);          // acende o LED
    while(digitalRead(botao) == LOW); // compensacao de ruidos 
    delay(100);       
  }   
    if(digitalRead(botao2) == LOW)    // se o botão for pressionado
  {
    digitalWrite(led, LOW);           // desliga o LED
    while(digitalRead(botao) == LOW); // compensacao de ruidos
    delay(100);       
  }    
}
