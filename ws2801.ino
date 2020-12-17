//create arrays
int RED[8];
int GREEN[8];
int BLUE[8];
//
//pin map
int clockpin = 4;
int datapin = 2;
//
//setup code
void setup()
{
pinMode(clockpin, OUTPUT);
pinMode(datapin, OUTPUT);
for (int i=0;i<120;i++)
{
RED[i]=0;
BLUE[i]=0;
GREEN[i]=0;
}
}
//
void updatestring()
{
for(int i=0;i<120;i++)
{
shiftOut(datapin, clockpin, MSBFIRST, BLUE[i]);
shiftOut(datapin, clockpin, MSBFIRST, GREEN[i]);
shiftOut(datapin, clockpin, MSBFIRST, RED[i]);
}
}
//
void loop()
{
for(int i=0;i<120;i++)
{
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
updatestring();
RED[i]=255;GREEN[i]=255;BLUE[i]=255;
delay(100);
}
}
