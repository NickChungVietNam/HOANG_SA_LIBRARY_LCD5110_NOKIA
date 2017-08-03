// đây là phần hướng dẫn dùng các cài đặt liên quan
//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa

#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}

//color: chỉ chấp nhận 3 loại sau BLACK (1), WHITE(0),DELETE(0), 
// lcd.display();: là hàm cho phép màn hình hiển thị những gì đã vẽ
// lcd.clear(); : xóa tất cả màn hình 


void loop(){
  lcd.Rect( 52,24,20,20,BLACK);// vẽ hcn A màu đen 
  lcd.Display();
  delay(1000);
  lcd.Rect( 52,24,20,20,DELETE);// xóa hcn  A
  lcd.Display();
  delay(1000);
  lcd.Rect( 25,24,20,20,BLACK);// vẽ hcn B màu đen 
  lcd.Display();
  delay(1000);
  lcd.Rect( 25,24,20,20,WHITE);//vẽ hcn B màu trắng 
  lcd.Display();
  delay(1000);
  lcd.Clear();// xóa toàn màn hình
}


 
