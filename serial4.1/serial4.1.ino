/***********************************************************
**                                                        **
**            Control de temperatura                      **
**                                                        **
***********************************************************/


//*****  Includes   ****************************************


//*****  Variables  ****************************************
int temp = 100;

//*****  Setup  ********************************************

void setup() {
  Serial.begin(9600);

  if (temp < 90) {
    Serial.print("Aigua encara no bullint");
  }
  else if ( (temp >=  90) && (temp < 100))
  {
    Serial.print("apunt de bullir");

  }

 else if  ( temp == 100)
  {
    Serial.print("aigua 100");

  }
  else if ( temp > 100)
  {
    Serial.print("aigua bullint ");n}
}







//*****  Loop     *******************************************
void loop() {




}

