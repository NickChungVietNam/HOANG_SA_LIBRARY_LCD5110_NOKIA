//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa



#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}


void loop(){
  //c1:
  lcd.Asc_String(10,15,Asc(" Cach 1"), BLACK);
  //c2:
  const static unsigned char text[] PROGMEM =" Cach 2";
  lcd.Asc_String(10,35,text, BLACK);
  
  lcd.display();
}
//void Asc_String(int x1, int y1,unsigned char c[] , bool color);
//x1,y1: tọa độ con trỏ của chữ cái đầu tiên
// c: mảng kí tự dạng chuỗi kí tự 

