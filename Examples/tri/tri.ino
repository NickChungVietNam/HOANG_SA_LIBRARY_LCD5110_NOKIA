//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}

void loop(){
  lcd.Tri(40,10,10,40,70,40,BLACK);
  lcd.Display();
}
//void Tri (int x1,int y1,int x2,int y2,int x3,int y3, bool color);
//vẽ tam giác
//x1,y1: tọa độ điểm thứ nhất
// x2,y2: td điểm thứ  hai
// x3,y3: tđ điểm thứ ba