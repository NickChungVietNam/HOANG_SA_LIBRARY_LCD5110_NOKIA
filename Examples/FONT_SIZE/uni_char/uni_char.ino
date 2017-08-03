//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}

void loop(){
  lcd.Uni_Char(0,0,u'A',1,BLACK);
  lcd.Uni_Char(10,0,u'B',2,BLACK);
  lcd.Uni_Char(25,0,u'C',3,BLACK);
  lcd.Uni_Char(45,0,u'D',4,BLACK);
  
lcd.display();
}

//void Uni_Char(int x1, int y1, char16_t c,byte he_so_phong_to, bool color);
//cài bộ gõ UNIKEY ở chế độ "unicode c string" , nhấn "Đóng"rồi gõ như bình thường nhé
// viết 1 kí tự chữ Việt, 
//hệ số phóng to>=1