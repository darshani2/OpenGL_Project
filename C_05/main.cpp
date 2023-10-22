#include<stdio.h>
#include<stdlib.h>
#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
#include <math.h>

int posx=0,posy=0;
int day = 1;        //1 for day ,0 for night

///tree

void tree()
{

//tree1

glColor3f(0.4,0.2,0.0);
glBegin(GL_POLYGON);

    glVertex3i(50, 375, 0);
    glVertex3i(70, 375, 0);
    glVertex3i(70, 550, 0);
    glVertex3i(50, 550, 0);
glEnd();

  glColor3f(0.0,0.7,0.0);
  glBegin(GL_POLYGON);
  glVertex3i(10, 550, 0);
  glVertex3i(110, 550, 0);
  glVertex3i(60, 650, 0);
glEnd();

  glBegin(GL_POLYGON);
  glVertex3i(15, 600, 0);
  glVertex3i(105, 600, 0);
  glVertex3i(60, 700, 0);
glEnd();

//tree2

glColor3f(0.4,0.2,0.0);

glBegin(GL_POLYGON);
    glVertex3i(50+100, 350, 0);
    glVertex3i(70+100, 350, 0);
    glVertex3i(70+100, 500, 0);
    glVertex3i(50+100, 500, 0);
glEnd();

  glColor3f(0.0,0.7,0.0);

glBegin(GL_POLYGON);
    glVertex3i(10+100, 500, 0);
    glVertex3i(110+100, 500, 0);
    glVertex3i(60+100, 600, 0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3i(15+100, 550, 0);
    glVertex3i(105+100, 550, 0);
    glVertex3i(60+100, 650, 0);
glEnd();

//tree3

glColor3f(0.4,0.2,0.0);

glBegin(GL_POLYGON);
    glVertex3i(50+1000, 350+100, 0);
    glVertex3i(70+1000, 350+100, 0);
    glVertex3i(70+1000, 550+100, 0);
    glVertex3i(50+1000, 550+100, 0);
glEnd();

  glColor3f(0.0, 1.0, 0.0);

glBegin(GL_POLYGON);
    glVertex3i(10+1000, 550+100, 0);
    glVertex3i(110+1000, 550+100, 0);
    glVertex3i(60+1000, 650+100, 0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3i(15+1000, 600+100, 0);
    glVertex3i(105+1000, 600+100, 0);
    glVertex3i(60+1000, 700+100, 0);
glEnd();

//tree4

glColor3f(0.4,0.2,0.0);

glBegin(GL_POLYGON);

    glVertex3i(50+1100, 350+200, 0);
    glVertex3i(70+1100, 350+200, 0);
    glVertex3i(70+1100, 500+200, 0);
    glVertex3i(50+1100, 500+200, 0);
glEnd();

  glColor3f(0.0, 1.0, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);
    glVertex3i(60+1100, 600+200, 0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);
    glVertex3i(60+1100, 650+200, 0);
glEnd();

//tree5

glColor3f(0.4,0.2,0.0);

glBegin(GL_POLYGON);
    glVertex3i(50+1050, 350+75, 0);
    glVertex3i(65+1050, 350+75, 0);
    glVertex3i(65+1050, 420+75, 0);
    glVertex3i(50+1050, 420+75, 0);
glEnd();

  glColor3f(0.0, 1.0, 0.0);

glBegin(GL_POLYGON);
    glVertex3i(25+1050, 420+75, 0);
    glVertex3i(90+1050, 420+75, 0);
    glVertex3i(55+1050, 500+75, 0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3i(30+1050, 450+75, 0);
    glVertex3i(85+1050, 450+75, 0);
    glVertex3i(55+1050, 550+75, 0);
glEnd();

//tree6

glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glVertex3i(50+350, 275+200, 0);
    glVertex3i(70+350, 275+200, 0);
    glVertex3i(70+350, 400+200, 0);
    glVertex3i(50+350, 400+200, 0);
glEnd();

  glColor3f(0.0, 0.3, 0.1);

glBegin(GL_POLYGON);

    glVertex3i(10+350, 400+200, 0);
    glVertex3i(110+350, 400+200, 0);
    glVertex3i(60+350, 500+200, 0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3i(15+350, 450+200, 0);
    glVertex3i(105+350, 450+200, 0);
    glVertex3i(60+350, 550+200, 0);
glEnd();

//tree7

glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);

    glVertex3i(50+550, 275+200, 0);
    glVertex3i(70+550, 275+200, 0);
    glVertex3i(70+550, 420+200, 0);
    glVertex3i(50+550, 420+200, 0);
glEnd();

  glColor3f(0.0, 0.3, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10+550, 420+200, 0);
    glVertex3i(110+550, 420+200, 0);
    glVertex3i(60+550, 520+200, 0);
glEnd();

glBegin(GL_POLYGON);
    glVertex3i(15+550, 470+200, 0);
    glVertex3i(105+550, 470+200, 0);
    glVertex3i(60+550, 570+200, 0);
glEnd();
}

///river

void river()
{
    glColor3f(0.0, 0.8, 0.6);

    glBegin(GL_POLYGON);
    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);
glEnd();
}

///land

void land()
{

    glColor3f(0.333 ,0.420 ,0.184);
    glBegin(GL_POLYGON);
    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);
glEnd();
}

///hill

void hill()
{
    glColor3f(0.8,0.6,0.4);

    glBegin(GL_POLYGON);
    glVertex3i(600, 600, 0);
    glVertex3i(800, 900, 0);
    glVertex3i(900, 650, 0);


    glColor3f(0.627,0.322,0.176);
    glBegin(GL_POLYGON);
    glVertex3i(900, 650, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 620, 0);

     glColor3f(0.627,0.322,0.176);
     glBegin(GL_POLYGON);
     glVertex3i(1050, 620, 0);
     glVertex3i(1200, 800, 0);
     glVertex3i(1200, 600, 0);

glEnd();

}

///house

void house()
{

//house1

glColor3f(0.7, 0.9, 0.7);

glBegin(GL_POLYGON);
    glVertex3i(220, 350, 0);
    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(220, 450, 0);
glEnd();

glColor3f(0.36, 0.25, 0.20);  //roof
glBegin(GL_POLYGON);
    glVertex3i(200, 450, 0);
    glVertex3i(400, 450, 0);
    glVertex3i(300, 650, 0);
glEnd();

glColor3f(0.6156863,0,0);    // door
glBegin(GL_POLYGON);
    glVertex3i(280, 350, 0);
    glVertex3i(320, 350, 0);
    glVertex3i(320, 425, 0);
    glVertex3i(280, 425, 0);
glEnd();

    glColor3f(0.4,0.2,0.3);
glBegin(GL_POLYGON);
    glVertex3i(350-120, 400, 0);  //window
    glVertex3i(370-120, 400, 0);
    glVertex3i(370-120, 425, 0);
    glVertex3i(350-120, 425, 0);
glEnd();

//house2

glColor3f(1.0, 0.9, 0.8);

glBegin(GL_POLYGON);
    glVertex3i(220+200, 350+50, 0);
    glVertex3i(380+200, 350+50, 0);
    glVertex3i(380+200, 450+50, 0);
    glVertex3i(220+200, 450+50, 0);
glEnd();

glColor3f(0.36, 0.25, 0.20);   //roof
glBegin(GL_POLYGON);
    glVertex3i(200+200, 450+50, 0);
    glVertex3i(400+200, 450+50, 0);
    glVertex3i(300+200, 650+50, 0);
glEnd();

glColor3f(0.6156863,0,0);
glBegin(GL_POLYGON);
    glVertex3i(280+200, 350+50, 0);  //door
    glVertex3i(320+200, 350+50, 0);
    glVertex3i(320+200, 425+50, 0);
    glVertex3i(280+200, 425+50, 0);
glEnd();

glColor3f(0.4,0.2,0.3);
glBegin(GL_POLYGON);
    glVertex3i(350+200, 400+50, 0);  //  window
    glVertex3i(370+200, 400+50, 0);
    glVertex3i(370+200, 425+50, 0);
    glVertex3i(350+200, 425+50, 0);
glEnd();

//house3

glColor3f(0.7, 0.9, 0.7);

glBegin(GL_POLYGON);
    glVertex3i(200+600, 300+100, 0);
    glVertex3i(380+600, 300+100, 0);
    glVertex3i(380+600, 450+100, 0);
    glVertex3i(200+600, 450+100, 0);
glEnd();

glColor3f(0.3,0.2,0.0);
glBegin(GL_POLYGON);
    glVertex3i(180+600, 450+100, 0);    //roof
    glVertex3i(400+600, 450+100, 0);
    glVertex3i(300+600, 650+100, 0);
glEnd();

glColor3f(0.6156863,0,0);
glBegin(GL_POLYGON);
    glVertex3i(260+610, 300+100, 0);  //door
    glVertex3i(300+610, 300+100, 0);
    glVertex3i(300+610, 400+100, 0);
    glVertex3i(260+610, 400+100, 0);
glEnd();

glColor3f(0.4,0.2,0.1);
glBegin(GL_POLYGON);
    glVertex3i(350+600, 400+100, 0);  // right window
    glVertex3i(370+600, 400+100, 0);
    glVertex3i(370+600, 425+100, 0);
    glVertex3i(350+600, 425+100, 0);
glEnd();

 glColor3f(0.4,0.2,0.1);
glBegin(GL_POLYGON);
    glVertex3i(350+460, 400+100, 0);  // left window
    glVertex3i(370+460, 400+100, 0);
    glVertex3i(370+460, 425+100, 0);
    glVertex3i(350+460, 425+100, 0);
glEnd();

//house4

glColor3f(0.8, 0.7, 0.6);

glBegin(GL_POLYGON);
    glVertex3i(220+400, 350, 0);
    glVertex3i(380+400, 350, 0);
    glVertex3i(380+400, 450, 0);
    glVertex3i(220+400, 450, 0);
glEnd();

glColor3f(0.3,0.2,0.0);
glBegin(GL_POLYGON);
    glVertex3i(200+400, 450, 0);    //roof
    glVertex3i(400+400, 450, 0);
    glVertex3i(300+400, 650, 0);
glEnd();

glColor3f(0.6156863,0,0);
glBegin(GL_POLYGON);
    glVertex3i(280+400, 350, 0);  //door
    glVertex3i(320+400, 350, 0);
    glVertex3i(320+400, 425, 0);
    glVertex3i(280+400, 425, 0);
glEnd();

glColor3f(0.4,0.2,0.3);
glBegin(GL_POLYGON);
    glVertex3i(350+280, 400, 0);  // window
    glVertex3i(370+280, 400, 0);
    glVertex3i(370+280, 425, 0);
    glVertex3i(350+280, 425, 0);
glEnd();

}

///boat

void boat()
{
    //boat1

    glColor3f(0.545, 0.271, 0.074);     //under the boat
    glBegin(GL_POLYGON);
    glVertex3i(10,150,0);
    glVertex3i(200,150,0);
    glVertex3i(170,100,0);
    glVertex3i(30,100,0);
    glEnd();

    glColor3f(0.5,0.5,0.4);           //box
    glBegin(GL_POLYGON);
    glVertex3i(50,150,0);
    glVertex3i(150,150,0);
    glVertex3i(150,220,0);
    glVertex3i(50,220,0);
    glEnd();

    //boat2

    glColor3f(0.647,0.165,0.165);
    glBegin(GL_POLYGON);
    glVertex3i(10+375,150+50,0);
    glVertex3i(200+375,150+50,0);
    glVertex3i(170+375,100+50,0);
    glVertex3i(30+375,100+50,0);
    glEnd();

    glColor3f(0.5,0.5,0.5);
    glBegin(GL_POLYGON);
    glVertex3i(50+375,150+50,0);
    glVertex3i(150+375,150+50,0);
    glVertex3i(150+375,200+50,0);
    glVertex3i(50+375,200+50,0);
    glEnd();
}

///night
void night_effect()
{
    glColor3f(0 ,0 ,0);
    glBegin(GL_POLYGON);
    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 1200, 0);
    glVertex3i(0, 1200, 0);
glEnd();
}

