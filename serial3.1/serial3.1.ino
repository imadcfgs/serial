/***********************************************************
**                                                        **
**                                                        **
**                                                        **
***********************************************************/


//*****  Includes   ****************************************



//*****  Variables  ****************************************

int number = 24;

//*****  Setup  ********************************************

void setup() {

  Serial.begin (9600);
}
// Taula ascii
//*****  Loop     *******************************************
void loop() {

  Serial.print("DEC:");
  Serial.print (number, DEC);
  Serial.print(",Bin:");
  Serial.print (number, BIN);
  Serial.print(",OCT:");
  Serial.print (number, OCT);
  Serial.print(",HEX:");
  Serial.println  (number, HEX);
  if (number == 100) // si numero es igual a 100 es para
  {
    while (true)
    {
    }

  }
  number++;  // si no es igual a 100 anira suman fins arriba 100
}


