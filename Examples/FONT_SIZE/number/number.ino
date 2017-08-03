//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa



#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK


void setup()   {

  lcd.ON();
  lcd.SET(50,0,0,0,4);
  
}


int k=0;// int , long...
byte l=0;// byte, unsigned int, unsigned long...
float m=-50.123;

void loop(){ 

lcd.Number_Long(5,5,k,STYLE_NUMBER,2,BLACK);
//lcd.Number_Long(5,5,k,CASIO_NUMBER,2,BLACK);
//lcd.Number_Ulong(5,5,l,CASIO_NUMBER,3,BLACK);
//lcd.Number_Ulong(5,5,l,ASCII_NUMBER,3,BLACK);
//lcd.Number_Float(5, 5,m,3,ASCII_NUMBER,2,BLACK);
//lcd.Number_Float(5, 5,m,3,STYLE_NUMBER,2,BLACK);

lcd.Display();
k++;
l++;
m++;
lcd.Clear();

}

//void Number_Long(int x, int y,long a,byte select_font,byte he_so_phong_to, bool color);
//void Number_Ulong(int x, int y,unsigned long a,byte select_font,byte he_so_phong_to, bool color);
//void Number_Float(int x, int y, float a,byte n, byte select_font,byte he_so_phong_to,bool color);
// hệ số phóng to>=1
