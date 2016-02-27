/***********************************************************
**                                                        **
**                Descripcio programa                     **
**                                                        **
***********************************************************/
//*****  Includes   ****************************************

//*****  Variables  ****************************************
int a = 5; // crear una variabla a i li asignem numero 5
int b = 10;
int c = 15 ;

//*****  Setup  ********************************************

void setup() {
  Serial.begin(9600);
  Serial.print ("a =");// asignar variables
  Serial.println (a); mostrar variabla en pantalla
  Serial.print ("b =");
  Serial.println (b);
  Serial.print ("c =");
  Serial.println (c);
  Serial.print ("a + b = "); //imprimeix per pantalla
  Serial.println (a + b); //fa la sumar
  Serial.print ("a * b = ");// imprimeix per pantalla
  Serial.println (a * c);//fa la multiplicacio
  Serial.print ("a - c = ");// imprimeix per pantalla
  Serial.println (a + c);//fa la restar
  Serial.print ("a / b = ");//imprimeix per pantalla
  Serial.println (a / b); //fa la divisio

}

//*****  Loop     *******************************************
void loop() {

}
