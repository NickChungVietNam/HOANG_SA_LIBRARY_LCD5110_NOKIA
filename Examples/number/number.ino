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
float m=0.123;

void loop(){ 

lcd.Number_Long(10,0,k,STYLE_NUMBER,BLACK);
lcd.Number_Ulong(10,18,l,CASIO_NUMBER,BLACK);
lcd.Number_Float(10, 40,m,3,ASCII_NUMBER,BLACK);
lcd.Display();
k++;
l++;
m++;
lcd.Clear();

}


//void Number_Long(int x, int y,long a,byte select_font, bool color);
//void Number_Ulong(int x, int y,unsigned long a,byte select_font, bool color);
//void Number_Float(int x, int y, float a,byte n, byte select_font,bool color);


//viết chữ số 
//x,y :tọa độ con trỏ
//a: tham số truyền vào với kiểu biến phù hợp
// select_font: chọn font
//ASCII_NUMBER hoặc bất kì số nào
//CASIO_NUMBER hoặc số 1
//STYLE_NUMBER hoặc số 2
// n: Nmax=10 (số chữ số muốn hiển thị sau dấu phảy( chỉ dùng cho kiểu float))

