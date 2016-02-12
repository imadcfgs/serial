/***********************************************************
**       programa que calcula la hipotenusa               **
**       apartir de dos catets                            **
**                                                        **
**                                                        **
***********************************************************/


//*****  Includes   ****************************************



//*****  Variables  ****************************************

int a = 3;
int b = 4;
int c = 2;


int h;

//*****  Setup  ********************************************

void setup() {
  Serial.begin(9600);
  Serial.println("calcular la hipotenusa");
  Serial.print( "catet a=");
  Serial.println(a);
  Serial.print( "catet b=");
  Serial.println(b);
  Serial.print( "catet h=");
  Serial.println( sqrt(pow (a, c) + pow(b, c)));
}

//*****  Loop     *******************************************
void loop() {




}
