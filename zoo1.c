#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
int disp=0,mainmenu;
void *currentfont;
#define DEG2RAD 3.14159/360.0
GLint i,j;
const double PI = 3.141592654;
void drawString(float x,float y,float z,char *string);

void display1();
void display2();
//**delay funtion
void delay(void)
{
int i,j,k;
for(i=0;i<3000;i++)
{
for(j=0;j<600;j++);
for(k=0;k<1500;k++);
}
}

//  circle 
void circle(GLfloat x, GLfloat y, GLfloat radius) 
  { 
    int i;
    float angle;   
    glBegin(GL_POLYGON); 
    for(i=0;i<100;i++) 
	{ 
        angle = i*2*(M_PI/100); 
        glVertex2f(x+(sin(angle)*radius),y+(cos(angle)*radius)); 
    	} 
    glEnd(); 
  } 
void drawDisk(double radius) {
	int d;
	glBegin(GL_POLYGON);
	for (d = 0; d < 32; d++) {
		double angle = 2*PI/32 * d;
		glVertex2d( radius*cos(angle), radius*sin(angle));
	}
	glEnd();
}
//declaring func drawstring n setfont
void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
	char *c;
	glRasterPos3f(x,y,z);

	for(c=string;*c!='\0';c++)
	{	glColor3f(0.0,1.0,0.0);
		glutBitmapCharacter(currentfont,*c);
	}
}

//1st page//
void text()
{

glClear(GL_COLOR_BUFFER_BIT);
setFont(GLUT_BITMAP_HELVETICA_10);
	glColor3f(1,1,0);


	setFont(GLUT_BITMAP_HELVETICA_18);
	drawstring(470,350,0,"PROJECT ASSOCIATES");
	drawstring(440,300,0,"SHARVANI N PANDE    (4AD16CS070)");
	drawstring(440,250,0,"SHEEBAN E TAMANNA   (4AD16CS073)");

	glColor3f(1,1,0);
	drawstring(250,100,0,"UNDER THE GUIDANCE OF");
	drawstring(280,40,0,"SUSHMA V");
	drawstring(240,10,0,"ASSISTANT PROFESSOR");
	drawstring(245,-20,0,"DEPT. OF CSE, ATMECE");
      
	glColor3f(1,1,0);
        drawstring(750,100,0,"PROJECT COORDINATOR");
        drawstring(770,40,0,"KAVYASHREE E D");
	drawstring(750,10,0,"ASSISTANT PROFESSOR");
	drawstring(755,-20,0,"DEPT. OF CSE, ATMECE");
	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	

	glColor3f(1,0,0);
	drawstring(380,550,0,"COMPUTER GRAPHICS AND VISUALIZATION  ");
	glColor3f(1,0,0);
	drawstring(500,500,0,"PROJECT ON");
	glColor3f(1,0,0);
	drawstring(470,450,0,"ZOOLOGICAL PARK");
	drawstring(550,700,0,"");

	setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	glColor3f(1,0,1);
	drawstring(390,-100,0,"COMPUTER SCIENCE AND ENGINEERING");
	drawstring(480,-150,0,"ATMECE,MYSURU");
	glFlush();
}


void doll1(int x,int y)
{

	glColor3f(0.804, 0.522, 0.247);  //face
	circle(x+460,y+400,25.0);
	glBegin(GL_POLYGON);		//cap
	glColor3f(0.100, 0.100, 0.100);
	glVertex2f(x+440,y+410);
	glVertex2f(x+433,y+440);
	glVertex2f(x+487,y+440);
	glVertex2f(x+480,y+410);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.000, 0.078, 0.576);	// shirt
	glVertex2f(x+430,y+373);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+490,y+373);
	glVertex2f(x+461,y+377);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//leg1 
	glVertex2f(x+437,y+250);
	glVertex2f(x+447,y+250);
	glVertex2f(x+453,y+320);
	glVertex2f(x+443,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//leg12
	glVertex2f(x+480,y+250);
	glVertex2f(x+471,y+250);
	glVertex2f(x+465,y+320);
	glVertex2f(x+475,y+320);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(1.000, 0.271, 0.000);	
	glVertex2f(x+430,y+280);
	glVertex2f(x+440,y+330);	//pant
	glVertex2f(x+482,y+330);
	glVertex2f(x+490,y+280);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(0,0,0);	
	glVertex2f(x+439,y+320);
	glVertex2f(x+439,y+330);	//belt
	glVertex2f(x+482,y+330);
	glVertex2f(x+482,y+320);
	glEnd();
	glColor3f(0,0,0);
	circle(x+442,y+250,7.0);	//shoee1
	circle(x+478,y+250,7.0);	//shoee2
	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//right hand
	glVertex2f(x+430,y+374);
	glVertex2f(x+433,y+360);
	glVertex2f(x+420,y+310);
	glVertex2f(x+415,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//left hand
	glVertex2f(x+490,y+374);
	glVertex2f(x+487,y+360);
	glVertex2f(x+500,y+310);
	glVertex2f(x+505,y+320);
	glEnd();

}


void man(int x,int y)
{
//Human
glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2i(x+88,y+170);
glVertex2i(x+106,y+172);
glVertex2i(x+106,y+189);
glVertex2i(x+100.5,y+192);
glVertex2i(x+95.5,y+192);
glVertex2i(x+88,y+192);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0,0);
glColor3f(0.804, 0.522, 0.247); 
glVertex2i(x+100.5,y+192);
glVertex2i(x+100.5,y+196);
glVertex2i(x+94.5,y+196);
glVertex2i(x+94.5,y+192);
glEnd();


//hand
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glColor3f(0.804, 0.522, 0.247); 
glVertex2i(x+104,y+184);
glVertex2i(x+104,y+176);
glVertex2i(x+118.5,y+174);
glVertex2i(x+119.5,y+180);
glEnd();


//man head
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2i(x+93.5,y+196);
glVertex2i(x+88.5,y+204);
glVertex2i(x+88.5,y+213);
glVertex2i(x+93.5,y+218);
glVertex2i(x+100.5,y+218);
glVertex2i(x+99,y+209);
glVertex2i(x+100.5,y+196);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.804, 0.522, 0.247);
glVertex2i(x+100.5,y+196);
glVertex2i(x+99,y+209);
glVertex2i(x+100.5,y+218);
glVertex2i(x+102,y+218);
glVertex2i(x+103.9,y+209);
glVertex2i(x+102,y+196);
glEnd();

/*
glBegin(GL_POINTS);
glColor3f(0,0,0);
glVertex2i(x+102,y+210);
glVertex2i(x+101,y+210);
glEnd();


glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2i(x+102,y+204);
glVertex2i(x+102,y+208);
glEnd();



glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2i(x+101,y+202);
glVertex2i(x+102.5,y+202);
glEnd();

*/
}

void car(int x,int y)
{
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2i(x+40,y+210);
glVertex2i(x+205,y+210);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(x+205,y+245);
glVertex2i(x+170,y+260);
glVertex2i(x+40,y+260);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(x+60,y+260);
glVertex2i(x+170,y+260);
glColor3f(1,0,0);
glVertex2i(x+140,y+312);
glVertex2i(x+80,y+312);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.855, 0.747, 0.125);
glVertex2i(x+67,y+256);
glVertex2i(x+103,y+256);
glVertex2i(x+103,y+305);
glVertex2i(x+82,y+305);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.855, 0.747, 0.125);
glVertex2i(x+110,y+256);
glVertex2i(x+161,y+256);
glVertex2i(x+138,y+305);
glVertex2i(x+110,y+305);
glEnd();

glColor3f(0.412, 0.412, 0.412);
circle(x+80,y+210,17);
glColor3f(0.502, 0.502, 0.502);
circle(x+80,y+210,12);
glColor3f(0.412, 0.412, 0.412);
circle(x+163,y+210,18);
glColor3f(0.502, 0.502, 0.502);
circle(x+163,y+210,13);

man(x+30,y+85);

}
void car1(int x,int y)
{
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2i(x+40,y+210);
glVertex2i(x+205,y+210);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(x+205,y+245);
glVertex2i(x+170,y+260);
glVertex2i(x+40,y+260);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.502, 0.000, 0.000);
glVertex2i(x+60,y+260);
glVertex2i(x+170,y+260);
glColor3f(1,0,0);
glVertex2i(x+140,y+312);
glVertex2i(x+80,y+312);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.855, 0.747, 0.125);
glVertex2i(x+67,y+256);
glVertex2i(x+103,y+256);
glVertex2i(x+103,y+305);
glVertex2i(x+82,y+305);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.855, 0.747, 0.125);
glVertex2i(x+110,y+256);
glVertex2i(x+161,y+256);
glVertex2i(x+138,y+305);
glVertex2i(x+110,y+305);
glEnd();

glColor3f(0.412, 0.412, 0.412);
circle(x+80,y+210,17);
glColor3f(0.502, 0.502, 0.502);
circle(x+80,y+210,12);
glColor3f(0.412, 0.412, 0.412);
circle(x+163,y+210,18);
glColor3f(0.502, 0.502, 0.502);
circle(x+163,y+210,13);


}

