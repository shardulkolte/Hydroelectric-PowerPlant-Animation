#include<graphics.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
void dam_door(); //door opning algo
void dam_struct();//dam structure
void turbine();//turbine structure
void rect();//moving turbine
void arrow();//water flowing arrow
void color();//animation color
void watercolor();//water color after door opening
void bulbglow();//bulb glowing after electricity generation
void damdoorcol();//color of dam door
int page=0;
main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,(char*)"");
dam_door();
while(1)
{
arrow();
for(int q=0;q<=10;q++)
{
 rect();
}
}
getch();
closegraph();
}
void dam_door()
{
for(int m=0;m>=-75;m--)
{
setactivepage(page);
setvisualpage(1-page);
cleardevice();//to clear screen
turbine();
dam_struct();
rectangle(84,248+m,89,330+m);//dam door

setfillstyle(SOLID_FILL,WHITE); //dam door
floodfill(85,250+m,WHITE);

color();

page=1-page;
delay(100);
}
}

void turbine()
{
rectangle(270,312,325,352);
}

void arrow()
{
for(int s=0;s<=50;s++)
{
setactivepage(page);
setvisualpage(1-page);
cleardevice();
turbine();
dam_struct();
rectangle(84,174,89,247);//damdoor
//structor of arrow
line(5+s,279,5+s,293);
line(5+s,279,22+s,279);
line(5+s,293,22+s,293);
line(22+s,279,22+s,271);
line(22+s,293,22+s,300);
line(22+s,271,41+s,285);
line(22+s,300,41+s,285);
//structor of arrow
color();
watercolor();
damdoorcol();

page=1-page;
delay(15);
}
for(int i=0;i<=6;i++)
{
for(int j=0;j<=4;j++)
{
	setactivepage(page);
  	setvisualpage(1-page);

cleardevice();
turbine();
dam_struct();
rectangle(84,174,89,247);
//structur of arrow
line(132+16*i+j,286+4*i+j-1,125+16*i+j,299+4*i+j-1);
line(132+16*i+j,286+4*i+j-1,148+16*i+j,292+4*i+j-1);
line(125+16*i+j,299+4*i+j-1,144+16*i+j,306+4*i+j-1);
line(148+16*i+j,292+4*i+j-1,150+16*i+j,287+4*i+j-1);
line(144+16*i+j,306+4*i+j-1,142+16*i+j,313+4*i+j-1);
line(150+16*i+j,287+4*i+j-1,160+16*i+j,304+4*i+j-1);
line(142+16*i+j,313+4*i+j-1,160+16*i+j,304+4*i+j-1);
//structur of arrow
color();
watercolor();
damdoorcol();

page=1-page;
delay(50);
}
}
}

void rect()
{
for(int k=34;k<=44;k++)
{
	setactivepage(page);
setvisualpage(1-page);
cleardevice();
turbine();
dam_struct();
rectangle(84,174,89,247);
//turbine moving
rectangle(275+k,312,280+k,352);
rectangle(285+k-20,312,290+k-20,352);
rectangle(295+k-40,312,300+k-40,352);
rectangle(305+k-60,312,310+k-60,352);
rectangle(315+k-80,312,320+k-80,352);
//turbine moving
color();
watercolor();
damdoorcol();

page=1-page;
delay(50);


//bulbglow
for(int si=0;si<=1;si++)
{
	setactivepage(page);
setvisualpage(1-page);
bulbglow();
page=1-page;
delay(10);
}
}
}

