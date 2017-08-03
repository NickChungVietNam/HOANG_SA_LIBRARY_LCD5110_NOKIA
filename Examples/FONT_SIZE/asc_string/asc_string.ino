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
  lcd.Asc_String(0,0,Asc("SIZE"),1, BLACK);
  lcd.Asc_String(0,8,Asc("SIZE"),2, BLACK);
  lcd.Asc_String(0,24,Asc("SIZE"),3, BLACK);
  lcd.display();
}
//void Asc_String(int x1, int y1,unsigned char c[] ,byte ty_le_phong_to, bool color);
//x1,y1: tọa độ con trỏ của chữ cái đầu tiên
// c: mảng kí tự dạng chuỗi kí tự 
// tỷ lệ phogs to >=1
