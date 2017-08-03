//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}


void loop(){
  
lcd.Uni_String( 20, 0 ,Uni( u"VI\x1EC6T"), 2,BLACK);// việt 
lcd.Uni_String( 20, 25 ,Uni( u"N\x41M"), 2,BLACK);// nam
  
lcd.Display();
}

//void Uni_String(int x, int y, char16_t c[] ,byte he_so_phong_to, bool color);
//hẹ số phóng to>=1