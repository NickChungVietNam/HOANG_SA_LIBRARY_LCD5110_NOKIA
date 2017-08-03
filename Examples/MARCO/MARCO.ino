//https://github.com/NickChungVietNam/HOANG_SA_LIBRARY_LCD5110_NOKIA.git
//http://arduino.vn/tutorial/1345-nokia5110-huong-dan-su-dung-va-chia-se-thu-vien-hoang-sa


#include "PCD8544_HOANGSA.h"
PCD8544 lcd(3,4,5,6);//RST,D/C, Din,CLK
void setup()   {
  lcd.ON();
  lcd.SET(50,0,0,0,4); 
}

// bạn có thể khai báo hàm theo 2 kiểu sau đây:
/*
allpixel    AllPixel
drawline    DrawLine
drawpixel   DrawPixel
getpixel   GetPixel
fillcircle   FillCircle
circle   Circle
corner   Corner
fillcorner   FillCorner
rect   Rect
fillrect   FillRect
tri   Tri
filltri   FillTri
elip   Elip
fillelip   FillElip
bitmap   Bitmap
plus_bitmap   Plus_Bitmap
asc_char   Asc_Char
asc_string   Asc_String
uni_char   Uni_Char
uni_string   Uni_String
runstatus   RunStatus
number_long   Number_Long
number_ulong   Number_Ulong
number_float   Number_Float
keep_angle   Keep_Angle
find_xy_elip   Find_XY_Elip
x_elip   X_Elip
y_elip   Y_Elip
find_xy_sphere   Find_XY_Sphere
x_sphere   X_Sphere
y_sphere   Y_Sphere
analog   Analog
pullup_4   Pullup_4
clear   Clear
display  Display

*/
void loop() {
lcd.Circle(20,24,20,BLACK);
lcd.circle(60,24,20,BLACK);
lcd.display();


}
