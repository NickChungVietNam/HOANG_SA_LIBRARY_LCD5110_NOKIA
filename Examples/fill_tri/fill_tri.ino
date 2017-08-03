//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa



#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}

void loop(){
  lcd.FillTri( 0,40,42,0,80,40,BLACK);
  lcd.Display();
}
//void FillTri(int x1,int y1,int x2,int y2 ,int x3,int y3, bool color);
// vẽ tam giác TTO MÀU có 3 đỉnh A(x1,y1) B(x2,y2), C(x3,y3)
