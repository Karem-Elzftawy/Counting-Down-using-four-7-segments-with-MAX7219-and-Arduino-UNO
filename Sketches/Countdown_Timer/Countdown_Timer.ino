#include "LedControl.h"
// Arduino Pin 7 to DIN, 6 to CLK, 5 to Load, no.of devices is 1
LedControl lc=LedControl(7,6,5,1);

void setup()
{
  // Initialize the MAX7219 device
  lc.shutdown(0,false);   // Enable display
  lc.setIntensity(0,10);  // Set brightness level (0 is min, 15 is max)
}


void loop()
{
  for(int Min1=9; Min1>=0; Min1--)
  {
    lc.setDigit(0,0,Min1,true);  // Display 1 to Digit1, " "
    
    for(int Min2=9; Min2>=0; Min2--)
     {
        lc.setDigit(0,1,Min2,true);  // Display 1 to Digit1, " "
        //delay(500);
        for(int Sec1=5; Sec1>=0; Sec1--)
        {
           lc.setDigit(0,2,Sec1,true);  // Display 1 to Digit1, " "

           for(int Sec2=9; Sec2>=0; Sec2--)
           {
              lc.setDigit(0,3,Sec2,true);  // Display 1 to Digit1, " "
              delay(100);
           }
        }
     }
  }
}