void bulbglow()
{
//light glow
setcolor(YELLOW);
ellipse(349,96,180,300,93,30);
ellipse(385,96,180,307,128,35);
ellipse(499,123,180,315,38,10);
ellipse(480,100,260,360,100,15);
//tower
setcolor(WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(535,125,WHITE);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(575,84,WHITE);
//light glow
}

void dam_struct()
{
//frame
line(0,0,0,480);
line(0,0,640,0);
line(639,0,639,477);
line(0,477,639,477);
//dam structure
line(70,67,70,250);
line(70,250,80,250);
line(80,250,80,173);
line(80,173,93,173);
line(93,173,93,250);
line(93,250,110,250);
line(93,320,110,320);
line(110,250,247,305);
line(110,320,247,379);
line(93,320,93,335);
line(80,335,93,335);
line(80,335,80,325);
line(80,325,70,325);
line(70,325,70,480);
ellipse(267,375,190,350,23,15);
ellipse(269,306,12,175,22,15);
line(287,377,287,465);
line(315,377,315,430);
line(315,430,408,425);
arc(297,465,180,270,10);
line(297,474,408,460);
line(408,460,458,480);
line(70,67,115,67);
line(115,67,115,135);
line(115,135,230,245);
line(230,245,230,135);
line(230,135,370,135);
line(370,135,370,245);
line(370,245,395,245);
line(395,245,395,230);
line(395,230,408,230);
line(408,230,408,426);
rectangle(248,145,353,245);
rectangle(260,240,341,245);
rectangle(253,236,348,240);
rectangle(260,210,341,215);
rectangle(265,215,336,236);
rectangle(290,245,311,302);
rectangle(286,302,315,312);

ellipse(344,340,224,137,40,55);

ellipse(283,172,0,360,16,5);
ellipse(319,172,0,360,16,5);
line(268,174,268,210);
line(296,174,296,210);
line(304,174,304,210);
line(332,174,332,210);
line(250,134,255,70);
line(260,134,255,70);
//dam structure
//scnery
line(0,180,70,180);
line(0,100,70,100);
line(115,100,252,100);
line(255,100,639,100);
line(408,358,639,358);

//mountain-scenery
line(0,100,60,40);
line(60,40,100,67);
line(91,60,112,47);
line(112,47,146,68);
line(115,100,175,40);
line(175,40,235,100);
line(220,84,300,40);
line(300,40,380,100);
line(348,77,400,40);
line(400,40,466,87);
line(444,100,510,60);
line(510,60,515,70);
line(515,70,560,50);
line(560,50,639,70);
//mountain-scenery
//tower
line(403,222,425,93);
line(447,222,425,93);
line(425,207,403,222);
line(425,207,447,222);
line(425,207,441,197);
line(409,197,425,207);
line(409,197,439,177);
line(441,197,412,177);
line(412,177,435,161);
line(439,177,415,161);
line(415,161,434,147);
line(435,161,418,147);
line(434,146,421,121);
line(430,121,417,147);

line(396,115,421,115);
line(429,115,459,115);
line(396,115,419,130);
line(459,115,431,130);

rectangle(396,115,399,122);
rectangle(459,115,462,122);

ellipse(349,96,180,300,93,30);
ellipse(385,96,180,307,128,35);
ellipse(499,123,180,315,38,10);
ellipse(480,100,260,360,100,15);
//tower


//streetlight
rectangle(519,120,525,288);
arc(535,125,10,180,10);
ellipse(535,125,0,360,10,5);

rectangle(580,84,582,148);
arc(575,84,0,180,5);
ellipse(575,84,0,360,5,2);
//streetlight

//road
line(562,100,530,290);
line(564,100,600,243);
arc(550,290,180,270,20);
line(551,310,639,310);
arc(620,243,180,270,20);
//roadstrip(white)
line(620,263,639,263);
line(564,136,567,136);
line(564,136,562,153);
line(562,153,569,153);
line(569,153,567,136);

line(564,168,569,168);
line(564,168,562,185);
line(562,185,572,185);
line(572,185,569,168);

line(564,203,569,203);
line(564,203,559,234);
line(559,234,574,234);
line(574,234,569,203);
//roasstrip(white)
//road
}

void color()
{
setfillstyle(SOLID_FILL,DARKGRAY); //dam struct
floodfill(240,440,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(50,130,WHITE);
setfillstyle(SOLID_FILL,DARKGRAY); //dam struct
floodfill(356,261,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(175,150,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(397,126,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(328,114,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(492,109,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(494,176,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(490,176,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(598,168,WHITE);
setfillstyle(SOLID_FILL,BROWN); //soil
floodfill(568,103,WHITE);

setfillstyle(SOLID_FILL,GREEN); //mountain
floodfill(50,80,WHITE);
setfillstyle(SOLID_FILL,GREEN); //mountain
floodfill(127,70,WHITE);
setfillstyle(SOLID_FILL,GREEN); //mountain
floodfill(174,83,WHITE);
setfillstyle(SOLID_FILL,GREEN); //mountain
floodfill(297,74,WHITE);
setfillstyle(SOLID_FILL,GREEN); //mountain
floodfill(408,82,WHITE);
setfillstyle(SOLID_FILL,GREEN); //mountain
floodfill(514,87,WHITE);

setfillstyle(WIDE_DOT_FILL,WHITE); //sky
floodfill(107,23,WHITE);

setfillstyle(SOLID_FILL,BLUE); //transformer
floodfill(280,197,WHITE);
setfillstyle(SOLID_FILL,BLUE); //transformer
floodfill(326,197,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE); //transformer
floodfill(287,172,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE); //transformer
floodfill(319,172,WHITE);

setfillstyle(SOLID_FILL,CYAN); //Connector rod
floodfill(298,281,WHITE);
setfillstyle(SOLID_FILL,LIGHTCYAN); //Connector rod
floodfill(300,308,WHITE);

setfillstyle(SOLID_FILL,LIGHTGRAY); //GENERATOR
floodfill(299,232,WHITE);

setfillstyle(SOLID_FILL,WHITE); //powerhouse
floodfill(300,156,WHITE);

setfillstyle(SOLID_FILL,WHITE); //roadstrip
floodfill(566,220,WHITE);
setfillstyle(SOLID_FILL,WHITE); //roadstrip
floodfill(568,179,WHITE);
setfillstyle(SOLID_FILL,WHITE); //roadstrip
floodfill(566,147,WHITE);

setfillstyle(SOLID_FILL,DARKGRAY); //LightPole
floodfill(520,122,WHITE);
setfillstyle(SOLID_FILL,DARKGRAY); //LightPole
floodfill(520,286,WHITE);
setfillstyle(SOLID_FILL,DARKGRAY); //LightPole
floodfill(581,85,WHITE);
setfillstyle(SOLID_FILL,DARKGRAY); //LightPole
floodfill(581,146,WHITE);

setfillstyle(SOLID_FILL,WHITE); //LightPoleholder
floodfill(535,119,WHITE);
setfillstyle(SOLID_FILL,WHITE); //LightPoleholder
floodfill(575,82,WHITE);
}

void watercolor()
{
	setfillstyle(SOLID_FILL,LIGHTBLUE);//watercolor
	floodfill(10,400,WHITE);
}

void damdoorcol()
{
	setfillstyle(SOLID_FILL,WHITE); //damdoor
	floodfill(85,175,WHITE);
}




