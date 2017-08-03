//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa



#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}

void loop(){
  lcd.Corner( 10,10,60,30,8,BLACK);
  lcd.display();
}
// hình chữ nhật kèm hiệu ứng bo góc
//void Corner( int x,int y, int w, int h,int r, bool color);
// x,y: tọa độ cúa đỉnh bên trái ,trên cùng
//w,h: chiều ngang, chiều cao;
//r : bán kính đường tròn bo góc

