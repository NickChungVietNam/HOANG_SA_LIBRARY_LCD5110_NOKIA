//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}

void loop(){
 lcd.Asc_Char(0,0,'A',1,BLACK);
 lcd.Asc_Char(6,0,'B',2,BLACK);
 lcd.Asc_Char(18,0,'C',3,BLACK);
 lcd.Asc_Char(36,0,'D',4,BLACK);
 lcd.Asc_Char(62,0,'E',5,BLACK);
 lcd.Display();
}

//  void Asc_Char(int x1, int y1,unsigned char c,byte ty_le_phong_to, bool color);
//viết 1 kí tự trong bảng ASCII, biến truyền vào có kiếu (unsigned char)
// x1,y1: tọa độ con trỏ
///unsigned char có miền giá trị (0->255);
//tỷ lệ phóng to >=1