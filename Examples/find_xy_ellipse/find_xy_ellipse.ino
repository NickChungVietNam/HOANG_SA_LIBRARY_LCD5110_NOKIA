//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}

void loop(){
  byte x,y;
  byte x0=42, y0=24, a=30,b=20;
  for( int goc=0; goc<360; goc++){
    
    lcd.Find_XY_Elip(x0,y0,a,b,goc);
    x=lcd.X_Elip();
    y=lcd.Y_Elip();

    
    lcd.DrawPixel( x,y,BLACK);
    lcd.Display();
    delay(30);
  }
  
  lcd.Clear();
}
// void Find_XY_Elip(int x0, int y0,  int a,  int b,int goc_alpha) ;
//int X_Elip();
//int Y_Elip();
// TRẢ VỀ TỌA ĐỘ (X,Y) CỦA ĐIỂM THUỘC ĐƯỜNG ELLIPSE
//TÌM TẬP CÁC ĐIỂM CÓ QUỸ ĐẠO THUỘC ELLIPSE
// goc_alpha: góc ( độ) tạo bởi điểm đó với trục hoành ( xem hình minh họa nhé); 
// góc nhỏ alpha min=-32768, alpha max=32767 
