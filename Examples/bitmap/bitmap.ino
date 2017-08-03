
//_____________^anh.h___anh2.h_anh3.h
// nhấn vào newtab để thêm file h mới
//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}


#include "anh.h"// chú ý thêm



void loop(){
  /*
  lcd.Bitmap( 60,30,16,16,logo16_glcd_bmp,BLACK);
lcd.display();
delay(3000);
lcd.clear();
  */
  
  lcd.Bitmap( 0,0,84,48,image_glcd_bmp,BLACK); 
lcd.Display();
delay(3000);
lcd.Clear();
}
//void Bitmap(int x, int y, unsigned int w, unsigned int h,const uint8_t *bitmap , bool color);
// vẽ ảnh bitmap
//x,y: tọa độ, w,h: kích thước của bitmap đó, 
//*bitmap: tên địa chỉ của file bitmap



 