///star

void star()
{
    //star1

    glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30, 1020, 0);
    glVertex3i(50, 1050, 0);
    glVertex3i(50, 1100, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70, 1020, 0);
    glVertex3i(50, 1100, 0);
    glVertex3i(50, 1050, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50, 1050, 0);
    glVertex3i(80, 1070, 0);
    glVertex3i(20, 1070, 0);
glEnd();

//star2

 glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+120, 1020+60, 0);
    glVertex3i(50+120, 1050+60, 0);
    glVertex3i(50+120, 1100+60, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+120, 1020+60, 0);
    glVertex3i(50+120, 1100+60, 0);
    glVertex3i(50+120, 1050+60, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+120, 1050+60, 0);
    glVertex3i(80+120, 1070+60, 0);
    glVertex3i(20+120, 1070+60, 0);
glEnd();

//star3

 glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+240, 1020, 0);
    glVertex3i(50+240, 1050, 0);
    glVertex3i(50+240, 1100, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+240, 1020, 0);
    glVertex3i(50+240, 1100, 0);
    glVertex3i(50+240, 1050, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+240, 1050, 0);
    glVertex3i(80+240, 1070, 0);
    glVertex3i(20+240, 1070, 0);
glEnd();

//star4

glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+360, 1020+60, 0);
    glVertex3i(50+360, 1050+60, 0);
    glVertex3i(50+360, 1100+60, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+360, 1020+60, 0);
    glVertex3i(50+360, 1100+60, 0);
    glVertex3i(50+360, 1050+60, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+360, 1050+60, 0);
    glVertex3i(80+360, 1070+60, 0);
    glVertex3i(20+360, 1070+60, 0);
