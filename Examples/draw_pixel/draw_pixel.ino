//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa



#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}

void loop(){
  lcd.DrawPixel(42,20,BLACK);
  lcd.DrawPixel(42,23,BLACK);
  lcd.DrawPixel(42,26,BLACK);
  lcd.Display();
}
//void DrawPixel(int x,int y, bool color);
// vẽ 1 điểm có tọa độ x,y