void girafe(int x,int y)
{

glColor3f(1.000, 0.843, 0.000);
glBegin(GL_POLYGON);	//body
glVertex2f(100+x,10+y);
glVertex2f(100+x,70+y);
glVertex2f(200+x,70+y);
glVertex2f(200+x,10+y);
glEnd();

glColor3f(1.000, 0.843, 0.000);
glBegin(GL_POLYGON);	//neck
glVertex2f(170+x,70+y);
glVertex2f(190+x,160+y);
glVertex2f(200+x,160+y);
glVertex2f(200+x,70+y);
glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);	//tail
glVertex2f(105+x,70+y);
glVertex2f(60+x,10+y);
glVertex2f(65+x,10+y);
glVertex2f(100+x,70+y);
glEnd();


glColor3f(1.000, 0.843, 0.000);
glBegin(GL_POLYGON);	//neck
glVertex2f(190+x,160+y);
glVertex2f(200+x,185+y);
glVertex2f(210+x,185+y);
glVertex2f(200+x,160+y);
glEnd();


glColor3f(1.000, 0.843, 0.000);
glBegin(GL_POLYGON);	//face
glVertex2f(200+x,170+y);
glVertex2f(230+x,165+y);
glVertex2f(205+x,188+y);
glEnd();
glColor3f(0,0,0);
glBegin(GL_POLYGON);	//face
glVertex2f(220+x,166+y);
glVertex2f(230+x,165+y);
glVertex2f(225+x,170+y);
glEnd();

glColor3f(1,1,1);
circle(210+x,175+y,3);
glColor3f(0,0,0);
circle(211+x,174+y,2);

glColor3f(0,0,0);
glBegin(GL_POLYGON);	//top
glVertex2f(200+x,185+y);
glVertex2f(205+x,185+y);
glVertex2f(202+x,195+y);
glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);	//top
glVertex2f(205+x,185+y);
glVertex2f(210+x,185+y);
glVertex2f(208+x,195+y);
glEnd();



glColor3f(1.000, 0.743, 0.000);
glBegin(GL_POLYGON);	//leg
glVertex2f(100+x,10+y);
glVertex2f(120+x,10+y);
glVertex2f(110+x,-70+y);
glEnd();
glColor3f(1.000, 0.743, 0.000);
glBegin(GL_POLYGON);	//leg
glVertex2f(120+x,10+y);
glVertex2f(140+x,10+y);
glVertex2f(130+x,-70+y);
glEnd();
glColor3f(1.000, 0.743, 0.000);
glBegin(GL_POLYGON);	//leg
glVertex2f(160+x,10+y);
glVertex2f(180+x,10+y);
glVertex2f(170+x,-70+y);
glEnd();
glColor3f(1.000, 0.743, 0.000);
glBegin(GL_POLYGON);	//leg
glVertex2f(180+x,10+y);
glVertex2f(200+x,10+y);
glVertex2f(190+x,-70+y);
glEnd();


glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(100+x,10+y);
glVertex2f(100+x,25+y);
glVertex2f(110+x,20+y);
glVertex2f(110+x,10+y);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(100+x,40+y);
glVertex2f(100+x,55+y);
glVertex2f(110+x,50+y);
glVertex2f(110+x,40+y);
glEnd();
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(130+x,30+y);
glVertex2f(130+x,45+y);
glVertex2f(140+x,40+y);
glVertex2f(140+x,30+y);
glEnd();


glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(150+x,10+y);
glVertex2f(150+x,25+y);
glVertex2f(160+x,20+y);
glVertex2f(160+x,10+y);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(170+x,50+y);
glVertex2f(170+x,60+y);
glVertex2f(180+x,60+y);
glVertex2f(180+x,50+y);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(170+x,10+y);
glVertex2f(170+x,20+y);
glVertex2f(180+x,20+y);
glVertex2f(180+x,10+y);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(150+x,70+y);
glVertex2f(150+x,60+y);
glVertex2f(160+x,60+y);
glVertex2f(160+x,70+y);
glEnd();
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(120+x,70+y);
glVertex2f(120+x,60+y);
glVertex2f(130+x,60+y);
glVertex2f(130+x,70+y);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(192+x,20+y);
glVertex2f(192+x,40+y);
glVertex2f(200+x,40+y);
glVertex2f(200+x,20+y);
glEnd();
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(192+x,70+y);
glVertex2f(190+x,90+y);
glVertex2f(200+x,90+y);
glVertex2f(200+x,70+y);
glEnd();
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);	//body
glVertex2f(179+x,110+y);
glVertex2f(183+x,130+y);
glVertex2f(190+x,130+y);
glVertex2f(190+x,110+y);
glEnd();

}


void tree1(int x,int y)
{
glColor3f( 0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(x+190,y+100);
glVertex2i(x+200,y+200);		//stem
glVertex2i(x+220,y+200);
glVertex2i(x+230,y+100);
glEnd();

/*
glColor3f( 0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(x+220,y+220);
glVertex2i(x+220,y+230);		//stm
glVertex2i(x+280,y+250);
glVertex2i(x+270,y+240);
glEnd();
glColor3f( 0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(x+200,y+230);
glVertex2i(x+200,y+240);		//stm
glVertex2i(x+150,y+250);
glVertex2i(x+150,y+250);
glEnd();*/

glColor3f(0.0, 0.845, 0.0);
circle(x+210,y+200,30);
circle(x+240,y+205,20);
circle(x+180,y+205,20);
circle(x+160,y+225,20);
circle(x+260,y+225,20);
circle(x+245,y+250,20);
circle(x+175,y+250,20);
circle(x+210,y+260,30);
circle(x+210,y+230,30);	
/*circle(x+290,y+280,30);
circle(x+230,y+250,40);*/
}


//Peacock

void peacockfether(int x,int y)
{


glColor3f(0.000, 0.700, 0.000);
circle(20+x,102+y,8);
glColor3f(1.000, 0.000, 0.000);
circle(20+x,100+y,7);
glColor3f(1.000, 1.000, 0.000);
circle(20+x,99+y,5);
glColor3f(0.576, 0.439, 0.859);
circle(20+x,98+y,3);
glColor3f(0.000, 1.000, 1.000);
circle(20+x,97+y,2);

}

void peacock(int x,int y)
{


glColor3f(0.000, 1.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(20+x,10+y);
glVertex2i(-25+x,90+y);		//rr
glVertex2i(85+x,90+y);
glVertex2i(40+x,10+y);
glEnd();
glColor3f(0.000, 1.000, 0.000);
circle(30+x,90+y,50);


peacockfether(-25+x,0+y);
peacockfether(0+x,10+y);
peacockfether(25+x,10+y);
peacockfether(45+x,0+y);

peacockfether(-20+x,-20+y);
peacockfether(00+x,-15+y);
peacockfether(23+x,-15+y);
peacockfether(40+x,-20+y);

peacockfether(-10+x,-40+y);
peacockfether(10+x,-35+y);
peacockfether(33+x,-40+y);



glColor3f(0.000, 0.000, 1.000);
glBegin(GL_POLYGON);
glVertex2i(20+x,00+y);
glVertex2i(27+x,50+y);		//cen
glVertex2i(30+x,50+y);
glVertex2i(37+x,00+y);
glEnd();

glColor3f(0.000, 0.000, 0.804);
glBegin(GL_POLYGON);
glVertex2i(14+x,10+y);
glVertex2i(20+x,00+y);		//l
glVertex2i(27+x,50+y);
glEnd();


glColor3f(0.000, 0.000, 0.804);
glBegin(GL_POLYGON);
glVertex2i(44+x,10+y);
glVertex2i(37+x,00+y);		//r
glVertex2i(30+x,50+y);
glEnd();


glColor3f(1.000, 0.843, 0.000);
glBegin(GL_POLYGON);
glVertex2i(14+x,10+y);
glVertex2i(20+x,00+y);		//l
glVertex2i(20+x,-15+y);
glEnd();

glColor3f(0.545, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(10+x,-20+y);
glVertex2i(25+x,-20+y);		//ll
glVertex2i(20+x,-15+y);
glEnd();

glColor3f(1.000, 0.843, 0.000);
glBegin(GL_POLYGON);
glVertex2i(44+x,10+y);
glVertex2i(37+x,00+y);		//r
glVertex2i(37+x,-15+y);
glEnd();

glColor3f(0.545, 0.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(30+x,-20+y);
glVertex2i(45+x,-20+y);		//rr
glVertex2i(37+x,-15+y);
glEnd();

glColor3f(0.580, 0.000, 0.827);
circle(28+x,52+y,8);

glColor3f(1.000, 1.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(26+x,52+y);
glVertex2i(30+x,52+y);		//rr
glVertex2i(28+x,46+y);
glEnd();

glColor3f(0.000, 0.000, 0.000);
circle(24+x,54+y,2);

glColor3f(0.000, 0.000, 0.000);
circle(31+x,54+y,2);


glColor3f(0.000, 0.000, 0.545);
glBegin(GL_POLYGON);
glVertex2i(27+x,60+y);
glVertex2i(27+x,70+y);		//rr
glVertex2i(29+x,70+y);
glVertex2i(29+x,60+y);
glEnd();
 	

glColor3f(1.000, 0.271, 0.000);
circle(28+x,71+y,3.5);

glColor3f(0.729, 0.333, 0.827);
circle(28+x,71+y,3);

glColor3f(0.000, 0.980, 0.604);
circle(28+x,70+y,2);

}

//**Elephant

void elephant(int x,int y)
{
glBegin(GL_POLYGON);
glColor3f(0.612, 0.612, 0.612);
glVertex2i(x+465,y+200);
glVertex2i(x+465,y+135);		//leg
glVertex2i(x+480,y+135);
glVertex2i(x+480,y+200);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.512, 0.512, 0.512);
glVertex2i(x+465,y+140);
glVertex2i(x+465,y+135);		//leg
glVertex2i(x+480,y+135);
glVertex2i(x+480,y+140);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.612, 0.612, 0.612);
glVertex2i(x+485,y+200);
glVertex2i(x+485,y+135);		//leg
glVertex2i(x+500,y+135);
glVertex2i(x+500,y+200);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.512, 0.512, 0.512);
glVertex2i(x+485,y+140);
glVertex2i(x+485,y+135);		//leg
glVertex2i(x+500,y+135);
glVertex2i(x+500,y+140);
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.612, 0.612, 0.612);
glVertex2i(x+535,y+200);
glVertex2i(x+535,y+135);		//leg
glVertex2i(x+550,y+135);
glVertex2i(x+550,y+200);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.512, 0.512, 0.512);
glVertex2i(x+535,y+140);
glVertex2i(x+535,y+135);		//leg
glVertex2i(x+550,y+135);
glVertex2i(x+550,y+140);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.612, 0.612, 0.612);
glVertex2i(x+555,y+200);
glVertex2i(x+555,y+135);		//leg
glVertex2i(x+570,y+135);
glVertex2i(x+570,y+200);
glEnd();
glBegin(GL_POLYGON);
glColor3f(0.512, 0.512, 0.512);
glVertex2i(x+555,y+140);
glVertex2i(x+555,y+135);		//leg
glVertex2i(x+570,y+135);
glVertex2i(x+570,y+140);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(x+470,y+210);
glVertex2i(x+420,y+160);		//tails
glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(x+470,y+207);
glVertex2i(x+420,y+158);		//tails
glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(x+470,y+208);
glVertex2i(x+420,y+161);		//tails
glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(x+470,y+211);
glVertex2i(x+420,y+163);		//tails
glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2i(x+470,y+212);
glVertex2i(x+420,y+162);		//tails
glEnd();

