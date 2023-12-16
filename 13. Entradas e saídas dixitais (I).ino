// C++ code
/*
A partir da montaxe da práctica anterior, engade un pulsador no 
pin 10 que vai controlar a habilitación ou inhabilitación do 
circuíto. Cando o pulsador está premido, o circuíto non funciona 
(polo de agora imos deixar que cada LED quede no estado no que 
estaba). Cando non prememos o pulsador é cando funciona a 
programación que fixemos na práctica anterior.

Para realizar esta práctica terás que empregar o bloque 'IF' 
(SI condicional) e engadir unha condición relativa ao pin 10 na 
casilla correspondente.

Pode ser que o pulsador non funcione correctamente todas as veces.
Se acontece así, non te preocupes e pregunta en clase como se 
pode solucionar.
*/


#define PULSADOR 10
#define LED_INTEGRADO 13
#define LED 12
#define RELE 11

bool pulsador;/*declarar como bool (activo ou desactivado, osea
				(0-1)a variable chamada pulsador*/
void setup()
{
  	pinMode(LED_BUILTIN, OUTPUT);
  	pinMode(12,OUTPUT);
  	pinMode(11,OUTPUT);
  	pinMode(10, INPUT);

}

void loop()
{
  /*Temos que decirlle ao ARDUINO que hai unha variable chamada 
  	pusador*/
  pulsador = digitalRead(10);
  
  
  /*Co pulsador en "activo" osea 1 a secuencia funciona, polo caso
  	contrario "desactivado" osea 0 a secuencia non funcionará */
  if (!pulsador) {
    
    
    //Actívase o LED por 10s.
  	digitalWrite(LED_BUILTIN,HIGH);
    delay(10000);
    
    //Desactívase o LED por 4s.
    digitalWrite (LED_BUILTIN,LOW);
  	delay(4000);
    
    //Activase led 12 e bobina ao mesmo tempo, e detense aos 10s.
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    delay(10000);
    
    //Desactivase led 12 e bobina durante 4s.
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    delay(4000);
  }
  else if (pulsador){
  	delay(5000);
  }
}