glEnd();

//star5

glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+480, 1020, 0);
    glVertex3i(50+480, 1050, 0);
    glVertex3i(50+480, 1100, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+480, 1020, 0);
    glVertex3i(50+480, 1100, 0);
    glVertex3i(50+480, 1050, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+480, 1050, 0);
    glVertex3i(80+480, 1070, 0);
    glVertex3i(20+480, 1070, 0);
glEnd();

//star6

    glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+650, 1020, 0);
    glVertex3i(50+650, 1050, 0);
    glVertex3i(50+650, 1100, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+650, 1020, 0);
    glVertex3i(50+650, 1100, 0);
    glVertex3i(50+650, 1050, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+650, 1050, 0);
    glVertex3i(80+650, 1070, 0);
    glVertex3i(20+650, 1070, 0);
glEnd();

//star7

 glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+770, 1020+60, 0);
    glVertex3i(50+770, 1050+60, 0);
    glVertex3i(50+770, 1100+60, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+770, 1020+60, 0);
    glVertex3i(50+770, 1100+60, 0);
    glVertex3i(50+770, 1050+60, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+770, 1050+60, 0);
    glVertex3i(80+770, 1070+60, 0);
    glVertex3i(20+770, 1070+60, 0);
glEnd();

//star8

 glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+890, 1020, 0);
    glVertex3i(50+890, 1050, 0);
    glVertex3i(50+890, 1100, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+890, 1020, 0);
    glVertex3i(50+890, 1100, 0);
    glVertex3i(50+890, 1050, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+890, 1050, 0);
    glVertex3i(80+890, 1070, 0);
    glVertex3i(20+890, 1070, 0);