glColor3f(0.612, 0.612, 0.612);
circle(x+490,y+200,37);
glColor3f(0.612, 0.612, 0.612);
circle(x+510,y+200,40);
glColor3f(0.612, 0.612, 0.612);
circle(x+530,y+200,42);
glColor3f(0.612, 0.612, 0.612);
circle(x+550,y+200,38);
glColor3f(0.612, 0.612, 0.612);
circle(x+570,y+200,30);

glColor3f(0.412, 0.412, 0.412);
glBegin(GL_POLYGON);
glVertex2i(x+580,y+220);
glVertex2i(x+580,y+250);		//ear
glVertex2i(x+630,y+270);
glVertex2i(x+630,y+200);
glEnd();
glColor3f(0.412, 0.412, 0.412);
glBegin(GL_POLYGON);
glVertex2i(x+560,y+220);
glVertex2i(x+560,y+250);		//ear
glVertex2i(x+530,y+270);
glVertex2i(x+530,y+200);
glEnd();


glColor3f(0.512, 0.512, 0.512);
circle(x+580,y+230,33);
glColor3f(0.412, 0.412, 0.412);
glBegin(GL_POLYGON);
glVertex2i(x+575,y+230);
glVertex2i(x+575,y+160);		//pipe
glVertex2i(x+585,y+160);
glVertex2i(x+585,y+230);
glEnd();


glColor3f(0,0,0);
circle(x+565,y+230,4);

glColor3f(0,0,0);
circle(x+595,y+230,4);
}


void duck(int x,int y)
{

glColor3f(0.180, 0.545, 0.341);
glBegin(GL_POLYGON);
glVertex2i(110+x,20+y);
glVertex2i(110+x,35+y);		//water
glVertex2i(85+x,45+y);
glEnd();

glColor3f(0.373, 0.620, 0.627);
glBegin(GL_POLYGON);
glVertex2i(115+x,00+y);
glVertex2i(100+x,40+y);		//water
glColor3f(0.753, 0.553, 0.753);
glVertex2i(170+x,40+y);
glVertex2i(155+x,00+y);
glEnd();

glColor3f(0.180, 0.545, 0.341);
glBegin(GL_POLYGON);
glVertex2i(170+x,50+y);
glVertex2i(170+x,70+y);		//water
glVertex2i(190+x,70+y);
glVertex2i(190+x,50+y);
glEnd();

glColor3f(1.000, 0.843, 0.000);
glBegin(GL_POLYGON);
glVertex2i(200+x,52+y);
glVertex2i(200+x,57+y);		//water
glVertex2i(190+x,57+y);
glVertex2i(190+x,52+y);
glEnd();

glColor3f(0.180, 0.545, 0.341);
glBegin(GL_POLYGON);
glVertex2i(163+x,40+y);
glVertex2i(183+x,70+y);		//water
glVertex2i(190+x,70+y);
glVertex2i(170+x,40+y);
glEnd();


glColor3f(1,1,1);
circle(180+x,63+y,3);
glColor3f(0,0,0);
circle(181+x,62+y,2);

}



//Tiger

void tiger(int x,int y)
{
glColor3f(1.000, 0.647, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+500,y+200);
glVertex2i(x+500,y+240);		//body
glVertex2i(x+580,y+240);
glVertex2i(x+580,y+200);
glEnd();


glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+560,y+200);
glVertex2i(x+565,y+200);		//lines
glVertex2i(x+562,y+240);
glEnd();
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+550,y+200);
glVertex2i(x+555,y+200);		//lines
glVertex2i(x+552,y+240);
glEnd();
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+540,y+200);
glVertex2i(x+545,y+200);		//lines
glVertex2i(x+542,y+240);
glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+530,y+200);
glVertex2i(x+535,y+200);		//lines
glVertex2i(x+532,y+240);
glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+520,y+200);
glVertex2i(x+525,y+200);		//lines
glVertex2i(x+522,y+240);
glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+510,y+200);
glVertex2i(x+515,y+200);		//lines
glVertex2i(x+512,y+240);
glEnd();


glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+560,y+270);
glVertex2i(x+570,y+250);		//ear
glVertex2i(x+590,y+250);
glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+610,y+270);
glVertex2i(x+580,y+250);		//ear
glVertex2i(x+600,y+250);
glEnd();

glColor3f(1.000, 0.549, 0.000);
circle(x+585,y+240,23);
glColor3f(0,0,0);
circle(x+587,y+230,5);

glColor3f(1,1,1);
circle(x+575,y+245,4);
glColor3f(0,0,0);
circle(x+575,y+243,3);
glColor3f(1,1,1);
circle(x+595,y+245,4);
glColor3f(0,0,0);
circle(x+595,y+243,3);

glColor3f(0.900, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+492,y+180);
glVertex2i(x+500,y+200);		//lines
glVertex2i(x+507,y+200);
glVertex2i(x+499,y+180);
glEnd();

glColor3f(0.900, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+520,y+185);
glVertex2i(x+510,y+200);		//lines
glVertex2i(x+517,y+200);
glVertex2i(x+527,y+185);
glEnd();

glColor3f(0.900, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+550,y+180);
glVertex2i(x+560,y+200);		//lines
glVertex2i(x+567,y+200);
glVertex2i(x+557,y+180);
glEnd();

glColor3f(0.900, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+580,y+185);
glVertex2i(x+570,y+200);		//lines
glVertex2i(x+577,y+200);
glVertex2i(x+587,y+185);
glEnd();

glColor3f(0.900, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+470,y+200);
glVertex2i(x+493,y+240);		//lines
glVertex2i(x+499,y+240);
glVertex2i(x+470,y+200);
glEnd();

}
//*whiteTiger**

