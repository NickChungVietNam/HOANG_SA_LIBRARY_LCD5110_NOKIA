//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}

void loop(){
  lcd.FillCorner( 20,10, 40,30,5,BLACK);
  lcd.Display();
  
}
//void FillCorner( int x,int y,int w,int h, int r, bool color);
//x,y: tọa độ đỉnh góc trái trên cùng
// w,h: chiều rộng thao trục x và trục y
//r: bán kính đường tròn bo góc
