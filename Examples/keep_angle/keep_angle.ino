//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  Serial.begin(9600);
}

void loop(){
  int keep;
for( int goc=-720; goc<3600; goc++){
      Serial.print( goc);
      Serial.print("_");
keep=lcd.Keep_Angle(goc);// giữ góc
      Serial.println( keep);
  delay(10);
}

  
}

//int Keep_Angle(int goc);
// giữ cho góc đang tăng _luôn thuộc khoảng 0 -> 360