void whitetiger(int x,int y)
{
glColor3f(1.000, 0.649, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+500,y+200);
glVertex2i(x+500,y+240);		//body
glVertex2i(x+580,y+240);
glVertex2i(x+580,y+200);
glEnd();


glColor3f(1.000, 0.449, 0.000);
//circle(x+585,y+240,30);

glColor3f(1.000, 0.449, 0.000);
circle(x+560,y+250,12);


glColor3f(1.000, 0.449, 0.000);
circle(x+570,y+270,12);

glColor3f(1.000, 0.449, 0.000);
circle(x+585,y+275,12);

glColor3f(1.000, 0.449, 0.000);
circle(x+610,y+250,12);


glColor3f(1.000, 0.449, 0.000);
circle(x+600,y+270,12);

glColor3f(1.000, 0.449, 0.000);
circle(x+566,y+230,12);

glColor3f(1.000, 0.449, 0.000);
circle(x+584,y+215,12);

glColor3f(1.000, 0.449, 0.000);
circle(x+600,y+230,12);

glColor3f(0,0,0);
circle(x+565,y+250,8);
glColor3f(0,0,0);
circle(x+605,y+250,8);

/*
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+550,y+270);
glVertex2i(x+560,y+240);		//ear
glVertex2i(x+590,y+240);
glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+610,y+270);
glVertex2i(x+580,y+240);		//ear
glVertex2i(x+600,y+240);
glEnd();*/



glColor3f(1.000, 0.849, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+560,y+265);
glVertex2i(x+610,y+265);		//ear
glVertex2i(x+585,y+210);
glEnd();
glColor3f(0,0,0);
circle(x+586,y+230,5);

glColor3f(1,1,1);
circle(x+575,y+245,4);
glColor3f(0,0,0);
circle(x+575,y+243,3);
glColor3f(1,1,1);
circle(x+595,y+245,4);
glColor3f(0,0,0);
circle(x+595,y+243,3);

glColor3f(1.000, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+492,y+180);
glVertex2i(x+500,y+200);		//lines
glVertex2i(x+507,y+200);
glVertex2i(x+499,y+180);
glEnd();

glColor3f(1.000, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+520,y+185);
glVertex2i(x+510,y+200);		//lines
glVertex2i(x+517,y+200);
glVertex2i(x+527,y+185);
glEnd();

glColor3f(1.000, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+550,y+180);
glVertex2i(x+560,y+200);		//lines
glVertex2i(x+567,y+200);
glVertex2i(x+557,y+180);
glEnd();

glColor3f(1.000, 0.549, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+580,y+185);
glVertex2i(x+570,y+200);		//lines
glVertex2i(x+577,y+200);
glVertex2i(x+587,y+185);
glEnd();

glColor3f(1.000, 0.649, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+470,y+200);
glVertex2i(x+493,y+240);		//lines
glVertex2i(x+499,y+240);
glVertex2i(x+470,y+200);
glEnd();

}

//**cheeta*

void cheeta(int x,int y)
{
glColor3f(1.000, 0.850, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+500,y+200);
glVertex2i(x+500,y+240);		//body
glVertex2i(x+580,y+240);
glVertex2i(x+580,y+200);
glEnd();


glColor3f(0,0,0);
circle(505+x,210+y,3);
circle(515+x,214+y,3);
circle(525+x,203+y,3);
circle(540+x,210+y,3);
circle(558+x,216+y,3);
circle(548+x,220+y,3);
circle(570+x,220+y,3);
circle(505+x,230+y,3);
circle(515+x,234+y,3);
circle(520+x,223+y,3);
circle(530+x,230+y,3);
circle(538+x,226+y,3);
circle(528+x,230+y,3);
circle(550+x,230+y,3);


glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+560,y+270);
glVertex2i(x+570,y+250);		//ear
glVertex2i(x+590,y+250);
glEnd();

glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2i(x+610,y+270);
glVertex2i(x+580,y+250);		//ear
glVertex2i(x+600,y+250);
glEnd();

glColor3f(1.000, 0.900, 0.000);
circle(x+585,y+240,23);
glColor3f(0,0,0);
circle(x+587,y+230,5);

glColor3f(1,1,1);
circle(x+575,y+245,4);
glColor3f(0,0,0);
circle(x+575,y+243,3);
glColor3f(1,1,1);
circle(x+595,y+245,4);
glColor3f(0,0,0);
circle(x+595,y+243,3);

glColor3f(1.000, 0.750, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+492,y+180);
glVertex2i(x+500,y+200);		//lines
glVertex2i(x+507,y+200);
glVertex2i(x+499,y+180);
glEnd();

glColor3f(1.000, 0.750, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+520,y+185);
glVertex2i(x+510,y+200);		//lines
glVertex2i(x+517,y+200);
glVertex2i(x+527,y+185);
glEnd();

glColor3f(1.000, 0.750, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+550,y+180);
glVertex2i(x+560,y+200);		//lines
glVertex2i(x+567,y+200);
glVertex2i(x+557,y+180);
glEnd();

glColor3f(1.000, 0.750, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+580,y+185);
glVertex2i(x+570,y+200);		//lines
glVertex2i(x+577,y+200);
glVertex2i(x+587,y+185);
glEnd();

glColor3f(1.000, 0.750, 0.000);
glBegin(GL_POLYGON);
glVertex2i(x+470,y+200);
glVertex2i(x+493,y+240);		//lines
glVertex2i(x+499,y+240);
glVertex2i(x+470,y+200);
glEnd();

}


//***road stripes*
void stripes(int x,int y)
{
glColor3f(1.0,1.0,1.0);
glBegin(GL_POLYGON);
glVertex2f(x+0,y+0);
glVertex2f(x+0,y+15);
glVertex2f(x+80,y+15);
glVertex2f(x+80,y+0);
glEnd();
}

///***Tree*
void tree(int x,int y)
{
glColor3f( 0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(x+190,y+100);
glVertex2i(x+200,y+300);		//stem
glVertex2i(x+230,y+300);
glVertex2i(x+240,y+100);
glEnd();


glColor3f( 0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(x+230,y+220);
glVertex2i(x+230,y+230);		//stm
glVertex2i(x+280,y+250);
glVertex2i(x+270,y+240);
glEnd();
glColor3f( 0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2i(x+200,y+230);
glVertex2i(x+200,y+240);		//stm
glVertex2i(x+150,y+250);
glVertex2i(x+150,y+250);
glEnd();

glColor3f(0.0, 0.645, 0.0);
circle(x+210,y+300,40);
circle(x+250,y+300,20);
circle(x+170,y+300,20);
circle(x+280,y+330,30);
circle(x+140,y+330,30);
circle(x+290,y+360,30);
circle(x+130,y+360,30);
circle(x+160,y+380,40);
circle(x+210,y+400,40);	
circle(x+270,y+380,40);
circle(x+210,y+350,50);
}


//**poles*

void poles(int x,int y)
{
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(x+0,y+0);
glVertex2f(x+0,y+100);
glVertex2f(x+10,y+100);
glVertex2f(x+10,y+0);
glEnd();


circle(x+5,100+y,4);

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,80);
glVertex2f(-100,90);
glVertex2f(400,90);
glVertex2f(400,80);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,120);
glVertex2f(-100,130);
glVertex2f(400,130);
glVertex2f(400,120);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,160);
glVertex2f(-100,170);
glVertex2f(400,170);
glVertex2f(400,160);
glEnd();


glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(990,80);
glVertex2f(990,90);
glVertex2f(1400,90);
glVertex2f(1400,80);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(990,120);
glVertex2f(990,130);
glVertex2f(1400,130);
glVertex2f(1400,120);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(990,160);
glVertex2f(990,170);
glVertex2f(1400,170);
glVertex2f(1400,160);
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.545, 0.271, 0.075);
glVertex2f(685,80);
glColor3f(0.545, 0.371, 0.100);
glVertex2f(685,450);
glColor3f(0.545, 0.271, 0.075);
glVertex2f(710,450);
glColor3f(0.545, 0.371, 0.100);
glVertex2f(710,80);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.545, 0.271, 0.075);
glVertex2f(410,80);
glColor3f(0.545, 0.371, 0.100);
glVertex2f(410,450);
glColor3f(0.545, 0.271, 0.075);
glVertex2f(435,450);
glColor3f(0.545, 0.371, 0.100);
glVertex2f(435,80);
glEnd();


glColor3f(0.545, 0.271, 0.075);
glBegin(GL_POLYGON);
glVertex2f(370,400);
glVertex2f(370,500);
glVertex2f(750,500);
glVertex2f(750,400);
glEnd();
glColor3f(0.645, 0.371, 0.175);
glBegin(GL_POLYGON);
glVertex2f(380,410);
glVertex2f(380,490);
glVertex2f(740,490);
glVertex2f(740,410);
glEnd();


setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
	glColor3f(0,1,0);
	drawstring(460,450,0,"ZOOLOGICAL PARK");








}


//****inside poles*

void polesinside(int x,int y)
{
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(x+0,y+0);
glVertex2f(x+0,y+100);
glVertex2f(x+10,y+100);
glVertex2f(x+10,y+0);
glEnd();


circle(x+5,100+y,4);


glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(880,120);
glVertex2f(880,130);
glVertex2f(1400,130);
glVertex2f(1400,120);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(880,150);
glVertex2f(880,160);
glVertex2f(1400,160);
glVertex2f(1400,150);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(880,190);
glVertex2f(880,200);
glVertex2f(1400,200);
glVertex2f(1400,190);
glEnd();


glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(760,-200);
glVertex2f(870,130);
glVertex2f(880,130);
glVertex2f(770,-200);
glEnd();




glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(745,-170);
glVertex2f(875,200);
glVertex2f(885,200);
glVertex2f(755,-170);
glEnd();
}




//**inside fun poles**

void polesinsidel(int x,int y)
{
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(x+0,y+0);
glVertex2f(x+0,y+100);
glVertex2f(x+10,y+100);
glVertex2f(x+10,y+0);
glEnd();


circle(x+5,100+y,4);

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,190);
glVertex2f(-100,200);
glVertex2f(510,200);
glVertex2f(510,190);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,120);
glVertex2f(-100,130);
glVertex2f(510,130);
glVertex2f(510,120);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,160);
glVertex2f(-100,170);
glVertex2f(510,170);
glVertex2f(510,160);
glEnd();
}



