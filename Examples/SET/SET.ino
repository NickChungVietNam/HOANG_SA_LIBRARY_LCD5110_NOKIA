// đây là phần hướng dẫn dùng các cài đặt đặc biệt khác
//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa

#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 


//void SET(byte contrast, bool negative, bool rotation, bool mirror, byte tyledientro);
//void allpixel( byte color);// ép hiển thị toàn bộ điểm ảnh
  /** 
* biến contrast- độ tương phản- giá trị từ 0->63 (0x00 trở xuống 0x3f)
* biến negative- hiển thị âm bản- giá trị 0 hoặc 1
* biến rotation- đảo ngược màn hình- giá trị 0 hoặc 1
* biến mirror- hiển thi gương- giá trị 0 hoặc 1
* biến tyledientro- bằng R1/R2- thiết lập điện áp hoạt động- 0->6( 0x0 đến 0x6)
rotation và mirror hiện tại không khả dụng 24/11/2016
**/
}
void loop(){
  
  draw();
  lcd.SET(20,1,0,0,4);
 draw();

  lcd.SET(20,0,1,1,4);
  draw();     
}
 void draw(){
  
 lcd.Asc_Char(60,30,'A',BLACK);               
 lcd.Display();
 delay(1000);
 lcd.Clear();
 }

 
