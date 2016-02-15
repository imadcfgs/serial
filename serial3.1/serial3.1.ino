/***********************************************************
**                                                        **
**                                                        **
**                                                        **
***********************************************************/


//*****  Includes   ****************************************



//*****  Variables  ****************************************

int number= 24;

//*****  Setup  ********************************************

void setup() {

Serial.begin (9600);
}

//*****  Loop     *******************************************
void loop() {

Serial.print("DEC:");
Serial.print (number,DEC);
Serial.print(",Bin:");
Serial.print (number,BIN);
Serial.print(",OCT:");
Serial.print (number,OCT);
Serial.print(",HEX:");
Serial.println  (number,HEX);

if (number == 100)
{
  while(true)
  {
}

}
 number++;  
}


