//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}

void loop(){
  lcd.DrawLine(0,0,60,30,BLACK);
  lcd.Display();
}

 // void DrawLine(int x0,int y0,int x1,int y1,  bool color);
 // vẽ đoạn thẳng
 // x0,y0: tọa độ điểm thứ nhất
 // x1,y1: tọa độ điểm thứ hai
