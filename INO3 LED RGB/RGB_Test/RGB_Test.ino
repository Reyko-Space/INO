// Projeto RGB
// https://portal.vidadesilicio.com.br/como-utilizar-o-led-rgb-com-arduino/

const int vermelho = 11;
const int verde = 10;
const int azul = 9;

String cor;

void setup()
{
   Serial.begin(9600);

   pinMode(vermelho, OUTPUT);
   pinMode(verde, OUTPUT);
   pinMode(azul, OUTPUT);
}

//Funções responsáveis por executar o brilho selecionado
void vermelhoFuncao(){
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
}
void azulFuncao(){
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH);
}
void verdeFuncao(){
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
}
void amareloFuncao(){
  analogWrite(vermelho, 255);
  analogWrite(verde, 50);
  analogWrite(azul, 0);
}
void roxoFuncao(){
  analogWrite(vermelho, 255);
  analogWrite(verde, 0);
  analogWrite(azul, 207);
}
void brancoFuncao(){
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(azul, HIGH);
}
void azulclaroFuncao(){
  digitalWrite(vermelho, 100 );
  digitalWrite(verde, 149);
  digitalWrite(azul, 237);
}
void cianoFuncao(){
  digitalWrite(vermelho, 0);
  digitalWrite(verde, 255);
  digitalWrite(azul, 255);
}

void loop()
{
  if(Serial.available()){
    cor = Serial.readString();
    Serial.println(cor);
  }
  if(cor == "Vermelho"){
    vermelhoFuncao();
  }
  if(cor == "Azul"){
    azulFuncao();
  }
  if(cor == "Verde"){
    verdeFuncao();
  }
  if(cor == "Amarelo"){
    amareloFuncao();
  }
  if(cor == "Roxo"){
    roxoFuncao();
  }
  if(cor == "Branco"){
    brancoFuncao();
  } 
    if(cor == "Azul_Claro"){
    azulclaroFuncao();
  } 
    if(cor == "Ciano"){
    cianoFuncao();
  } 
}
