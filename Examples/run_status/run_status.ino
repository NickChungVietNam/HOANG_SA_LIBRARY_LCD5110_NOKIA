//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}

void loop(){
  lcd.RunStatus(5,10,15,80,"Sketch uses 3,526 bytes (10%) of program storage space. Maximum is 32,256 bytes. ", BLACK);
  lcd.Display();
}

//void RunStatus( int x, int y, byte a,unsigned int t, const char *c PROGMEM, bool color) ;
//viết kí tự chạy từ phải sang trái
//x,y: tọa độ con trỏ
// a: số kí tự cần hiển thị
//t: tốc độ (1-100)