void doll2(int x,int y)
{
	
	glColor3f(0.804, 0.522, 0.247);  //face
	circle(x+460,y+400,25.0);


	glColor3f(0,0,0);  //eye
	circle(x+450,y+405,7.0);

	glColor3f(0.804, 0.522, 0.247);  //eye
	circle(x+450,y+403,7.0);

	glColor3f(0,0,0);  //eye
	circle(x+450,y+405,2.0);

	glColor3f(0,0,0);  //eye
	circle(x+470,y+405,7.0);


	glColor3f(0.804, 0.522, 0.247);  //eye
	circle(x+470,y+403,7.0);

	glColor3f(0,0,0);  //eye
	circle(x+470,y+405,2.0);


	glBegin(GL_POLYGON);
	glColor3f(1,0,0);	// nose
	glVertex2f(x+456,y+385);
	glVertex2f(x+465,y+385);
	glVertex2f(x+465,y+388);
	glVertex2f(x+456,y+388);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.800);	// shirt
	glVertex2f(x+430,y+373);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+490,y+373);
	glVertex2f(x+461,y+377);
	glEnd();

	glColor3f(0,0,0);
	circle(x+461,y+370,3);	//button
	glColor3f(0,0,0);
	circle(x+461,y+355,3);	//button
	glColor3f(0,0,0);
	circle(x+461,y+340,3);	//button
	glColor3f(0,0,0);
	circle(x+461,y+325,3);	//button



	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.700);	//leg1 
	glVertex2f(x+434,y+250);
	glVertex2f(x+454,y+250);
	glVertex2f(x+460,y+320);
	glVertex2f(x+440,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.000, 0.000, 0.700);	//leg1 
	glVertex2f(x+486,y+250);
	glVertex2f(x+466,y+250);
	glVertex2f(x+460,y+320);
	glVertex2f(x+480,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0,0,0);	
	glVertex2f(x+440,y+310);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+480,y+310);
	glEnd();

	glColor3f(0,0,0);
	circle(x+442,y+250,11.0);	//shoee1
	circle(x+478,y+250,11.0);	//shoee2
	

	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//right hand
	glVertex2f(x+430,y+374);
	glVertex2f(x+433,y+360);
	glVertex2f(x+420,y+310);
	glVertex2f(x+415,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//left hand
	glVertex2f(x+490,y+374);
	glVertex2f(x+487,y+360);
	glVertex2f(x+500,y+310);
	glVertex2f(x+505,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.878, 1.000, 1.000);	//stick
	glVertex2f(x+500,y+320);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2f(x+500,y+260);
	glColor3f(0.878, 1.000, 1.000);
	glVertex2f(x+504,y+260);
	glColor3f(0.412, 0.412, 0.412);
	glVertex2f(x+504,y+320);
	glEnd();

}


void doll3(int x,int y)
{
	


	glColor3f(0.804, 0.522, 0.247);  //face
	circle(x+460,y+400,25.0);

	glBegin(GL_POLYGON);		//cap
	glColor3f(0.100, 0.100, 0.100);
	glVertex2f(x+440,y+418);
	glVertex2f(x+433,y+445);
	glVertex2f(x+487,y+445);
	glVertex2f(x+480,y+418);
	glEnd();

	

	

	glBegin(GL_POLYGON);
	glColor3f(1,0,0);	// shirt
	glVertex2f(x+430,y+373);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+490,y+373);
	glVertex2f(x+461,y+377);
	glEnd();





	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg1 
	glVertex2f(x+434,y+250);
	glVertex2f(x+454,y+250);
	glVertex2f(x+460,y+320);
	glVertex2f(x+440,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg1 
	glVertex2f(x+486,y+250);
	glVertex2f(x+466,y+250);
	glVertex2f(x+460,y+320);
	glVertex2f(x+480,y+320);
	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0,0,0);	
	glVertex2f(x+440,y+310);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+480,y+310);
	glEnd();

	glColor3f(0,0,0);
	circle(x+442,y+250,11.0);	//shoee1
	circle(x+478,y+250,11.0);	//shoee2
	


glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//right hand
	glVertex2f(x+430,y+374);
	glVertex2f(x+433,y+360);
	glVertex2f(x+420,y+310);
	glVertex2f(x+415,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//left hand
	glVertex2f(x+490,y+374);
	glVertex2f(x+487,y+360);
	glVertex2f(x+500,y+310);
	glVertex2f(x+505,y+320);
	glEnd();



}






void doll4(int x,int y)
{
	


	glColor3f(0.804, 0.522, 0.247);  //face
	circle(x+460,y+400,25.0);

	glBegin(GL_POLYGON);		//cap
	glColor3f(0.100, 0.100, 0.100);
	glVertex2f(x+440,y+418);
	glVertex2f(x+433,y+445);
	glVertex2f(x+487,y+445);
	glVertex2f(x+480,y+418);
	glEnd();

	

	

	glBegin(GL_POLYGON);
	glColor3f(0.871, 0.722, 0.529);	// shirt
	glVertex2f(x+430,y+373);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+490,y+373);
	glVertex2f(x+461,y+377);
	glEnd();





	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg1 
	glVertex2f(x+434,y+250);
	glVertex2f(x+454,y+250);
	glVertex2f(x+460,y+320);
	glVertex2f(x+440,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg1 
	glVertex2f(x+486,y+250);
	glVertex2f(x+466,y+250);
	glVertex2f(x+460,y+320);
	glVertex2f(x+480,y+320);
	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0,0,0);	
	glVertex2f(x+440,y+310);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+480,y+310);
	glEnd();

	glColor3f(0,0,0);
	circle(x+442,y+250,11.0);	//shoee1
	circle(x+478,y+250,11.0);	//shoee2
	


glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//right hand
	glVertex2f(x+430,y+374);
	glVertex2f(x+433,y+360);
	glVertex2f(x+420,y+310);
	glVertex2f(x+415,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//left hand
	glVertex2f(x+490,y+374);
	glVertex2f(x+487,y+360);
	glVertex2f(x+500,y+310);
	glVertex2f(x+505,y+320);
	glEnd();



}


void doll5(int x,int y)
{
	


	glColor3f(0.804, 0.522, 0.247);  //face
	circle(x+460,y+400,25.0);

	glBegin(GL_POLYGON);		//cap
	glColor3f(0.100, 0.100, 0.100);
	glVertex2f(x+440,y+418);
	glVertex2f(x+433,y+445);
	glVertex2f(x+487,y+445);
	glVertex2f(x+480,y+418);
	glEnd();

	glColor3f(0,0,0);  //eye
	circle(x+450,y+405,7.0);

	glColor3f(0.804, 0.522, 0.247);  //eye
	circle(x+450,y+405,5.0);

	glColor3f(0,0,0);  //eye
	circle(x+450,y+405,2.0);

	glColor3f(0,0,0);  //eye
	circle(x+470,y+405,7.0);


	glColor3f(0.804, 0.522, 0.247);  //eye
	circle(x+470,y+405,5.0);

	glColor3f(0,0,0);  //eye
	circle(x+470,y+405,2.0);

	glColor3f(0,0,0);  //eye
	circle(x+460,y+405,4.0);

	glColor3f(0.804, 0.522, 0.247);  //eye
	circle(x+460,y+403,4.0);


	glBegin(GL_POLYGON);
	glColor3f(0.900, 0.550, 0.347);	// nose
	glVertex2f(x+456,y+393);
	glVertex2f(x+465,y+393);
	glVertex2f(x+460,y+404);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1,0,0);	// nose
	glVertex2f(x+456,y+385);
	glVertex2f(x+465,y+385);
	glVertex2f(x+465,y+388);
	glVertex2f(x+456,y+388);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.871, 0.722, 0.529);	// shirt
	glVertex2f(x+430,y+373);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+490,y+373);
	glVertex2f(x+461,y+377);
	glEnd();

	glColor3f(0,0,0);
	circle(x+461,y+370,3);	//button
	glColor3f(0,0,0);
	circle(x+461,y+355,3);	//button
	glColor3f(0,0,0);
	circle(x+461,y+340,3);	//button
	glColor3f(0,0,0);
	circle(x+461,y+325,3);	//button



	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg1 
	glVertex2f(x+434,y+250);
	glVertex2f(x+454,y+250);
	glVertex2f(x+460,y+320);
	glVertex2f(x+440,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//leg1 
	glVertex2f(x+486,y+250);
	glVertex2f(x+466,y+250);
	glVertex2f(x+460,y+320);
	glVertex2f(x+480,y+320);
	glEnd();

glBegin(GL_POLYGON);
	glColor3f(0,0,0);	
	glVertex2f(x+440,y+310);
	glVertex2f(x+440,y+320);
	glVertex2f(x+480,y+320);
	glVertex2f(x+480,y+310);
	glEnd();

	glColor3f(0,0,0);
	circle(x+442,y+250,11.0);	//shoee1
	circle(x+478,y+250,11.0);	//shoee2
	


glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//right hand
	glVertex2f(x+430,y+374);
	glVertex2f(x+433,y+360);
	glVertex2f(x+420,y+310);
	glVertex2f(x+415,y+320);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.804, 0.522, 0.247);	//left hand
	glVertex2f(x+490,y+374);
	glVertex2f(x+487,y+360);
	glVertex2f(x+500,y+310);
	glVertex2f(x+505,y+320);
	glEnd();



}


