/***********************************************************
**                                                        **
**                                                        **
**                                                        **
***********************************************************/


//*****  Includes   ****************************************



//*****  Variables  ****************************************
int HD_GB = 100;
long HD_MB;

//*****  Setup  ********************************************

void setup() {
  Serial.begin(9600);
  Serial.print("Your HD is ");
  Serial.print(HD_GB);
  Serial.println(" GB large.");
  HD_MB = HD_GB;
  HD_MB = 1024 * HD_MB;
  Serial.print("pots guarda  ");
  Serial.print(HD_MB);
  Serial.println(" Megabytes!");

}

//*****  Loop     *******************************************
void loop() {




}
