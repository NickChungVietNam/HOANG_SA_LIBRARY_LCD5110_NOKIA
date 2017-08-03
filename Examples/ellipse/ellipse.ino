//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}

void loop(){
  lcd.Elip( 42,24,20,10,BLACK);
  lcd.Display();
}

//void Elip( int x, int  y,  int xRadius, int  yRadius, bool color);

// x,y: tâm ellipse
// xRadius,yRadius: bán kính trục đứng và trục ngang