glEnd();

//star9

glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+1000, 1020+60, 0);
    glVertex3i(50+1000, 1050+60, 0);
    glVertex3i(50+1000, 1100+60, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+1000, 1020+60, 0);
    glVertex3i(50+1000, 1100+60, 0);
    glVertex3i(50+1000, 1050+60, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+1000, 1050+60, 0);
    glVertex3i(80+1000, 1070+60, 0);
    glVertex3i(20+1000, 1070+60, 0);
glEnd();

//star10

glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);

    glVertex3i(30+1120, 1020, 0);
    glVertex3i(50+1120, 1050, 0);
    glVertex3i(50+1120, 1100, 0);

glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(70+1120, 1020, 0);
    glVertex3i(50+1120, 1100, 0);
    glVertex3i(50+1120, 1050, 0);
glEnd();
glColor3f(1, 0.9, 0.8);
    glBegin(GL_POLYGON);
    glVertex3i(50+1120, 1050, 0);
    glVertex3i(80+1120, 1070, 0);
    glVertex3i(20+1120, 1070, 0);
glEnd();
}

///Moon

void moon(int x, int y, int radius) {
    int i;
    int triangleAmount = 100; // number of triangles used to draw the moon
    double twicePi = 2.0 * 3.14;

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor3f(1.0, 1.0, 0.0); // yellow color for the moon

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0, 0); // center of the moon
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            (radius * cos(i * twicePi / triangleAmount)),
            (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glPopMatrix();
}

