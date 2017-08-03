//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa
#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}



void loop(){
  int value=0;
while(true){
  if(value==500){value=0;}
 lcd.Analog( 0,0,80,40, value,BLACK);
 value+=5;
 delay(10);
 lcd.display();
}
}
// vẽ một đồ thị dạng sóng vói biến nhập vào  value
  //void Analog( int x, int y, int w, int h,  int value,bool color);
  //x,y: tọa độ khung ảnh, w,h, độ rộng chiều cao
  // value: 1->500
  // 
  