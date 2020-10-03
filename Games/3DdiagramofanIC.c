#include<graphics.h>
#include<stdio.h>
#include<time.h>
void liner(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int
x5,int y5,int i);
void shadow(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int
x5,int y5,int x6,int y6,int x7,int y7);
void rightlead( int x1,int y1,int x2,int y2,int x3,int y3,int x4,int
y4,int x5,int y5,int x6,int y6,int x7,int y7,int x8,int y8,int x9,int
y9,int x10,int y10,int x11, int y11);
void leftlead();
void identifier();
void bibin();

void main()
{
int gd=DETECT, gm,i=3;
initgraph(&gd,&gm,"c:\tc\bgi");
setbkcolor(6);
cleardevice();
setcolor(i);
line(263,192,108,151);
line(108,151,345,40);
line(263,192,507,68);
line(507,68,345,40);
setfillstyle(1,9);

floodfill(347,49,i);//for upper part
setcolor(i);
line(263,192,269,231);
line(269,231,89,179);
line(89,179,108,151);
setfillstyle(1,9);
floodfill(193,194,i);//for part left light blue
setcolor(i);
line(269,231,524,93);
line(524,93,506,69);
floodfill(454,113,i);//for part side light blue
setcolor(i);
line(269,231,264,260);
line(264,260,101,215);
line(101,215,89,179);
setfillstyle(1,1);//part left for blue
floodfill(193,234,i);
setcolor(i);
line(264,260,514,125);
line(525,94,514,125);
setfillstyle(1,1);
floodfill(489,126,i);
setcolor(i);//part side blue

//end of upperpart

line(102,315,292,383);
line(294,419,292,383);
line(294,419,101,348);
line(102,315,101,348);
setfillstyle(1,1);//lower left
floodfill(154,360,i);
line(542,222,292,383);
line(542,257,542,222);
line(542,257,294,419);
setfillstyle(1,1);
floodfill(480,282,i);//lower side
line(102,315,222,249);
line(407,183,542,222);
setfillstyle(1,1);
floodfill(206,274,i);
line(147,331,146,350);
line(259,390,146,350);
line(258,371,259,390);
line(147,331,411,184);
line(411,184,503,210);
line(503,210,258,371);
setfillstyle(1,13);
floodfill(273,297,i);
//end of  base of low part
// start of holes
line(130,311,138,313);
line(138,313,147,307);
line(147,307,139,305);
line(139,305,130,311);
setfillstyle(1,8);
floodfill(139,309,i);
//left 1
liner(176,285,183,287,193,282,186,280,185,284,i);
liner(221,260,229,262,239,257,232,255,230,258,i);
liner(299,362,308,365,315,358,309,357,309,361,i);
liner(347,332,354,335,363,330,357,327,357,330,i);
liner(389,305,396,306,405,301,399,299,399,303,i);
liner(428,280,436,282,444,277,438,276,437,279,i);
liner(467,255,475,257,482,252,476,250,475,255,i);
liner(505,233,511,234,521,229,514,227,513,231,i);
delay(1500);
rightlead(283,225,297,226,301,215,314,220,298,280,317,280,305,282,313,282,
305,346,312,343,309,240);
shadow(282,226,294,231,294,281,300,285,301,346,305,346,296,280);
delay(500);
rightlead(333,197,344,200,348,189,360,196,346,253,362,252,350,256,358,255,
351,316,358,314,353,221);
shadow(333,197,342,206,343,254,348,258,348,316,351,316,349,315);//for
second lead
delay(500);
rightlead(373,175,385,178,391,166,402,172,388,228,404,225,393,232,400,231,
394,290,400,287,397,197);
shadow(373,175,383,182,385,229,390,233,391,291,394,290,392,280);
delay(500);
rightlead(417,152,428,155,432,143,442,148,430,205,446,202,435,208,441,207,
436,265,441,263,436,178);
shadow(417,152,426,161,426,205,431,211,431,267,436,265,425,155);
delay(500);
rightlead(456,130,466,133,471,122,479,125,469,181,483,180,473,184,479,184,
474,239,480,238,475,158);
shadow(456,130,464,137,465,183,471,187,472,241,474,239,473,220);
delay(500);
rightlead(493,110,501,114,506,102,517,107,504,160,519,159,508,163,515,162,
509,216,515,216,513,137);

shadow(493,110,499,117,499,162,505,165,505,218,509,216,506,213);
delay(500);
leftlead();
identifier();

getch();
bibin();
}
void liner(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int
x5,int y5,int i)
{

line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x4,y4,x1,y1);
setfillstyle(1,8);
floodfill(x5,y5,i);//x1,y1 left most then go anticlockwise x5,y5 for 
fill
}

void rightlead( int x1,int y1,int x2,int y2,int x3,int y3,int x4,int
y4,int x5,int y5,int x6,int y6,int x7,int y7,int x8,int y8,int x9,int
y9,int x10,int y10,int x11,int y11)
{
setcolor(15);
line(x1,y1,x3,y3);//for starting line
line(x1,y1,x2,y2);
line(x3,y3,x4,y4);
line(x2,y2,x5,y5);
line(x4,y4,x6,y6);
line(x5,y5,x7,y7);
line(x6,y6,x8,y8);
line(x7,y7,x9,y9);
line(x10,y10,x8,y8);
line(x10,y10,x9,y9);
setfillstyle(1,7);
floodfill(x11,y11,15);
}
void shadow(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int
x5,int y5,int x6,int y6,int x7,int y7)
{
setcolor(15);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x4,y4);
line(x5,y5,x4,y4);
line(x5,y5,x6,y6);
setfillstyle(1,8);
floodfill(x7,y7,15);
}

void leftlead()
{
setcolor(15);
line(132,224,133,232);
line(133,232,139,236);
line(139,236,140,297);
line(140,297,146,296);
line(146,296,146,237);
line(146,237,152,232);
line(152,232,152,229);
line(152,229,132,224);
setfillstyle(1,7);
floodfill(142,244,15);
line(129,224,128,234);
line(128,234,135,240);
line(135,240,137,298);
line(137,298,140,297);
line(132,224,129,224);
setfillstyle(1,8);
floodfill(131,236,15);



//end of first lead

line(181,237,181,273);
line(181,273,188,272);
line(188,272,188,241);
line(181,237,188,241);

setfillstyle(1,7);
floodfill(185,255,15);


line(177,237,181,239);
line(177,237,179,275);
line(179,275,181,273);
setfillstyle(1,8);
floodfill(179,256,15);
line(221,249,220,253);
line(220,253,226,252);
line(226,252,225,250);
line(225,250,221,249);
floodfill(223,251,15);
}


void identifier()
{

setcolor(6);
arc(196,177,350,160,26);
line(171,168,222,181);
setfillstyle(1,1);
floodfill(200,170,6);
}


void bibin()
{
int midx=320,midy=230;

      cleardevice();
      setbkcolor(RED);
     settextjustify(CENTER_TEXT,CENTER_TEXT);
     setcolor(GREEN);
     settextstyle(5, VERT_DIR, 4);
     return ;
}