///Sun

void sun(int x, int y, int radius) {
    int i;
    int triangleAmount = 100; // number of triangles used to draw the sun
    double twicePi = 2.0 * 3.14;

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor3f(1.0, 0.647, 0.0);   // orange color for the sun

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0, 0); // center of the sun
    for (i = 0; i <= triangleAmount; i++) {
        glVertex2f(
            (radius * cos(i * twicePi / triangleAmount)),
            (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    glPopMatrix();
}

///Cloud

void cloud(int x, int y) {
    int i;
    int numCircles = 5;
    int radii[] = { 40, 45, 50, 45, 40 }; // Varying radii for the cloud circles

    glPushMatrix();
    glTranslatef(x, y, 0);
    glColor3f(1.0, 1.0, 1.0);

    for (i = 0; i < numCircles; i++) {
        glBegin(GL_TRIANGLE_FAN);
        int numSegments = 100;
        double angle;
        for (int j = 0; j <= numSegments; j++) {
            angle = j * 2.0 * 3.14 / numSegments;
            glVertex2f(radii[i] * cos(angle), radii[i] * sin(angle));
        }
        glEnd();
        glTranslatef(35, 30, 0); // Translate to create overlapping circles
    }

    glPopMatrix();
}


void draw_object()
{
    if(day==1)
    {
        land();
        hill();
        tree();
        river();
        house();
        cloud(900,1000);
        sun(1000,1000,60);

        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();
    }

    else
    {
        night_effect();
        land();
        star();
        hill();
        tree();
        river();
        house();
        moon(600,1000,50);

        glPushMatrix();
        glTranslatef(posx,0,0);
        boat();
        glPopMatrix();
   }
}

void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
draw_object();
glFlush();
}

void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
        case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
        break;
	}
}

void update(int value) {

 if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}

void init(void)
{
glClearColor(0.000, 0.749, 1.000,0.0);
//glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);
}

int main(int argc, char** argv)
{
   int menu;

    printf("\n");
    printf("|=======================================================================|\n");
    printf("|===> Graphic Project :- Village Scenario <===|\n");
    printf("|--------------------------------------------------------------------------------------------------------------------------|\n");
    printf("|                                                                                                                                                                |\n");
    printf("#--------------------------------------------Help Center (How to Operate  ?)-----------------------------------------------|\n");
    printf("|                                               Press 'n'  or  'N' to make Night Time                                                              |\n");
    printf("|                                               Press 'd'  or  'D' to make Night Time                                                              |\n");
    printf("|                                                                                                                                                                |\n");
    printf("|-------------------------------------------------------------------------------------------------------------------------|\n");
    printf("|=======================================================================|\n");

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1200, 800);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");

glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);
glutMainLoop();
return 0;
}