void doll(int x,int y)
{
// *****DOLL   1  
	glBegin(GL_POLYGON);		//cap
	glColor3f(0.400, 0.400, 0.400);
	glVertex2f(x+450,y+210);
	glVertex2f(x+448,y+220);
	glVertex2f(x+472,y+220);
	glVertex2f(x+470,y+210);
	glEnd();
	glColor3f(0.804, 0.522, 0.247);  //face
	circle(x+460,y+200,13.0);
	glColor3f(0,0,0);
	circle(x+455,y+203,2);	//eye1
	glColor3f(0,0,0);
	circle(x+465,y+203,2);	//eye2
	glBegin(GL_POLYGON);		//nose
	glColor3f(0.863, 0.078, 0.235);
	glVertex2f(x+458,y+198);
	glVertex2f(x+460,y+204);
	glVertex2f(x+460,y+204);
	glVertex2f(x+462,y+198);
	glEnd();
	glColor3f(0.863, 0.078, 0.235);
	circle(x+460,y+194,3);	//mouth
	glColor3f(0.804, 0.522, 0.247);
	circle(x+460,y+194,1.5);	//mouth
	glBegin(GL_POLYGON);
	glColor3f(0.871, 0.722, 0.529);	// shirt
	glVertex2f(x+447,y+183);
	glVertex2f(x+450,y+160);
	glVertex2f(x+470,y+160);
	glVertex2f(x+473,y+183);
	glVertex2f(x+460,y+187);
	glEnd();
	glColor3f(0,0,0);
	circle(x+460,y+175,1.5);	//button
	glColor3f(0,0,0);
	circle(x+460,y+165,1.5);	//button
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//right hand
	glVertex2f(x+448,y+180);
	glVertex2f(x+448,y+173);
	glVertex2f(x+435,y+170);
	glVertex2f(x+435,y+167);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.545, 0.271, 0.075);	//left hand
	glVertex2f(x+472,y+180);
	glVertex2f(x+472,y+175);
	glVertex2f(x+485,y+168);
	glVertex2f(x+485,y+175);
	glEnd();
}

//*inside fun poles small*//
void polesinsideup(int x,int y)
{
glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(x+0,y+0);
glVertex2f(x+0,y+50);
glVertex2f(x+10,y+50);
glVertex2f(x+10,y+0);
glEnd();


circle(x+5,50+y,4);

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,400);
glVertex2f(-100,410);
glVertex2f(1300,410);
glVertex2f(1300,400);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,430);
glVertex2f(-100,440);
glVertex2f(1300,440);
glVertex2f(1300,430);
glEnd();

}


//**inside fun cage poles*
void cage(int x,int y)
{

glBegin(GL_POLYGON);
glColor3f(0.878, 1.000, 1.000);
glVertex2f(x+0,y+0);
glColor3f(0.412, 0.412, 0.412);
glVertex2f(x+0,y+170);
glColor3f(0.878, 1.000, 1.000);
glVertex2f(x+3,y+170);
glColor3f(0.412, 0.412, 0.412);
glVertex2f(x+3,y+0);
glEnd();

}


//* OUT SIDE *
// Starting 
void day()
{
glColor3f(0.000, 0.749, 1.000);
glBegin(GL_POLYGON);
glVertex2i(-50,300);
glVertex2i(-50,700);		//sky
glVertex2i(1250,700);
glVertex2i(1250,300);
glEnd();

glColor3f(1.000, 1.000, 0.000);
circle(1100,600,50);		//sun


glColor3f( 0.000, 0.502, 0.000);
glBegin(GL_POLYGON);
glVertex2i(-50,-200);
glVertex2i(-50,350);		//green
glVertex2i(1250,350);
glVertex2i(1250,-200);
glEnd();



//pole
glBegin(GL_POLYGON);
glColor3f(0.878, 1.000, 1.000);
glVertex2i(460,170);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(460,00);		
glColor3f(0.878, 1.000, 1.000);
glVertex2i(445,00);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(445,170);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.878, 1.000, 1.000);
glVertex2i(490,170);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(490,00);		
glColor3f(0.878, 1.000, 1.000);
glVertex2i(505,00);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(505,170);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.878, 1.000, 1.000);
glVertex2i(550,170);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(550,00);		
glColor3f(0.878, 1.000, 1.000);
glVertex2i(535,00);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(535,170);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.878, 1.000, 1.000);
glVertex2i(580,170);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(580,00);		
glColor3f(0.878, 1.000, 1.000);
glVertex2i(595,00);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(595,170);
glEnd();



glBegin(GL_POLYGON);
glColor3f(0.878, 1.000, 1.000);
glVertex2i(670,170);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(670,00);		
glColor3f(0.878, 1.000, 1.000);
glVertex2i(685,00);
glColor3f(0.412, 0.412, 0.412);
glVertex2i(685,170);
glEnd();






glColor3f(0.212, 0.212, 0.212);
glBegin(GL_POLYGON);
glVertex2i(-50,-200);
glVertex2i(-50,00);		//road
glVertex2i(1250,00);
glVertex2i(1250,-200);
glEnd();

glColor3f( 0.502, 0.502, 0.000);
glBegin(GL_POLYGON);
glVertex2i(-50,00);
glVertex2i(-50,80);		//road
glVertex2i(1260,80);
glVertex2i(1260,00);
glEnd();

glColor3f(0.312, 0.312, 0.312);
glBegin(GL_POLYGON);
glVertex2i(-50,-10);
glVertex2i(-50,0);		//road
glVertex2i(1260,00);
glVertex2i(1260,-10);
glEnd();

stripes(-30,-110);
stripes(130,-110);
stripes(290,-110);
stripes(450,-110);
stripes(610,-110);
stripes(770,-110);
stripes(930,-110);
stripes(1090,-110);




tree(0,0);
//tree(600,0);
tree(900,0);

poles(-50,90);
poles(-30,90);
poles(00,90);
poles(30,90);
poles(60,90);
poles(90,90);
poles(120,90);
poles(150,90);
poles(180,90);
poles(210,90);
poles(240,90);
poles(270,90);
poles(300,90);
poles(330,90);
poles(360,90);
poles(390,90);


poles(990,90);
poles(1020,90);
poles(1050,90);
poles(1080,90);
poles(1110,90);
poles(1140,90);
poles(1170,90);
poles(1200,90);
poles(1230,90);
poles(1260,90);
poles(1290,90);






glColor3f(0.663, 0.663, 0.663);
glBegin(GL_POLYGON);
glVertex2i(720,80);
glVertex2i(720,320);		//front
glVertex2i(990,320);
glVertex2i(990,80);
glEnd();

 	


glColor3f(0.212, 0.212, 0.212);
circle(780,173,15);
glColor3f(0.212, 0.212, 0.212);
circle(920,173,15);

glColor3f(0.282, 0.239, 0.545);
glBegin(GL_POLYGON);
glVertex2i(720,80);
glVertex2i(720,170);		//front
glVertex2i(990,170);
glVertex2i(990,80);
glEnd();

glColor3f(0.878, 1.000, 1.000);
glBegin(GL_POLYGON);
glVertex2i(730,200);
glVertex2i(730,290);		//window
glVertex2i(980,290);
glVertex2i(980,200);
glEnd();



doll(320,30);
doll(460,30);


doll2(-30,-200);


glColor3f(0.663, 0.663, 0.663);
glBegin(GL_POLYGON);
glVertex2i(730,190);
glVertex2i(730,200);		//window
glVertex2i(980,200);
glVertex2i(980,190);
glEnd();

setFont(GLUT_BITMAP_TIMES_ROMAN_24);
	
	glColor3f(1,0,0);
	drawstring(780,300,0,"TICKET COUNTER");

doll3(300,-200);

}





