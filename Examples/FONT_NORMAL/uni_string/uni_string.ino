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
lcd.Uni_String( 30, 5,Uni( u"\x111\x1ECF"), BLACK);//đỏ
//c2:
const static char16_t text[] PROGMEM =u"\x111\x65n";//đen
lcd.Uni_String( 30, 18,text, BLACK);
  
lcd.Display();
}

//void Uni_String(int x, int y, char16_t c[] , bool color);

//cài bộ gõ UNIKEY ở chế độ "unicode c string", nhấn "Đóng" rồi gõ như bình thường nhé
// viết 1 chuỗi chữ Việt, 
// x,y: tọa độ con trỏ căn lề
// char16_t : kiểu char 16bit, nhập vào chữ chuẩn mã hóa Unicode
//PROGMEM: lưu hằng vào Flash
// chú ý tiền tố : u" "