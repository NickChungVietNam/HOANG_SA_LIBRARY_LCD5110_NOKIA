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
  
  lcd.Uni_Char(40,10,u'A',BLACK);//A
  //c2:
  const static char16_t text=u'\x1ED8';//Ộ
  lcd.Uni_Char(40,31,text,BLACK);
lcd.display();
}

//void Uni_Char(int x1, int y1, char16_t c, bool color);
//cài bộ gõ UNIKEY ở chế độ "unicode c string" , nhấn "Đóng"rồi gõ như bình thường nhé
// viết 1 kí tự chữ Việt, 
// x,y: tọa độ con trỏ căn lề
// char16_t : kiểu char 16bit, nhập vào chữ chuẩn mã hóa Unicode
// chú ý tiền tố : u