void man2(int x,int y)
{




glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(600+x,300+y);
glVertex2i(600+x,325+y);
glVertex2i(609+x,325+y);		//face
glVertex2i(609+x,300+y);
glEnd();

glColor3f(0,0,0);
circle(605+x,322+y,3);
circle(607+x,325+y,3);
circle(605+x,325+y,3);
circle(609+x,320+y,3);	//hair
circle(609+x,317+y,3);
circle(609+x,313+y,3);
circle(609+x,309+y,3);
circle(609+x,305+y,3);

glColor3f(0.804, 0.522, 0.247);
circle(602+x,320+y,4);
circle(602+x,317+y,4);		//face cir
circle(602+x,313+y,4);
circle(602+x,309+y,4);
circle(602+x,305+y,3);


glColor3f(0,0,0);
circle(600+x,318+y,2);
glColor3f(0.804, 0.522, 0.247);
circle(600+x,316+y,2);			//eye
glColor3f(0,0,0);
circle(601+x,316+y,1);

glColor3f(0.7,0,0);
circle(601+x,305+y,1.5);



glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(601+x,310+y);
glVertex2i(596+x,310+y);
glVertex2i(601+x,316+y);		//nose
glEnd();


glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(602+x,300+y);
glVertex2i(602+x,294+y);
glVertex2i(608+x,294+y);		//neck
glVertex2i(608+x,300+y);
glEnd();


glColor3f( 1.000, 1.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(598+x,290+y);
glVertex2i(602+x,295+y);
glVertex2i(608+x,295+y);		//neck
glVertex2i(612+x,290+y);
glEnd();

glColor3f(1.000, 1.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(598+x,290+y);
glVertex2i(598+x,240+y);
glVertex2i(612+x,240+y);		//shirt
glVertex2i(612+x,290+y);
glEnd();


glColor3f(1.000, 0.000, 1.000);
glBegin(GL_POLYGON);
glVertex2i(603+x,200+y);
glVertex2i(596+x,253+y);
glVertex2i(613+x,253+y);		//pant
glVertex2i(610+x,200+y);
glEnd();

glColor3f(0,0,0);
circle(605+x,197+y,4);
circle(601+x,196+y,3);

glColor3f(0.800, 0.000, 0.000);		
glBegin(GL_POLYGON);
glVertex2i(602+x,283+y);
glVertex2i(600+x,290+y);
glVertex2i(611+x,290+y);		//hand red
glVertex2i(609+x,283+y);
glEnd();

glColor3f(0.804, 0.522, 0.247);		
glBegin(GL_POLYGON);
glVertex2i(603+x,283+y);
glVertex2i(604+x,268+y);
glVertex2i(607+x,268+y);		//hand 
glVertex2i(608+x,283+y);
glEnd();

glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(583+x,278+y);
glVertex2i(583+x,285+y);
glVertex2i(597+x,285+y);		//hand
glVertex2i(597+x,278+y);
glEnd();
glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(607+x,268+y);
glVertex2i(607+x,275+y);
glVertex2i(592+x,275+y);		//hand
glVertex2i(592+x,268+y);
glEnd();



}


void man5(int x,int y)
{




glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(600+x,300+y);
glVertex2i(600+x,325+y);
glVertex2i(609+x,325+y);		//face
glVertex2i(609+x,300+y);
glEnd();

glColor3f(0,0,0);
circle(605+x,322+y,3);
circle(607+x,325+y,3);
circle(605+x,325+y,3);
circle(609+x,320+y,3);	//hair
circle(609+x,317+y,3);
circle(609+x,313+y,3);
circle(609+x,309+y,3);
circle(609+x,305+y,3);

glColor3f(0.804, 0.522, 0.247);
circle(602+x,320+y,4);
circle(602+x,317+y,4);		//face cir
circle(602+x,313+y,4);
circle(602+x,309+y,4);
circle(602+x,305+y,3);


glColor3f(0,0,0);
circle(600+x,318+y,2);
glColor3f(0.804, 0.522, 0.247);
circle(600+x,316+y,2);			//eye
glColor3f(0,0,0);
circle(601+x,316+y,1);

glColor3f(0.7,0,0);
circle(601+x,305+y,1.5);



glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(601+x,310+y);
glVertex2i(596+x,310+y);
glVertex2i(601+x,316+y);		//nose
glEnd();


glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(602+x,300+y);
glVertex2i(602+x,294+y);
glVertex2i(608+x,294+y);		//neck
glVertex2i(608+x,300+y);
glEnd();


glColor3f( 1.000, 1.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(598+x,290+y);
glVertex2i(602+x,295+y);
glVertex2i(608+x,295+y);		//neck
glVertex2i(612+x,290+y);
glEnd();

glColor3f(1.000, 1.000, 0.000);
glBegin(GL_POLYGON);
glVertex2i(598+x,290+y);
glVertex2i(598+x,240+y);
glVertex2i(612+x,240+y);		//shirt
glVertex2i(612+x,290+y);
glEnd();


glColor3f(1.000, 0.000, 1.000);
glBegin(GL_POLYGON);
glVertex2i(603+x,200+y);
glVertex2i(596+x,253+y);
glVertex2i(613+x,253+y);		//pant
glVertex2i(610+x,200+y);
glEnd();

glColor3f(0,0,0);
circle(605+x,197+y,4);
circle(601+x,196+y,3);

glColor3f(0.800, 0.000, 0.000);		
glBegin(GL_POLYGON);
glVertex2i(602+x,283+y);
glVertex2i(600+x,290+y);
glVertex2i(611+x,290+y);		//hand red
glVertex2i(609+x,283+y);
glEnd();

glColor3f(0.804, 0.522, 0.247);		
glBegin(GL_POLYGON);
glVertex2i(603+x,283+y);
glVertex2i(604+x,268+y);
glVertex2i(607+x,268+y);		//hand 
glVertex2i(608+x,283+y);
glEnd();

glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(583+x,278+y);
glVertex2i(583+x,285+y);
glVertex2i(597+x,285+y);		//hand
glVertex2i(597+x,278+y);
glEnd();
glColor3f(0.804, 0.522, 0.247);
glBegin(GL_POLYGON);
glVertex2i(607+x,268+y);
glVertex2i(607+x,275+y);
glVertex2i(592+x,275+y);		//hand
glVertex2i(592+x,268+y);
glEnd();



}


//* IN SIDE 
void inside()
{

glColor3f( 0.000, 0.502, 0.000);
glBegin(GL_POLYGON);
glVertex2i(-50,-200);
glVertex2i(-50,1200);		//green
glVertex2i(1250,1200);
glVertex2i(1250,-200);
glEnd();

glColor3f(0.741, 0.718, 0.420);
glBegin(GL_POLYGON);
glVertex2i(500,-200);
glVertex2i(650,300);		//road
glVertex2i(850,300);
glVertex2i(700,-200);
glEnd();
glColor3f(0.741, 0.718, 0.420);
glBegin(GL_POLYGON);
glVertex2i(-50,400);
glVertex2i(-50,250);		//road
glVertex2i(1250,250);
glVertex2i(1250,400);
glEnd();


polesinside(750,-200);
polesinside(785,-120);
polesinside(810,-40);
polesinside(840,40);
polesinside(870,120);
polesinside(910,120);
polesinside(950,120);
polesinside(990,120);
polesinside(1030,120);
polesinside(1070,120);
polesinside(1110,120);
polesinside(1150,120);
polesinside(1190,120);
polesinside(1230,120);


polesinsidel(-50,120);
polesinsidel(-30,120);
polesinsidel(00,120);
polesinsidel(30,120);
polesinsidel(60,120);
polesinsidel(90,120);
polesinsidel(120,120);
polesinsidel(150,120);
polesinsidel(180,120);
polesinsidel(210,120);
polesinsidel(240,120);
polesinsidel(270,120);
polesinsidel(300,120);
polesinsidel(330,120);
polesinsidel(360,120);
polesinsidel(390,120);
polesinsidel(420,120);
polesinsidel(450,120);
polesinsidel(480,120);
polesinsidel(510,120);



polesinside(400,-200);
polesinside(435,-120);
polesinside(460,-40);
polesinside(490,40);



glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(402,-200);
glVertex2f(512,130);
glVertex2f(522,130);
glVertex2f(412,-200);
glEnd();


glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(395,-170);
glVertex2f(515,200);
glVertex2f(525,200);
glVertex2f(405,-170);
glEnd();

elephant(600,-150);

elephant(400,-300);
tree(700,-100);
tree(200,-100);



glColor3f(0.741, 0.718, 0.420);
glBegin(GL_POLYGON);
glVertex2f(-100,480);
glVertex2f(-100,700);		//cage inside
glVertex2f(1300,700);
glVertex2f(1300,480);
glEnd();


glColor3f(0.302, 0.302, 0.302);
glBegin(GL_POLYGON);
glVertex2f(-100,480);
glVertex2f(-100,420);
glVertex2f(1300,420);
glVertex2f(1300,480);
glEnd();



glColor3f(0.302, 0.302, 0.302);
glBegin(GL_POLYGON);
glVertex2f(-100,700);
glVertex2f(-100,650);
glVertex2f(1300,650);
glVertex2f(1300,700);
glEnd();

//cage

glColor3f(0.302, 0.302, 0.302);
glBegin(GL_POLYGON);
glVertex2f(-100,700);
glVertex2f(-100,480);
glVertex2f(00,480);
glVertex2f(00,700);
glEnd();

glColor3f(0.302, 0.302, 0.302);
glBegin(GL_POLYGON);
glVertex2f(390,700);
glVertex2f(390,480);
glVertex2f(420,480);
glVertex2f(420,700);
glEnd();

glColor3f(0.302, 0.302, 0.302);
glBegin(GL_POLYGON);
glVertex2f(790,700);
glVertex2f(790,480);
glVertex2f(820,480);
glVertex2f(820,700);
glEnd();


glColor3f(0.302, 0.302, 0.302);
glBegin(GL_POLYGON);
glVertex2f(1200,700);
glVertex2f(1200,480);
glVertex2f(1250,480);
glVertex2f(1250,700);
glEnd();


tiger(-480,320);
whitetiger(480,320);
cheeta(20,320);

cage(00,480);
cage(30,480);
cage(60,480);
cage(90,480);
cage(120,480);
cage(150,480);
cage(180,480);
cage(210,480);
cage(240,480);
cage(270,480);
cage(300,480);


polesinsideup(-50,410);
polesinsideup(-30,410);
polesinsideup(00,410);
polesinsideup(30,410);
polesinsideup(60,410);
polesinsideup(90,410);
polesinsideup(120,410);
polesinsideup(150,410);
polesinsideup(180,410);
polesinsideup(210,410);
polesinsideup(240,410);
polesinsideup(270,410);
polesinsideup(300,410);
polesinsideup(330,410);
polesinsideup(360,410);
polesinsideup(390,410);
polesinsideup(420,410);
polesinsideup(450,410);
polesinsideup(480,410);
polesinsideup(510,410);
polesinsideup(540,410);
polesinsideup(570,410);
polesinsideup(600,410);
polesinsideup(630,410);
polesinsideup(660,410);
polesinsideup(690,410);
polesinsideup(720,410);
polesinsideup(750,410);
polesinsideup(780,410);
polesinsideup(810,410);
polesinsideup(840,410);
polesinsideup(870,410);
polesinsideup(900,410);
polesinsideup(930,410);
polesinsideup(960,410);
polesinsideup(990,410);
polesinsideup(1020,410);
polesinsideup(1050,410);
polesinsideup(1080,410);
polesinsideup(1110,410);
polesinsideup(1140,410);
polesinsideup(1170,410);
polesinsideup(1200,410);
polesinsideup(1230,410);





cage(330,480);
cage(360,480);
cage(390,480);
cage(420,480);
cage(450,480);
cage(480,480);
cage(510,480);
cage(530,480);
cage(560,480);
cage(590,480);
cage(630,480);
cage(650,480);
cage(680,480);
cage(710,480);
cage(730,480);
cage(760,480);
cage(790,480);
cage(820,480);
cage(850,480);
cage(880,480);
cage(930,480);
cage(960,480);
cage(990,480);
cage(1020,480);
cage(1050,480);
cage(1080,480);
cage(1110,480);
cage(1130,480);
cage(1160,480);
cage(1190,480);



girafe(-50,-50);
girafe(150,30);
man5(-150,-300);
man5(-100,-200);
}


//IN SIDE 2 //
void inside2()
{

glColor3f( 0.000, 0.502, 0.000);
glBegin(GL_POLYGON);
glVertex2i(-50,-200);
glVertex2i(-50,1200);		//green
glVertex2i(1250,1200);
glVertex2i(1250,-200);
glEnd();


glColor3f(0.741, 0.718, 0.420);
glBegin(GL_POLYGON);
glVertex2i(-50,400);
glVertex2i(-50,120);		//road
glVertex2i(1250,120);
glVertex2i(1250,400);
glEnd();


glColor3f(0.000, 0.808, 0.820);
glBegin(GL_POLYGON);
glVertex2i(-50,-200);
glVertex2i(-50,80);		//water
glVertex2i(1250,80);
glVertex2i(1250,-200);
glEnd();




tree1(-150,350);
tree1(100,350);

tree1(750,350);
tree1(950,350);


peacock(500,500);
peacock(700,500);


polesinsideup(-50,410);
polesinsideup(-30,410);
polesinsideup(00,410);
polesinsideup(30,410);
polesinsideup(60,410);
polesinsideup(90,410);
polesinsideup(120,410);
polesinsideup(150,410);
polesinsideup(180,410);
polesinsideup(210,410);
polesinsideup(240,410);
polesinsideup(270,410);
polesinsideup(300,410);
polesinsideup(330,410);
polesinsideup(360,410);
polesinsideup(390,410);
polesinsideup(420,410);
polesinsideup(450,410);
polesinsideup(480,410);
polesinsideup(510,410);
polesinsideup(540,410);
polesinsideup(570,410);
polesinsideup(600,410);
polesinsideup(630,410);
polesinsideup(660,410);
polesinsideup(690,410);
polesinsideup(720,410);
polesinsideup(750,410);
polesinsideup(780,410);
polesinsideup(810,410);
polesinsideup(840,410);
polesinsideup(870,410);
polesinsideup(900,410);
polesinsideup(930,410);
polesinsideup(960,410);
polesinsideup(990,410);
polesinsideup(1020,410);
polesinsideup(1050,410);
polesinsideup(1080,410);
polesinsideup(1110,410);
polesinsideup(1140,410);
polesinsideup(1170,410);
polesinsideup(1200,410);
polesinsideup(1230,410);


//lower
polesinsideup(-50,110);
polesinsideup(-30,110);
polesinsideup(00,110);
polesinsideup(30,110);
polesinsideup(60,110);
polesinsideup(90,110);
polesinsideup(120,110);
polesinsideup(150,110);
polesinsideup(180,110);
polesinsideup(210,110);
polesinsideup(240,110);
polesinsideup(270,110);
polesinsideup(300,110);
polesinsideup(330,110);
polesinsideup(360,110);
polesinsideup(390,110);
polesinsideup(420,110);
polesinsideup(450,110);
polesinsideup(480,110);
polesinsideup(510,110);
polesinsideup(540,110);
polesinsideup(570,110);
polesinsideup(600,110);
polesinsideup(630,110);
polesinsideup(660,110);
polesinsideup(690,110);
polesinsideup(720,110);
polesinsideup(750,110);
polesinsideup(780,110);
polesinsideup(810,110);
polesinsideup(840,110);
polesinsideup(870,110);
polesinsideup(900,110);
polesinsideup(930,110);
polesinsideup(960,110);
polesinsideup(990,110);
polesinsideup(1020,110);
polesinsideup(1050,110);
polesinsideup(1080,110);
polesinsideup(1110,110);
polesinsideup(1140,110);
polesinsideup(1170,110);
polesinsideup(1200,110);
polesinsideup(1230,110);


glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,100);
glVertex2f(-100,110);
glVertex2f(1300,110);
glVertex2f(1300,100);
glEnd();

glColor3f(0.627, 0.322, 0.176);
glBegin(GL_POLYGON);
glVertex2f(-100,130);
glVertex2f(-100,140);
glVertex2f(1300,140);
glVertex2f(1300,130);
glEnd();







}




void display(void)
{
  int count=0;

if(disp==0)
{
     glClearColor(0,0,0,0);
     glClear(GL_COLOR_BUFFER_BIT);
    text();

glFlush();
}

if(disp==1)
{
 glClearColor(0,0,0,0);
glClear(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);
day();
}
if(disp==2)
{
 glClearColor(0,0,0,0);
glClear(GL_DEPTH_BUFFER_BIT|GL_COLOR_BUFFER_BIT);
inside();
}
glutSwapBuffers();
}







void keys(unsigned char key,int x,int y)
{
if(key=='1')
{
for(i=0;i<=240;i++)
{
day();
doll4(410-i,-250);
glFlush();
}
for(i=0;i<=100;i++)
{
day();
doll4(170,-250+i);
glFlush();
}
for(i=0;i<=10;i++)
{
inside();
doll4(200,-250+i);
glFlush();
}
}

if(key=='2')
{
for(i=0;i<=340;i++)
{
inside();
doll4(200,-240+i);
glFlush();
}
for(i=0;i<=500;i++)
{
inside();
doll4(200-i,100);
glFlush();
}
}

if(key=='3')
{
for(i=0;i<=500;i++)
{
inside();
doll4(-300+i,100);
glFlush();
}
}

if(key=='4')
{
for(i=0;i<=300;i++)
{
inside();
doll4(200+i,100);
glFlush();
}
}

if(key=='5')
{
for(i=0;i<=300;i++)
{
inside();
doll4(500+i,100);
glFlush();
}
for(i=0;i<=400;i++)
{
inside2();
doll4(-300+i,100);
duck(0,0);
duck(110,-40);
duck(50,-120);
duck(500,-150);
duck(600,-100);
glFlush();
}

}
if(key=='6')
{
for(i=0;i<=150;i++)
{
inside2();
doll5(100+i,100-i);
duck(0,0);
duck(110,-40);
duck(50,-120);
duck(500,-150);
duck(600,-100);
glFlush();
}
for(i=0;i<=350;i++)
{
inside2();
doll5(250,-50);
duck(0+i,0);
duck(110+i,-40);
duck(50+i,-120);
duck(500+i,-150);
duck(600+i,-100);
glFlush();
}
}

if(key=='q')
exit(0);
}





//mouse menu/
void menu1(int value)
{
if(value==1)
{
disp=1;
glutPostRedisplay();
}
if(value==2)
{
disp=2;
glutPostRedisplay();
}
if(value==0)
    exit(0);
}








void CreateMenu()
{
mainmenu=glutCreateMenu(menu1);
}




void init()
{
glClearColor(0.0,0.0,0.1,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-50.0,1250.0,-200.0,700.0);
glMatrixMode(GL_MODELVIEW);
}

int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(2000,2000);
glutInitWindowPosition(0,0);
glutCreateWindow("sample");
glutDisplayFunc(display);
glutKeyboardFunc(keys);
init();
CreateMenu();
glutAddMenuEntry("EXIT",0);
glutAddMenuEntry("START",1);
glutAddMenuEntry("ENTER",2);
glutAttachMenu(GLUT_RIGHT_BUTTON);
glutMainLoop();
return 0;
}
