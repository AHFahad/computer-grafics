#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<Windows.h>
#include<iostream>

using namespace std;


GLfloat position = 0.0f;
GLfloat speed = 0.1f;
bool boolDay=true;
bool boolNight=false;
bool boolEvening=false;



bool Rain=false;


GLfloat rainPosion = 0.0f;
GLfloat rainSpeed = 0.05f;

GLfloat position2 = 0.0f;
GLfloat speed2 = 0.01f;

GLfloat birdsPosition=0.0f;
GLfloat birdspeed=0.04f;

GLfloat carPosition=0.0f;
GLfloat carSpeed=0.0f;


GLfloat boatPosition=0.0f;
GLfloat boatSpeed=0.0f;


GLfloat bulletSpeed = 0.0f;
GLfloat bulletPosition=0.0f;


GLfloat cloudsPosition=0.0f;
GLfloat cloudsPosition2=0.0f;
GLfloat cloudsPosition3=0.0f;
GLfloat cloudsPosition4=0.0f;
GLfloat cloudsSpeed=0.02f;

GLfloat humanSpeed = 0.01f;
GLfloat humanPosition=0.0f;
GLfloat humanPosition2=0.0f;



void boat1()
{

glPushMatrix();
glTranslatef(boatPosition,0.0f, 0.0f);

glTranslatef(0.3,-0.4,0);
glScalef(1.7,1.7,0);
//base

   glColor3ub(82, 90, 33);
   glBegin(GL_POLYGON);
   glVertex2f(-0.73f, -0.30f);
   glVertex2f(-0.64f, -0.30f);
   glVertex2f(-0.58f, -0.24f);
   glVertex2f(-0.73f, -0.24f);
   glEnd();
   glColor3ub (0, 0, 0);
   glLineWidth(2);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.73f, -0.30f);
   glVertex2f(-0.64f, -0.30f);
   glVertex2f(-0.58f, -0.24f);
   glVertex2f(-0.73f, -0.24f);
   glEnd();

   glColor3ub(82, 90, 33);
   glBegin(GL_POLYGON);
   glVertex2f(-0.75f, -0.30f);
   glVertex2f(-0.73f, -0.30f);
   glVertex2f(-0.73f, -0.27f);
   glVertex2f(-0.75f, -0.27f);
   glEnd();
   glColor3ub (0, 0, 0);
   glLineWidth(2);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.75f, -0.30f);
   glVertex2f(-0.73f, -0.30f);
   glVertex2f(-0.73f, -0.27f);
   glVertex2f(-0.75f, -0.27f);
   glEnd();

   glColor3ub(140, 151, 72);
   glBegin(GL_POLYGON);
   glVertex2f(-0.70,-0.24);
   glVertex2f(-0.60,-0.24);
   glVertex2f(-0.63,-0.18);
   glVertex2f(-0.68,-0.18);
   glEnd();
   glColor3ub (0, 0, 0);
   glLineWidth(2);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.70,-0.24);
   glVertex2f(-0.60,-0.24);
   glVertex2f(-0.63,-0.18);
   glVertex2f(-0.68,-0.18);
   glEnd();


   glColor3ub(140, 151, 72);
   glBegin(GL_POLYGON);
   glVertex2f(-0.685,-0.24);
   glVertex2f(-0.625,-0.24);
   glVertex2f(-0.625,-0.21);
   glVertex2f(-0.685,-0.21);
   glEnd();
   glColor3ub (0, 0, 0);
   glLineWidth(1);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.685,-0.24);
   glVertex2f(-0.625,-0.24);
   glVertex2f(-0.625,-0.21);
   glVertex2f(-0.685,-0.21);
   glEnd();

   glColor3ub(55, 176, 228);
   glBegin(GL_POLYGON);
   glVertex2f(-0.675,-0.21);
   glVertex2f(-0.655,-0.21);
   glVertex2f(-0.665,-0.19);
   glVertex2f(-0.675,-0.19);
   glEnd();
    glColor3ub (0, 0, 0);
   glLineWidth(1);
   glBegin(GL_LINE_LOOP);
    glVertex2f(-0.675,-0.21);
   glVertex2f(-0.655,-0.21);
   glVertex2f(-0.665,-0.19);
   glVertex2f(-0.675,-0.19);
   glEnd();


    glColor3ub(55, 176, 228);
   glBegin(GL_POLYGON);
   glVertex2f(-0.645,-0.21);
   glVertex2f(-0.625,-0.21);
   glVertex2f(-0.635,-0.19);
   glVertex2f(-0.645,-0.19);
   glEnd();
   glColor3ub (0, 0, 0);
   glLineWidth(1);
   glBegin(GL_LINE_LOOP);
    glVertex2f(-0.645,-0.21);
   glVertex2f(-0.625,-0.21);
   glVertex2f(-0.635,-0.19);
   glVertex2f(-0.645,-0.19);
   glEnd();


glPopMatrix();


}


void grass()
{
glColor3ub(0, 102, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.93,-0.52);
glVertex2f (0.87,-0.325);
glEnd();
glColor3ub(0, 255, 0);
glBegin(GL_POLYGON);
glVertex2f (0.87,-0.52);
glVertex2f (0.93,-0.52);
glVertex2f (0.93,-0.323);
glEnd();
glColor3ub(0, 204, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.86,-0.52);
glVertex2f (0.85,-0.319);
glEnd();
glColor3ub(0, 179, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.86,-0.52);
glVertex2f (0.83,-0.320);
glEnd();
glColor3ub(0, 230, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.85,-0.52);
glVertex2f (0.75,-0.320);
glEnd();
glColor3ub(0, 128, 0);
glBegin(GL_POLYGON);
glVertex2f (0.80,-0.52);
glVertex2f (0.87,-0.52);
glVertex2f (0.72,-0.380);
glEnd();
glColor3ub(0, 179, 0);
glBegin(GL_POLYGON);
glVertex2f (0.87,-0.52);
glVertex2f (0.90,-0.52);
glVertex2f (0.97,-0.330);
glEnd();
glColor3ub(0, 128, 0);
glBegin(GL_POLYGON);
glVertex2f (0.87,-0.52);
glVertex2f (0.93,-0.52);
glVertex2f (0.99,-0.328);
glEnd();


}


void allGrass(){


glPushMatrix();

glTranslatef(0.4,-0.05,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.4,-0.1,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();


glPushMatrix();
glTranslatef(0.15,0.082,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.65,-0.14,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.62,0.17,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.87,0.26,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();

glPushMatrix();
glTranslatef(0.3,0.17,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();


glPushMatrix();
glTranslatef(-1.2,0.3,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();


glPushMatrix();
glTranslatef(-1.4,0.3,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();


glPushMatrix();
glTranslatef(-1.0,0.3,0);
glScalef(0.25,0.25,0);
    grass();
glPopMatrix();


}


void satellite()
{
    glPushMatrix();

    glTranslatef(-0.66,0.3,0);
   glColor3ub(230,115,0);
   glBegin(GL_POLYGON);
   glVertex2f (-0.1, -0.1);
   glVertex2f (-0.02, -0.1);
   glVertex2f (-0.075, 0.2);
glEnd();
  glColor3ub (0, 0, 0);
    glLineWidth(2.5);
    glBegin(GL_LINE_LOOP);
     glVertex2f (-0.1, -0.1);
   glVertex2f (-0.02, -0.1);
   glVertex2f (-0.075, 0.2);
glEnd();

glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f (-0.013,0.225);
glVertex2f (0.1, 0.350);
glEnd();
glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f (0.1, 0.350);
glVertex2f (-0.080,0.42);
glEnd();

glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f (0.1, 0.350);
 glVertex2f (0.030,0.0697);
glEnd();

glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f (-0.080,0.42);
glVertex2f (-0.013,0.225);
glEnd();

glColor3ub(0,0,0);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f (-0.013,0.225);
glVertex2f (0.030,0.0697);
glEnd();

//1
glColor3ub(184, 184, 148);
 glBegin(GL_POLYGON);
 glVertex2f (-0.065,0.08);
 glVertex2f (0.030,0.0697);
 glVertex2f (-0.013,0.225);
  glEnd();
//2
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.09,0.10);
glVertex2f (-0.065,0.08);
 glVertex2f (-0.013,0.225);
glEnd();
//3
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.1,0.12);
glVertex2f (-0.09,0.10);
glVertex2f (-0.013,0.225);
glEnd();
//4
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.11,0.14);
glVertex2f (-0.1,0.12);
glVertex2f (-0.013,0.225);
glEnd();

//5
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.115,0.16);
glVertex2f (-0.11,0.14);
glVertex2f (-0.013,0.225);
glEnd();

//6
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.118,0.18);
glVertex2f (-0.115,0.16);
glVertex2f (-0.013,0.225);
glEnd();
//7
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.120,0.20);
glVertex2f (-0.115,0.18);
glVertex2f (-0.013,0.225);
glEnd();
//8
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.120,0.23);
glVertex2f (-0.120,0.20);
glVertex2f (-0.013,0.225);
glEnd();
//9
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.120,0.26);
glVertex2f (-0.120,0.23);
glVertex2f (-0.013,0.225);
glEnd();
//10
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.118,0.28);
glVertex2f (-0.120,0.26);
glVertex2f (-0.013,0.225);
glEnd();
//11
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.116,0.30);
glVertex2f (-0.118,0.28);
glVertex2f (-0.013,0.225);
glEnd();
//12
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.111,0.33);
glVertex2f (-0.116,0.30);
glVertex2f (-0.013,0.225);
glEnd();

//13
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.105,0.36);
glVertex2f (-0.111,0.33);
glVertex2f (-0.013,0.225);
glEnd();
//14
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.097,0.39);
glVertex2f (-0.105,0.36);
glVertex2f (-0.013,0.225);
glEnd();
//15
glColor3ub(184, 184, 148);
glBegin(GL_POLYGON);
glVertex2f (-0.080,0.42);
glVertex2f (-0.097,0.39);
glVertex2f (-0.013,0.225);
glEnd();
glPopMatrix();
}


void triTree(){

glPushMatrix();
//glTranslatef(-0.5,0.2,0);
    glScalef(0.3,0.5,0);

glBegin(GL_QUADS);
    glColor3ub(77, 57, 53 );
    glVertex2f(-0.04f,  -0.4f);
    glVertex2f(0.04f,  -0.4f);
    glVertex2f(0.04f , 0.0f );
    glVertex2f(-0.04f , 0.0f );
    glEnd();

glLineWidth(2);
    glColor3ub(0, 0, 0 );
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.04f,  -0.4f);
    glVertex2f(0.04f,  -0.4f);
    glVertex2f(0.04f , 0.0f );
    glVertex2f(-0.04f , 0.0f );
    glEnd();
    glLineWidth(1);


for(int i=0;i<5;i++){

    glBegin(GL_TRIANGLES);
    glColor3ub(11, 60, 2 );
    glVertex2f(-0.25f,  0.0f);
    glVertex2f(0.25f , 0.0f );
    glVertex2f(0.0f , 0.2f );
    glEnd();

    glLineWidth(2);
    glColor3ub(0, 0, 0 );
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.25f,  0.0f);
    glVertex2f(0.25f , 0.0f );
    glVertex2f(0.0f , 0.2f );
    glEnd();
    glLineWidth(1);
    glTranslatef(0,0.1,0);
    glScalef(0.8,1,1);




}

glPopMatrix();
}



void circle( GLfloat x,GLfloat y, GLfloat radius){
 int i;
    int triangleAmount = 20;
    GLfloat twicePi = 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),y + (radius * sin(i * twicePi / triangleAmount)) );
    }
    glEnd();

}

void quads(float x1,float y1,float x2, float y2){

 glBegin(GL_QUADS);
    glVertex2f(x1,y1);
    glVertex2f(x2,y1);
    glVertex2f(x2,y2);
    glVertex2f(x1,y2);
 glEnd();



}
void line_loop(float x1,float y1,float x2, float y2){
glColor3ub (0, 0, 0);
 glLineWidth(2);
 glBegin(GL_LINE_LOOP);
    glVertex2f(x1,y1);
    glVertex2f(x2,y1);
    glVertex2f(x2,y2);
    glVertex2f(x1,y2);
 glEnd();



}


void clouds(){
float x;
float y;
float z;

if(Rain || boolNight){
    x=128;
    y=128;
    z=128;

}
else{
    x=255;
    y=255;
    z=255;

}
glPushMatrix();


glPushMatrix();
glColor3ub (x, y, z);
glTranslatef(cloudsPosition,0,0);
 glTranslatef(0,0.65,0);
    circle(-0.73,0.2,0.05);
    circle(-0.73,0.29,0.05);
    circle(-0.78,0.25,0.05);
    circle(-0.64,0.29,0.05);
    circle(-0.64,0.20,0.05);
    circle(-0.59,0.25,0.05);
    circle(-0.68,0.27,0.05);
    circle(-0.68,0.17,0.05);
    circle(-0.68,0.33,0.05);

glPopMatrix();

glPushMatrix();
glTranslatef(cloudsPosition2,0,0);
glTranslatef(0.4,0.61,0);
    circle(-0.73,0.2,0.05);
    circle(-0.73,0.29,0.05);
    circle(-0.78,0.25,0.05);
    circle(-0.64,0.29,0.05);
    circle(-0.64,0.20,0.05);
    circle(-0.59,0.25,0.05);
     circle(-0.68,0.27,0.05);

    circle(-0.68,0.33,0.05);

glPopMatrix();

glPushMatrix();
glTranslatef(cloudsPosition3,0,0);
glTranslatef(0.8,0.58,0);
    circle(-0.73,0.2,0.05);
    circle(-0.73,0.29,0.05);
    circle(-0.78,0.25,0.05);
    circle(-0.64,0.29,0.05);
    circle(-0.64,0.20,0.05);
    circle(-0.59,0.25,0.05);
    circle(-0.68,0.27,0.05);

glPopMatrix();

glPushMatrix();

glColor3ub (x, y, z);
glTranslatef(cloudsPosition4,0,0);
 glTranslatef(1.4,0.63,0);
    circle(-0.73,0.2,0.05);
    circle(-0.73,0.29,0.05);
    circle(-0.78,0.25,0.05);
    circle(-0.64,0.29,0.05);
    circle(-0.64,0.20,0.05);
    circle(-0.59,0.25,0.05);
    circle(-0.68,0.27,0.05);
    circle(-0.68,0.17,0.05);
    circle(-0.68,0.33,0.05);

glPopMatrix();

glPopMatrix();

}

void bdFlag(){

glPushMatrix();

    glTranslatef(0.8,-0.0,0);
        glScaled(0.3,0.3,0);
        glScaled(0.7,1,0);
glBegin(GL_QUADS);
    glColor3ub(0, 103, 71);
    glVertex2f(0.0f ,  0.0f );
    glVertex2f(0.5f , 0.0f );
    glVertex2f(0.5f , 0.3f );
    glVertex2f(0.0f , 0.3f );
    glEnd();

    glColor3ub(218, 41, 28);
    circle(0.225,0.15,0.1);

    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2f(0.0f ,  0.3f );
    glVertex2f(-0.06f , 0.3f );
    glVertex2f(-0.06f , -0.6f );
    glVertex2f(0.0f , -0.6f );
     glEnd();


     glBegin(GL_QUADS);
    glVertex2f(0.04f ,  -0.7f );
    glVertex2f(-0.1f , -0.7f );
    glVertex2f(-0.1f , -0.6f );
    glVertex2f(0.04f , -0.6f );
     glEnd();
glPopMatrix();

}

void tree2(){

glPushMatrix();

glScalef(0.2,0.3,0);
    glBegin(GL_POLYGON);
    glColor3ub(175, 123, 24);
    glVertex2f(-0.12f ,  -0.03f );
    glVertex2f(-0.2f , -0.6f );
    glVertex2f(0.2f , -0.6f );
    glVertex2f(0.1f , 0.0f );
    glVertex2f(0.3f ,  0.3f );
    glVertex2f(0.25f ,  0.32f );
    glVertex2f(0.08f ,  0.0f );
    glVertex2f(-0.01f ,  0.32f );
    glVertex2f(-0.1f ,  0.31f );
    glVertex2f(-0.0f ,  0.0f );
    glVertex2f(-0.2f ,  0.2f );
    glVertex2f(-0.25f ,  0.1f );


    glEnd();

    glLineWidth(2);
     glBegin(GL_LINE_STRIP);
    glColor3ub(0, 0, 0);
    glVertex2f(-0.25f ,  0.1f );
    glVertex2f(-0.12f ,  -0.03f );
    glVertex2f(-0.2f , -0.6f );
    glVertex2f(0.2f , -0.6f );
    glVertex2f(0.1f , 0.0f );
    glVertex2f(0.3f ,  0.3f );
    glEnd();

glLineWidth(1);
    glColor3ub(0, 150, 0);
    circle(0.3,0.3,0.2);
    circle(-0.3,0.25,0.2);
    circle(0.15,0.5,0.25);
    circle(-0.2,0.45,0.25);
    circle(-0.2,0.45,0.25);
    circle(-0.1,0.5,0.25);

glPopMatrix();

}


void trees(){

/*
glPushMatrix();
glTranslatef(0.3,0.49,0);
triTree();
glPopMatrix();
*/




//lear 1

glPushMatrix();
glTranslatef(-1,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.9,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.7,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.55,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.4,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.32,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.2,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.1,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.1,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(0.2,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(0.3,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(0.6,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(0.8,0.49,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


//lear 2
glPushMatrix();
glTranslatef(-0.95,0.4,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.6,0.4,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.8,0.45,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.5,0.4,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.4,0.4,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(0.99,0.5,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(0.0,0.4,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(0.1,0.4,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(0.5,0.4,0);
glScalef(0.6,0.6,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(0.4,0.5,0);
glScalef(0.7,0.7,0);
triTree();
glPopMatrix();


glPushMatrix();
glTranslatef(0.65,0.4,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(0.9,0.4,0);
glScalef(0.8,0.8,0);
triTree();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.45,0.4,0);
tree2();

glPopMatrix();

}


void mountain(){


glColor3ub (78, 64, 66);
 glBegin(GL_TRIANGLES);
    glVertex2f(-0.2,0);
    glVertex2f(0.2,0);
    glVertex2f(0,0.4);
 glEnd();
}


void mountains(){


//right
glPushMatrix();
glTranslatef(0.9,0.4,0);
mountain();
glPopMatrix();


//left
glPushMatrix();
glTranslatef(-0.9,0.4,0);
mountain();
glPopMatrix();


//left 2nd
glPushMatrix();
glTranslatef(-0.7,0.4,0);
glScalef(1,0.7,0);
mountain();
glPopMatrix();


//left 3rd
glPushMatrix();
glTranslatef(-0.4,0.4,0);
glScalef(1,0.2,0);
mountain();
glPopMatrix();



//left 3rd
glPushMatrix();
glTranslatef(-0.2,0.4,0);
glScalef(1,0.6,0);
mountain();
glPopMatrix();


//4th
glPushMatrix();
glTranslatef(0.6,0.4,0);
glScalef(1,0.3,0);
mountain();
glPopMatrix();




//3rd
glPushMatrix();
glTranslatef(0.1,0.4,0);
glScalef(1,0.8,0);
mountain();
glPopMatrix();

}

void rainDrop(){

    glColor3ub(174, 214, 241);
    glBegin(GL_LINES);
    glVertex2f (-1.0,1.0);
    glVertex2f (-0.95,0.81);
    glEnd();

}

void rainDropRow(){

glPushMatrix();
    for(int i=0;i<10;i++){
        rainDrop();
        glTranslatef(0.1,0.1,0);
        rainDrop();
        glTranslatef(0.1,-0.1,0);
        rainDrop();

    }

glPopMatrix();

}

void rain(){
glPushMatrix();
    glTranslatef(0,rainPosion, 0.0f);

    // Rain line1
    glTranslatef(0,0.4*15,0);
    for(int i=0;i<20;i++){
        glTranslatef(0,-0.4,0);
        rainDropRow();
    }

    glPopMatrix();

}

void bird(){

glPushMatrix();
glScalef(0.2,0.2,0);


    //head
glLineWidth(2);
    glBegin(GL_POLYGON);
     glVertex2f (0.75,-0.04);
    glVertex2f (0.76,0.04);
     glVertex2f (0.73,0.07);
       glVertex2f (0.70,0.075);
         glVertex2f (0.69,-0.085);
    glEnd();

glBegin(GL_TRIANGLES);
 glVertex2f (0.70,0.075);
  glVertex2f (0.65,0.045);
 glVertex2f (0.69,-0.085);

    glEnd();


// after head

    glBegin(GL_POLYGON);
      glVertex2f (0.65,0.045);
     glVertex2f (0.60,0.07);
    glVertex2f (0.59,-0.098);
   glVertex2f (0.69,-0.085);
    glEnd();



 glBegin(GL_TRIANGLES);
 glVertex2f (0.60,0.07);
  glVertex2f (0.45,-0.01);
    glVertex2f (0.59,-0.098);
  glEnd();

//tail

glBegin(GL_POLYGON);
  glVertex2f (0.45,-0.01);
   glVertex2f (0.25,0.09);
    glVertex2f (0.49,-0.096);
  glVertex2f (0.59,-0.098);
  glEnd();

//wings
  glBegin(GL_POLYGON);
   glVertex2f (0.59,0.1);
    glVertex2f (0.49,0.12);
     glVertex2f (0.53,0.02);
   glVertex2f (0.60,0.07);
  glEnd();

  glBegin(GL_POLYGON);
      glVertex2f (0.49,0.12);
   glVertex2f (0.588,0.1);
glVertex2f (0.595,0.27);
   glVertex2f (0.48,0.25);
glEnd();

glBegin(GL_POLYGON);
 glVertex2f (0.52,0.4);
 glVertex2f (0.48,0.25);
glVertex2f (0.595,0.27);

glEnd();


glBegin(GL_POLYGON);
 glVertex2f (0.52,0.4);
 glVertex2f (0.595,0.27);
glVertex2f (0.68,0.57);
glEnd();


// belly
glBegin(GL_POLYGON);
  glVertex2f (0.49,-0.096);
   glVertex2f (0.58,-0.14);
  glVertex2f (0.60,-0.14);
glVertex2f (0.69,-0.085);

  glEnd();

//eye

 glColor3ub(0,0, 0);
glBegin(GL_POLYGON);
  glVertex2f (0.73,0.03);
   glVertex2f (0.70,0.03);
   glVertex2f (0.72,0.014);
   glVertex2f (0.74,0.018);

  glEnd();


     //lip
    glBegin(GL_TRIANGLES);
    glVertex2f (0.76,0.03);
    glVertex2f (0.80,0.0);
    glVertex2f (0.745,-0.03);
    glEnd();

  glPopMatrix();

}

void birds(){

glPushMatrix();
glTranslatef(birdsPosition,0,0);

glPushMatrix();
glColor3ub(255,255,0);
glTranslatef(-1.2,0.6,0);
bird();
glColor3ub(0,255,0);
glTranslatef(-0.3,-0.1,0);
bird();
glColor3ub(255,255,244);
glTranslatef(-0.3,0.1,0);
bird();
glPopMatrix();

glPopMatrix();

}

void human_mirror()
{
    //CAP
    glColor3ub(97, 119, 106);
    glBegin(GL_POLYGON);
    glVertex2f(-0.0f,0.3f); //a
    glVertex2f(-0.12f,0.38f); //b
    glVertex2f(-0.16f,0.23f); //c
    glVertex2f(-0.0f,0.3f);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.0f,0.3f);
    glVertex2f(-0.12f,0.38f);
    glVertex2f(-0.16f,0.23f);
    glVertex2f(-0.0f,0.3f);
    glEnd();
    //face
    glColor3ub(229, 200, 192);
    glBegin(GL_POLYGON);
    glVertex2f(-0.05f,0.28f); //D
    glVertex2f(-0.01f,0.23f); //E
    glVertex2f(-0.08f,0.17f); //F
    glVertex2f(-0.1f,0.18f); //G
    glVertex2f(-0.1f,0.14f); //H
    glVertex2f(-0.13f,0.14f); //I
    glVertex2f(-0.13f,0.245f); //j
    glVertex2f(-0.05f,0.28f); //D
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.05f,0.28f); //D
    glVertex2f(-0.01f,0.23f); //E
    glVertex2f(-0.08f,0.17f); //F
    glVertex2f(-0.1f,0.18f); //G
    glVertex2f(-0.1f,0.14f); //H
    glVertex2f(-0.13f,0.14f); //I
    glVertex2f(-0.13f,0.245f); //j
    glVertex2f(-0.05f,0.28f); //D
    glEnd();
    //PANTS
    glColor3ub(97, 119, 106);
    glBegin(GL_POLYGON);
    glVertex2f(-0.055f,0.025f); //Q
    glVertex2f(-0.07f,-0.17f); //X
    glVertex2f(-0.09f,-0.17f); //Y
    glVertex2f(-0.14f,-0.04f); //T
    glVertex2f(-0.14f,-0.17f); //U
    glVertex2f(-0.16f,-0.17f); //V
    glVertex2f(-0.16f,0.04f); //P
    glVertex2f(-0.12f,-0.04f); //4
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.055f,0.025f); //Q
    glVertex2f(-0.07f,-0.17f); //X
    glVertex2f(-0.09f,-0.17f); //Y
    glVertex2f(-0.12f,-0.06f); //T
    glVertex2f(-0.14f,-0.17f); //U
    glVertex2f(-0.16f,-0.17f); //V
    glVertex2f(-0.16f,0.02f); //P
    glVertex2f(-0.12f,-0.04f); //4
    glVertex2f(-0.055f,0.025f); //Q
    glEnd();

    //BODY
    glColor3ub(97, 119, 106);
    glBegin(GL_POLYGON);
    glVertex2f(-0.15f,0.14f); //6
    glVertex2f(-0.08f,0.14f); //1
    glVertex2f(-0.05f,0.1f); //2
    glVertex2f(-0.05f,0.03f); //3
    glVertex2f(-0.12f,-0.04f); //4
    glVertex2f(-0.2f,0.06f); //5
    glVertex2f(-0.15f,0.14f); //6
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.15f,0.14f); //6
    glVertex2f(-0.08f,0.14f); //1
    glVertex2f(-0.05f,0.1f); //2
    glVertex2f(-0.05f,0.03f); //3
    glVertex2f(-0.12f,-0.04f); //4
    glVertex2f(-0.2f,0.06f); //5
    glVertex2f(-0.15f,0.14f); //6
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.13f,0.04f); //E
    glVertex2f(-0.13f,0.01f); //E
    glVertex2f(-0.05f,0.03f); //D
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.16f,0.09f); //A
    glVertex2f(-0.16f,0.04f); //B
    glVertex2f(-0.16f,0.04f); //B
    glVertex2f(-0.12f,0.0f); //C
    glVertex2f(-0.12f,0.0f); //C
    glVertex2f(-0.06f,0.035f); //3
    //ARMO
    glVertex2f(-0.08f,0.14f); //1
    glVertex2f(-0.16f,0.04f); //B
    glVertex2f(-0.07f,0.13f); //1
    glVertex2f(-0.15f,0.03f); //B
     glVertex2f(-0.15f,0.14f); //6
     glVertex2f(-0.05f,0.03f); //3
     glVertex2f(-0.16f,0.13f); //6
     glVertex2f(-0.06f,0.02f); //3
     //EYE
     glVertex2f(-0.05f,0.25f); //D
    glVertex2f(-0.07f,0.25f); //E
    //GUN LINES
    glVertex2f(-0.03f,0.03f); //D
    glVertex2f(-0.13f,0.03f); //E
    glVertex2f(-0.13f,0.03f); //E
    glVertex2f(-0.13f,0.02f); //E
    glEnd();

    //GUN
    glBegin(GL_QUADS);
    glVertex2f(-0.05f,0.04f); //3
    glVertex2f(0.08f,0.04f); //E
    glVertex2f(0.08f,0.03f); //E
    glVertex2f(-0.07f,0.03f); //E
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-0.05f,0.05f); //3
    glVertex2f(0.02f,0.05f); //E
    glVertex2f(0.02f,0.02f); //E
    glVertex2f(-0.07f,0.02f); //E
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-0.02f,0.02f); //3
    glVertex2f(-0.0f,-0.02f); //E
    glVertex2f(-0.04f,-0.02f); //E
    glVertex2f(-0.055f,0.02f); //E
    glEnd();
    //SHOE
    glBegin(GL_QUADS);
    glVertex2f(-0.09f,-0.17f); //X
    glVertex2f(-0.05f,-0.17f); //Y
    glVertex2f(-0.05f,-0.2f); //E
    glVertex2f(-0.09f,-0.2f); //E
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(-0.17f,-0.17f); //V
    glVertex2f(-0.12f,-0.17f); //Y
    glVertex2f(-0.12f,-0.2f); //E
    glVertex2f(-0.17f,-0.2f); //E
    glEnd();

}


void human(){

    //CAP
    glColor3ub(97, 119, 106);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.3f); //a
    glVertex2f(0.12f,0.38f); //b
    glVertex2f(0.16f,0.23f); //c
    glVertex2f(0.0f,0.3f);
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0f,0.3f);
    glVertex2f(0.12f,0.38f);
    glVertex2f(0.16f,0.23f);
    glVertex2f(0.0f,0.3f);
    glEnd();
    //face
    glColor3ub(229, 200, 192);
    glBegin(GL_POLYGON);
    glVertex2f(0.05f,0.28f); //D
    glVertex2f(0.01f,0.23f); //E
    glVertex2f(0.08f,0.17f); //F
    glVertex2f(0.1f,0.18f); //G
    glVertex2f(0.1f,0.14f); //H
    glVertex2f(0.13f,0.14f); //I
    glVertex2f(0.13f,0.245f); //j
    glVertex2f(0.05f,0.28f); //D
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.05f,0.28f); //D
    glVertex2f(0.01f,0.23f); //E
    glVertex2f(0.08f,0.17f); //F
    glVertex2f(0.1f,0.18f); //G
    glVertex2f(0.1f,0.14f); //H
    glVertex2f(0.13f,0.14f); //I
    glVertex2f(0.13f,0.245f); //j
    glVertex2f(0.05f,0.28f); //D
    glEnd();
    //PANTS
    glColor3ub(97, 119, 106);
    glBegin(GL_POLYGON);
    glVertex2f(0.055f,0.025f); //Q
    glVertex2f(0.07f,-0.17f); //X
    glVertex2f(0.09f,-0.17f); //Y
    glVertex2f(0.14f,-0.04f); //T
    glVertex2f(0.14f,-0.17f); //U
    glVertex2f(0.16f,-0.17f); //V
    glVertex2f(0.16f,0.04f); //P
    glVertex2f(0.12f,-0.04f); //4
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.055f,0.025f); //Q
    glVertex2f(0.07f,-0.17f); //X
    glVertex2f(0.09f,-0.17f); //Y
    glVertex2f(0.12f,-0.06f); //T
    glVertex2f(0.14f,-0.17f); //U
    glVertex2f(0.16f,-0.17f); //V
    glVertex2f(0.16f,0.02f); //P
    glVertex2f(0.12f,-0.04f); //4
    glVertex2f(0.055f,0.025f); //Q
    glEnd();

    //BODY
    glColor3ub(97, 119, 106);
    glBegin(GL_POLYGON);
    glVertex2f(0.15f,0.14f); //6
    glVertex2f(0.08f,0.14f); //1
    glVertex2f(0.05f,0.1f); //2
    glVertex2f(0.05f,0.03f); //3
    glVertex2f(0.12f,-0.04f); //4
    glVertex2f(0.2f,0.06f); //5
    glVertex2f(0.15f,0.14f); //6
    glEnd();
    glColor3ub(0,0,0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.15f,0.14f); //6
    glVertex2f(0.08f,0.14f); //1
    glVertex2f(0.05f,0.1f); //2
    glVertex2f(0.05f,0.03f); //3
    glVertex2f(0.12f,-0.04f); //4
    glVertex2f(0.2f,0.06f); //5
    glVertex2f(0.15f,0.14f); //6
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(0.13f,0.04f); //E
    glVertex2f(0.13f,0.01f); //E
    glVertex2f(0.05f,0.03f); //D
    glEnd();

    glBegin(GL_LINES);
    glVertex2f(0.16f,0.09f); //A
    glVertex2f(0.16f,0.04f); //B
    glVertex2f(0.16f,0.04f); //B
    glVertex2f(0.12f,0.0f); //C
    glVertex2f(0.12f,0.0f); //C
    glVertex2f(0.06f,0.035f); //3
    //ARMO
    glVertex2f(0.08f,0.14f); //1
    glVertex2f(0.16f,0.04f); //B
    glVertex2f(0.07f,0.13f); //1
    glVertex2f(0.15f,0.03f); //B
     glVertex2f(0.15f,0.14f); //6
     glVertex2f(0.05f,0.03f); //3
     glVertex2f(0.16f,0.13f); //6
     glVertex2f(0.06f,0.02f); //3
     //EYE
     glVertex2f(0.05f,0.25f); //D
    glVertex2f(0.07f,0.25f); //E
    //GUN LINES
    glVertex2f(0.03f,0.03f); //D
    glVertex2f(0.13f,0.03f); //E
    glVertex2f(0.13f,0.03f); //E
    glVertex2f(0.13f,0.02f); //E
    glEnd();

    //GUN
    glBegin(GL_QUADS);
    glVertex2f(0.05f,0.04f); //3
    glVertex2f(-0.08f,0.04f); //E
    glVertex2f(-0.08f,0.03f); //E
    glVertex2f(0.07f,0.03f); //E
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.05f,0.05f); //3
    glVertex2f(-0.02f,0.05f); //E
    glVertex2f(-0.02f,0.02f); //E
    glVertex2f(0.07f,0.02f); //E
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.02f,0.02f); //3
    glVertex2f(0.0f,-0.02f); //E
    glVertex2f(0.04f,-0.02f); //E
    glVertex2f(0.055f,0.02f); //E
    glEnd();
    //SHOE
    glBegin(GL_QUADS);
    glVertex2f(0.09f,-0.17f); //X
    glVertex2f(0.05f,-0.17f); //Y
    glVertex2f(0.05f,-0.2f); //E
    glVertex2f(0.09f,-0.2f); //E
    glEnd();
    glBegin(GL_QUADS);
    glVertex2f(0.17f,-0.17f); //V
    glVertex2f(0.12f,-0.17f); //Y
    glVertex2f(0.12f,-0.2f); //E
    glVertex2f(0.17f,-0.2f); //E
    glEnd();


}


void humans(){
glPushMatrix();
glTranslatef(0.6,0.2,0);
glScalef(0.4,0.4,0);
human();
glPopMatrix();

glPushMatrix();
glTranslatef(0.3,0.2,0);
glScalef(0.4,0.4,0);
human_mirror();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.3,0.2,0);
glScalef(0.4,0.4,0);
human_mirror();
glPopMatrix();


glPushMatrix();
glTranslatef(-0.9,0.2,0);
glScalef(0.4,0.4,0);
human();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.1,0.2,0);
glScalef(0.4,0.4,0);
human_mirror();
glPopMatrix();


glPushMatrix();
glScalef(0.4,0.4,0);
glTranslatef(humanPosition,0.07,0);
human();
glPopMatrix();

glPushMatrix();
glTranslatef(-0.9,0.0,0);
glScalef(0.4,0.4,0);
human_mirror();
glPopMatrix();


glPushMatrix();
glTranslatef(humanPosition2,0,0);
glScalef(0.4,0.4,0);
human_mirror();
glPopMatrix();

glPushMatrix();
glTranslatef(0.7,-0.1,0);
glScalef(0.4,0.4,0);
human();
glPopMatrix();


glPushMatrix();
glTranslatef(1.0,0.0,0);
glScalef(0.4,0.4,0);
human_mirror();
glPopMatrix();

}



void wheel(float x, float y, float rad){
    float theta;
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){

        theta=i*3.142/180;
        glVertex2f(x+rad*cos(theta),y+rad*sin(theta));

    }
    glEnd();
    glColor3f(0,0,0);
    glBegin(GL_LINE_LOOP);
    for(int i=0;i<360;i++){

        theta=i*3.142/180;
        glVertex2f(x+rad*cos(theta),y+rad*sin(theta));

    }
    glEnd();

}
void jeep(){

glPushMatrix();

glTranslatef(carPosition,0,0);
glTranslatef(-0.8,-0.4,0);
glScalef(0.4,0.4,0);

    //jeep body
   glColor3ub(78, 107, 78);
   glBegin(GL_POLYGON);
   glVertex2f(-0.3f,-0.04f);
   glVertex2f(-0.3f,-0.25f);
   glVertex2f(0.4f,-0.25f);
   glVertex2f(0.4f,-0.04f);
   glVertex2f(0.15f,-0.03f);
   glVertex2f(-0.3f,-0.04f);
   glEnd();
   glColor3ub(0,0,0);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.3f,-0.04f);
   glVertex2f(-0.3f,-0.25f);
   glVertex2f(0.4f,-0.25f);
   glVertex2f(0.4f,-0.04f);
   glVertex2f(0.15f,-0.03f);
   glVertex2f(-0.3f,-0.04f);
   glEnd();
   glColor3ub(78, 107, 78);
   glBegin(GL_POLYGON);
   glVertex2f(-0.3f,-0.04f);
   glVertex2f(0.15f,-0.04f);
   glVertex2f(0.1f,0.25f);
   glVertex2f(-0.3f,0.25f);
   glVertex2f(-0.3f,-0.04f);
   glEnd();
   glColor3ub(0, 0, 0);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.3f,-0.04f);
   glVertex2f(0.15f,-0.04f);
   glVertex2f(0.1f,0.25f);
   glVertex2f(-0.3f,0.25f);
   glVertex2f(-0.3f,-0.04f);
   glEnd();

 //jeep window
   glColor3ub(63, 54, 54);
   glBegin(GL_QUADS);
   glVertex2f(-0.28f,0.0f);
   glVertex2f(-0.1f,0.0f);
   glVertex2f(-0.1f,0.2f);
   glVertex2f(-0.28f,0.2f);
   glEnd();
  glColor3ub(0, 0, 0);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.28f,0.0f);
   glVertex2f(-0.1f,0.0f);
   glVertex2f(-0.1f,0.2f);
   glVertex2f(-0.28f,0.2f);
   glEnd();
 //door
   glColor3ub(96, 147, 122);
   glBegin(GL_POLYGON);
   glVertex2f(-0.05f,0.2f);
   glVertex2f(-0.05f,-0.18f);
   glVertex2f(0.12f,-0.18f);
   glVertex2f(0.12f,0.0f);
   glVertex2f(0.08f,0.2f);
   glEnd();
   glColor3ub(0, 0, 0);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.05f,0.2f);
   glVertex2f(-0.05f,-0.18f);
   glVertex2f(0.12f,-0.18f);
   glVertex2f(0.12f,0.0f);
   glVertex2f(0.08f,0.2f);
   glEnd();
//DOOR WINDOW
   glColor3ub(111, 205, 214);
  glBegin(GL_POLYGON);
    glVertex2f(-0.03f,0.17f);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.09f,0.0f);
    glVertex2f(0.06f,0.17f);
    glEnd();
    glColor3ub(0, 0, 0);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.03f,0.17f);
    glVertex2f(-0.03f,0.0f);
    glVertex2f(0.09f,0.0f);
    glVertex2f(0.06f,0.17f);
    glEnd();
    // BACKSIDE TYRE
   glBegin(GL_QUADS);
   glVertex2f(-0.3f,0.2f);
   glVertex2f(-0.37f,0.2f);
   glVertex2f(-0.37f,-0.05f);
   glVertex2f(-0.3f,-0.05f);
   glEnd();
   glColor3ub(255, 255, 255);
   glBegin(GL_LINE_LOOP);
   glVertex2f(-0.3f,0.2f);
   glVertex2f(-0.37f,0.2f);
   glVertex2f(-0.37f,-0.05f);
   glVertex2f(-0.3f,-0.05f);
   glEnd();
   glBegin(GL_LINES);
   glVertex2f(-0.35f,0.2f);
   glVertex2f(-0.35f,-0.05f);
   glEnd();
   //LIGHTS
   glColor3ub(122, 4, 28);
   glBegin(GL_QUADS);
   glVertex2f(-0.3f,-0.06f);
   glVertex2f(-0.3f,-0.15f);
   glVertex2f(-0.28f,-0.15f);
   glVertex2f(-0.28f,-0.06f);
   glEnd();
   glBegin(GL_QUADS);
   glVertex2f(0.34f,-0.07f);
   glVertex2f(0.4f,-0.07f);
   glVertex2f(0.4f,-0.04f);
   glVertex2f(0.34f,-0.04f);
   glEnd();

   //TOP BAR
   glBegin(GL_LINES);
   glVertex2f(-0.27f,0.25f);
   glVertex2f(-0.27f,0.28f);

   glVertex2f(-0.27f,0.28f);
   glVertex2f(0.07f,0.28f);

   glVertex2f(0.07f,0.28f);
   glVertex2f(0.07f,0.25f);

   glVertex2f(-0.22f,0.28f);
   glVertex2f(-0.22f,0.25f);

   glVertex2f(-0.17f,0.28f);
   glVertex2f(-0.17f,0.25f);

   glVertex2f(-0.12f,0.28f);
   glVertex2f(-0.12f,0.25f);

   glVertex2f(-0.07f,0.28f);
   glVertex2f(-0.07f,0.25f);

   glVertex2f(-0.02f,0.28f);
   glVertex2f(-0.02f,0.25f);

   glEnd();
//wheels

//back wheel
   glColor3ub(33, 15, 15);
   wheel(-0.17,-0.25,0.09);
   glColor3ub(150, 148, 148);
   wheel(-0.17,-0.25,0.06);

//front wheel
   glColor3ub(33, 15, 15);
   wheel(0.21,-0.25,0.09);
   glColor3ub(150, 148, 148);
   wheel(0.21,-0.25,0.06);

glPopMatrix();
}



void bullet(){

glPushMatrix();
glTranslatef(bulletPosition,0.0f, 0.0f);

glBegin(GL_TRIANGLES);
   glColor3ub(222,200 , 43);
   glVertex2f(0.0f,0.1f);
   glVertex2f(0.0f, -0.1f);
   glVertex2f(0.2f, 0.0f);
   glEnd();

glPopMatrix();

}

void tank(){


    glPushMatrix();

    glTranslatef(-0.55,-0.08,0);
    glScalef(0.4,0.08,0);
    bullet();
    glPopMatrix();


    glPushMatrix();
    glScalef(0.45,0.5,0);
    glTranslatef(-1.7,-0.2,0);
    //TOP BODY
    glColor3ub(97, 119, 106);
    glBegin(GL_POLYGON);
    glVertex2f(0.0f,0.06f);
    glVertex2f(0.22f,0.06f);
    glVertex2f(0.19f,0.09f);
    glVertex2f(0.01f,0.09f);
    glVertex2f(-0.01f,0.06f);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.0f,0.06f);
    glVertex2f(0.22f,0.06f);
    glVertex2f(0.19f,0.09f);
    glVertex2f(0.01f,0.09f);
    glVertex2f(-0.01f,0.06f);
    glEnd();

    //GUN

    glColor3ub(97, 119, 106);
    glBegin(GL_POLYGON);
    glVertex2f(0.3f,0.01f);
    glVertex2f(0.7f,0.01f);
    glVertex2f(0.7f,0.05f);
    glVertex2f(0.27f,0.05f);
    glVertex2f(0.3f,0.01f);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.3f,0.01f);
    glVertex2f(0.7f,0.01f);
    glVertex2f(0.7f,0.05f);
    glVertex2f(0.27f,0.05f);
    glVertex2f(0.3f,0.01f);
    glEnd();



    //tank upper body
    glColor3ub(53, 76, 63);
    glBegin(GL_POLYGON);
    glVertex2f(-0.08f,0.0f);
    glVertex2f(-0.04f,0.06f);
    glVertex2f(0.26f,0.06f);
    glVertex2f(0.31f,0.0f);
    glVertex2f(-0.08f,0.0f);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.08f,0.0f);
    glVertex2f(-0.04f,0.06f);
    glVertex2f(0.26f,0.06f);
    glVertex2f(0.31f,0.0f);
    glVertex2f(-0.08f,0.0f);

    glEnd();


    //tank body
    glColor3ub(78, 107, 78);
    glBegin(GL_POLYGON);
    glVertex2f(-0.4f,-0.25f);
    glVertex2f(0.4f,-0.25f);
    glVertex2f(0.5f,-0.15f);
    glVertex2f(0.35f,0.0f);
    glVertex2f(-0.35f,0.0f);
    glVertex2f(-0.4f,-0.02f);
    glVertex2f(-0.5f,-0.12f);
    glVertex2f(-0.4f,-0.25f);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.4f,-0.25f);
    glVertex2f(0.4f,-0.25f);
    glVertex2f(0.5f,-0.15f);
    glVertex2f(0.35f,0.0f);
    glVertex2f(-0.35f,0.0f);
    glVertex2f(-0.4f,-0.02f);
    glVertex2f(-0.5f,-0.12f);
    glVertex2f(-0.4f,-0.25f);
    glEnd();
    // lower body
    glColor3ub(71, 61, 61);
    glBegin(GL_QUADS);
     glVertex2f(-0.4f,-0.25f);
     glVertex2f(-0.35f,-0.3f);
     glVertex2f(0.35f,-0.3f);
      glVertex2f(0.4f,-0.25f);
       glEnd();

    glBegin(GL_LINES);
    glVertex2f(-0.48f,-0.15f);
    glVertex2f(0.5f,-0.15f);
    glEnd();

 //wheels
 //back wheel 1
   glColor3ub(33, 15, 15);
   wheel(-0.25,-0.28,0.08);
   glColor3ub(150, 148, 148);
   wheel(-0.25,-0.28,0.05);
 //back wheel 2
   glColor3ub(33, 15, 15);
   wheel(-0.08,-0.28,0.08);
   glColor3ub(150, 148, 148);
   wheel(-0.08,-0.28,0.05);
  //front wheel 2
   glColor3ub(33, 15, 15);
   wheel(0.09,-0.28,0.08);
   glColor3ub(150, 148, 148);
   wheel(0.09,-0.28,0.05);
 //front wheel 1
    glColor3ub(33, 15, 15);
   wheel(0.26,-0.28,0.08);
   glColor3ub(150, 148, 148);
   wheel(0.26,-0.28,0.05);

   //WINDOWS
    glColor3ub(94, 132, 110);
    glBegin(GL_QUADS);
    glVertex2f(-0.3f,-0.1f);
    glVertex2f(-0.22f,-0.1f);
    glVertex2f(-0.22f,-0.05f);
    glVertex2f(-0.3f,-0.05f);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(-0.2f,-0.1f);
    glVertex2f(-0.12f,-0.1f);
    glVertex2f(-0.12f,-0.05f);
    glVertex2f(-0.2f,-0.05f);
    glEnd();

glPopMatrix();

}

void tent(){

//tent front
glColor3ub(232, 152, 14);
glBegin(GL_POLYGON);
glVertex2f (-0.13,0.04);
  glVertex2f (0.06,0.0);
 glVertex2f (0.06,0.15);
 glVertex2f (-0.04,0.25);
 glVertex2f (-0.13,0.12);
    glEnd();


//side wall
glColor3ub(206, 135, 10);
    glBegin(GL_QUADS);
    glVertex2f (0.06,0.0);
    glVertex2f (0.17,0.02);
     glVertex2f (0.17,0.1);
      glVertex2f (0.06,0.2);
    glEnd();


//terrace square

 glColor3ub(246, 194, 49);
    glBegin(GL_QUADS);
    glVertex2f (0.08,0.08);
    glVertex2f (0.2,0.1);
     glVertex2f (0.09,0.3);
      glVertex2f (-0.04,0.3);
    glEnd();

//terrace front work
glColor3ub(206, 127, 20);

 glBegin(GL_POLYGON);
 glVertex2f (-0.15,0.09);
 glVertex2f (-0.04,0.25);
glVertex2f (-0.04,0.3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f (-0.04,0.3);
 glVertex2f (-0.04,0.25);
 glVertex2f (0.08,0.08);
    glEnd();


//door
glColor3ub(79, 18, 8);
glBegin(GL_POLYGON);
glVertex2f (-0.04,0.25);
 glVertex2f (-0.07,0.027);
  glVertex2f (-0.01,0.017);
    glEnd();


//door piller
glLineWidth(2);
glColor3ub(255, 255, 255);
glBegin(GL_LINES);

glVertex2f (-0.04,0.243);
glVertex2f (-0.04,0.022);


glEnd();


//door cover
//left
glColor3ub(212, 121, 17);
glBegin(GL_POLYGON);
glVertex2f (-0.04,0.25);
 glVertex2f (-0.09,0.078);
 glVertex2f (-0.07,0.027);

    glEnd();

//right
glBegin(GL_POLYGON);
glVertex2f (-0.04,0.25);
 glVertex2f (-0.01,0.017);
 glVertex2f (0.0,0.078);
    glEnd();

//rope

//front right
glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (0.085,0.095);
 glVertex2f (0.16,-0.08);
glEnd();

//pegs

glColor3ub(133, 10, 10);
glBegin(GL_LINES);

 glVertex2f (0.16,-0.08);
 glVertex2f (0.16,-0.06);

 glVertex2f (0.085,0.095);
 glVertex2f (0.085,0.097);


glEnd();

//back right

glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (0.18,0.12);
 glVertex2f (0.26,-0.05);
glEnd();

//pegs

glColor3ub(133, 10, 10);
glBegin(GL_LINES);



glVertex2f (0.26,-0.03);
glVertex2f (0.26,-0.05);

glVertex2f (0.18,0.12);
glVertex2f (0.18,0.122);
glEnd();

//left front

glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (-0.13,0.12);
glVertex2f (-0.20,-0.05);
glEnd();

//pegs

glColor3ub(133, 10, 10);
glBegin(GL_LINES);

glVertex2f (-0.20,-0.03);
glVertex2f (-0.20,-0.05);


glEnd();
glLineWidth(1);
}


void campfire(){

//fuel

glPushMatrix();
//fuel1

glTranslatef(0.4,0.2,0);
glScalef(0.2,0.2,0);
glColor3ub(78, 53, 50);
glBegin(GL_POLYGON);
   glVertex2f (0.01,-0.19);
   glVertex2f (0.02,-0.29);
   glVertex2f (0.51,0.02);
    glVertex2f (0.50,0.12);

glEnd();

glColor3ub(129, 99, 103);
glBegin(GL_POLYGON);
glVertex2f (0.01,-0.2);
glVertex2f (0.50,0.12);
glVertex2f (0.49,0.16);
 glVertex2f (0.01,-0.15);
glEnd();

//fuel 2


glColor3ub(78, 53, 50);
glBegin(GL_POLYGON);
  glVertex2f (0.0,0.1);
 glVertex2f (-0.02,0.0);
 glVertex2f (0.5,-0.3);
 glVertex2f (0.52,-0.2);

glEnd();

glColor3ub(129, 99, 103);
glBegin(GL_POLYGON);
 glVertex2f (0.0,0.1);
glVertex2f (0.52,-0.2);
glVertex2f (0.53,-0.15);
 glVertex2f (0.01,0.15);
glEnd();



//fire

if((boolNight && !Rain )||(boolEvening && !Rain )){


glColor3ub(253, 227, 49);
glBegin(GL_POLYGON);
  glVertex2f (0.125,0.085);
 glVertex2f (0.25,0.00);
 glVertex2f (0.375,0.085);
glEnd();


glBegin(GL_POLYGON);
  glVertex2f (0.127,0.115);

  glVertex2f (0.25,0.05);
  glVertex2f (0.377,0.115);
glEnd();


glBegin(GL_POLYGON);
  glVertex2f (0.147,0.17);
   glVertex2f (0.167,0.115);
  glVertex2f (0.25,0.05);
   glVertex2f (0.337,0.115);
  glVertex2f (0.357,0.17);
glEnd();


glBegin(GL_POLYGON);
glVertex2f (0.167,0.2);
glVertex2f (0.337,0.2);
glVertex2f (0.252,0.3);

glEnd();


glBegin(GL_POLYGON);
glVertex2f (0.167,0.2);
glVertex2f (0.252,0.1);
glVertex2f (0.337,0.2);


glEnd();

//light orange part
glColor3ub(227, 139, 48);
glBegin(GL_POLYGON);

 glVertex2f (0.205,0.075);

 glVertex2f (0.295,0.075);
 glVertex2f (0.25,0.25);
glEnd();
//dark orange part
glColor3ub(216, 81, 68);
glBegin(GL_POLYGON);
  glVertex2f (0.19,0.075);
 glVertex2f (0.25,0.00);
 glVertex2f (0.31,0.075);
glEnd();

glBegin(GL_POLYGON);
  glVertex2f (0.22,0.075);

 glVertex2f (0.28,0.075);

 glVertex2f (0.25,0.2);
glEnd();


}

glPopMatrix();

}

void tentMirror(){

//tent front
glColor3ub(232, 152, 14);
glBegin(GL_POLYGON);
glVertex2f (0.13,0.04);
  glVertex2f (-0.06,0.0);
 glVertex2f (-0.06,0.15);
 glVertex2f (0.04,0.25);
 glVertex2f (0.13,0.12);
    glEnd();


//side wall
glColor3ub(206, 135, 10);
    glBegin(GL_QUADS);
    glVertex2f (-0.06,0.0);
    glVertex2f (-0.17,0.02);
     glVertex2f (-0.17,0.1);
      glVertex2f (-0.06,0.2);
    glEnd();


//terrace square

 glColor3ub(246, 194, 49);
    glBegin(GL_QUADS);
    glVertex2f (-0.08,0.08);
    glVertex2f (-0.2,0.1);
     glVertex2f (-0.09,0.3);
      glVertex2f (0.04,0.3);
    glEnd();

//terrace front work
glColor3ub(206, 127, 20);

 glBegin(GL_POLYGON);
 glVertex2f (0.15,0.09);
 glVertex2f (0.04,0.25);
glVertex2f (0.04,0.3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f (0.04,0.3);
 glVertex2f (0.04,0.25);
 glVertex2f (-0.08,0.08);
    glEnd();


//door
glColor3ub(79, 18, 8);
glBegin(GL_POLYGON);
glVertex2f (0.04,0.25);
 glVertex2f (0.07,0.027);
  glVertex2f (0.01,0.017);
    glEnd();


//door piller
glLineWidth(2);
glColor3ub(255, 255, 255);
glBegin(GL_LINES);

glVertex2f (0.04,0.243);
glVertex2f (0.04,0.022);
glEnd();


//door cover
//left
glColor3ub(212, 121, 17);
glBegin(GL_POLYGON);
glVertex2f (0.04,0.25);
 glVertex2f (0.09,0.078);
 glVertex2f (0.07,0.027);

    glEnd();

//right
glBegin(GL_POLYGON);
glVertex2f (0.04,0.25);
 glVertex2f (0.01,0.017);
 glVertex2f (0.0,0.078);
    glEnd();

//rope

//front right
glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (-0.085,0.095);
 glVertex2f (-0.16,-0.08);
glEnd();

//pegs

glColor3ub(133, 10, 10);
glBegin(GL_LINES);

 glVertex2f (-0.16,-0.08);
 glVertex2f (-0.16,-0.06);

 glVertex2f (-0.085,0.095);
 glVertex2f (-0.085,0.097);


glEnd();

//back right

glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (-0.18,0.12);
 glVertex2f (-0.26,-0.05);
glEnd();

//pegs

glColor3ub(133, 10, 10);
glBegin(GL_LINES);
glVertex2f (-0.26,-0.03);
glVertex2f (-0.26,-0.05);

glVertex2f (-0.18,0.12);
glVertex2f (-0.18,0.122);
glEnd();

//left front

glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (0.13,0.12);
glVertex2f (0.20,-0.05);
glEnd();

//pegs

glColor3ub(133, 10, 10);
glBegin(GL_LINES);

glVertex2f (0.20,-0.03);
glVertex2f (0.20,-0.05);
glEnd();
glLineWidth(1);
}



void red_tent(){
//tent front
glColor3ub(224, 90, 63);
glBegin(GL_POLYGON);
glVertex2f (-0.13,0.04);
  glVertex2f (0.06,0.0);
 glVertex2f (0.06,0.15);
 glVertex2f (-0.04,0.25);
 glVertex2f (-0.13,0.12);
    glEnd();

//side wall
glColor3ub(186, 72, 48);
    glBegin(GL_QUADS);
    glVertex2f (0.06,0.0);
    glVertex2f (0.17,0.02);
     glVertex2f (0.17,0.1);
      glVertex2f (0.06,0.2);
    glEnd();

//terrace square
 glColor3ub(206, 84, 60);
    glBegin(GL_QUADS);
    glVertex2f (0.08,0.08);
    glVertex2f (0.2,0.1);
     glVertex2f (0.09,0.3);
      glVertex2f (-0.04,0.3);
    glEnd();



//terrace front work
glColor3ub(187, 73, 46);
 glBegin(GL_POLYGON);
 glVertex2f (-0.15,0.09);
 glVertex2f (-0.04,0.25);
glVertex2f (-0.04,0.3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f (-0.04,0.3);
 glVertex2f (-0.04,0.25);
 glVertex2f (0.08,0.08);
    glEnd();

//door
glColor3ub(47, 17, 9);
glBegin(GL_POLYGON);
glVertex2f (-0.04,0.25);
 glVertex2f (-0.07,0.027);
  glVertex2f (-0.01,0.017);
    glEnd();

//door piller
glLineWidth(2);
glColor3ub(255, 255, 255);
glBegin(GL_LINES);
glVertex2f (-0.04,0.243);
glVertex2f (-0.04,0.022);
glEnd();

//door cover
//left
glColor3ub(154, 57, 41);
glBegin(GL_POLYGON);
glVertex2f (-0.04,0.25);
 glVertex2f (-0.09,0.078);
 glVertex2f (-0.07,0.027);
    glEnd();

//right
glBegin(GL_POLYGON);
glVertex2f (-0.04,0.25);
 glVertex2f (-0.01,0.017);
 glVertex2f (0.0,0.078);
    glEnd();

//rope
//front right
glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (0.085,0.095);
 glVertex2f (0.16,-0.08);
glEnd();



//pegs
glColor3ub(133, 10, 10);
glBegin(GL_LINES);
 glVertex2f (0.16,-0.08);
 glVertex2f (0.16,-0.06);
 glVertex2f (0.085,0.095);
 glVertex2f (0.085,0.097);
glEnd();



//back right
glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (0.18,0.12);
 glVertex2f (0.26,-0.05);
glEnd();



//pegs
glColor3ub(133, 10, 10);
glBegin(GL_LINES);
glVertex2f (0.26,-0.03);
glVertex2f (0.26,-0.05);
glVertex2f (0.18,0.12);
glVertex2f (0.18,0.122);
glEnd();



//left front
glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (-0.13,0.12);
glVertex2f (-0.20,-0.05);
glEnd();



//pegs
glColor3ub(133, 10, 10);
glBegin(GL_LINES);
glVertex2f (-0.20,-0.03);
glVertex2f (-0.20,-0.05);
glEnd();
glLineWidth(1);
}

void green_tentMirror(){



//tent front
glColor3ub(74, 169, 53);
glBegin(GL_POLYGON);
glVertex2f (0.13,0.04);
glVertex2f (-0.06,0.0);
glVertex2f (-0.06,0.15);
glVertex2f (0.04,0.25);
glVertex2f (0.13,0.12);
glEnd();



//side wall
glColor3ub(8, 119, 64);
glBegin(GL_QUADS);
glVertex2f (-0.06,0.0);
glVertex2f (-0.17,0.02);
glVertex2f (-0.17,0.1);
glVertex2f (-0.06,0.2);
glEnd();



//terrace square
glColor3ub(63, 137, 58);
glBegin(GL_QUADS);
glVertex2f (-0.08,0.08);
glVertex2f (-0.2,0.1);
glVertex2f (-0.09,0.3);
glVertex2f (0.04,0.3);
glEnd();



//terrace front work
glColor3ub(18, 109, 52);
 glBegin(GL_POLYGON);
glVertex2f (0.15,0.09);
glVertex2f (0.04,0.25);
glVertex2f (0.04,0.3);
glEnd();

glBegin(GL_POLYGON);
glVertex2f (0.04,0.3);
glVertex2f (0.04,0.25);
glVertex2f (-0.08,0.08);
glEnd();

//door
glColor3ub(1, 38, 20);
glBegin(GL_POLYGON);
glVertex2f (0.04,0.25);
glVertex2f (0.07,0.027);
glVertex2f (0.01,0.017);
glEnd();



//door piller
glLineWidth(2);
glColor3ub(255, 255, 255);
glBegin(GL_LINES);
glVertex2f (0.04,0.243);
glVertex2f (0.04,0.022);
glEnd();

//door cover
//left
glColor3ub(9, 108, 61);
glBegin(GL_POLYGON);
glVertex2f (0.04,0.25);
glVertex2f (0.09,0.078);
glVertex2f (0.07,0.027);

 glEnd();



//right
glBegin(GL_POLYGON);
glVertex2f (0.04,0.25);
glVertex2f (0.01,0.017);
glVertex2f (0.0,0.078);
glEnd();



//rope
//front right
glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (-0.085,0.095);
glVertex2f (-0.16,-0.08);
glEnd();



//pegs
glColor3ub(133, 10, 10);
glBegin(GL_LINES);
glVertex2f (-0.16,-0.08);
glVertex2f (-0.16,-0.06);
glVertex2f (-0.085,0.095);
glVertex2f (-0.085,0.097);
glEnd();



//back right
glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (-0.18,0.12);
glVertex2f (-0.26,-0.05);
glEnd();



//pegs
glColor3ub(133, 10, 10);
glBegin(GL_LINES);
glVertex2f (-0.26,-0.03);
glVertex2f (-0.26,-0.05);
glVertex2f (-0.18,0.12);
glVertex2f (-0.18,0.122);
glEnd();



//left front
glColor3ub(133, 181, 124);
glLineWidth(2);
glBegin(GL_LINES);
glVertex2f (0.13,0.12);
glVertex2f (0.20,-0.05);
glEnd();



//pegs
glColor3ub(133, 10, 10);
glBegin(GL_LINES);
glVertex2f (0.20,-0.03);
glVertex2f (0.20,-0.05);
glEnd();
glLineWidth(1);
}


 void tents(){

 glPushMatrix();
glTranslatef(0.3,0.2,0);
glScalef(0.7,0.7,0);
tentMirror();
glPopMatrix();


glPushMatrix();
glTranslatef(0.6,0.2,0);
glScalef(0.7,0.7,0);
tent();
glPopMatrix();

campfire();


glPushMatrix();
glTranslatef(0.9,0.1,0);
glScalef(0.7,0.7,0);
red_tent();
glPopMatrix();



glPushMatrix();
glTranslatef(0.1,0.1,0);
glScalef(0.7,0.7,0);
green_tentMirror();
glPopMatrix();

 }


void frontPiller(float x, float y ,float sx,float sy){

//piller

   //light color part
    glColor3ub(255, 178, 102);
    glBegin(GL_QUADS);
        glVertex2f(x,y);
        glVertex2f(x+(5)*sx,y-(0.3*sy));
        glVertex2f(x+(5)*sx,y+(90)*sy);
        glVertex2f(x,y+(90)*sy);
    glEnd();

   //dark color part
    glColor3ub(153,76,0);
    glBegin(GL_QUADS);
        glVertex2f(x+(5)*sx,y);
        glVertex2f(x+(7)*sx,y+(1*sy));
        glVertex2f(x+(7)*sx,y+(90)*sy);
        glVertex2f(x+(5)*sx,y+(90)*sy);
    glEnd();

}


void backPiller(float x, float y ,float sx,float sy){

//piller

   //light color part
    glColor3ub(255, 178, 102);
    glBegin(GL_QUADS);
        glVertex2f(x,y);
        glVertex2f(x+(5)*sx,y-(0.3)*sy);
        glVertex2f(x+(5)*sx,y+(73)*sy);
        glVertex2f(x,y+(73)*sy);
    glEnd();

   //dark color part
    glColor3ub(153,76,0);
    glBegin(GL_QUADS);
        glVertex2f(x+(5)*sx,y);
        glVertex2f(x+(7)*sx,y+(1*sy));
        glVertex2f(x+(7)*sx,y+(73)*sy);
        glVertex2f(x+(5)*sx,y+(73)*sy);
    glEnd();


}


void watchTower(float x, float y ,float sx,float sy){

//front left piller
   frontPiller(x, y ,sx, sy);
   //shadow of the box

 glColor3ub(0,0,0);
    glBegin(GL_QUADS);

        glVertex2f(x+(40)*sx,y+(83*sy));
        glVertex2f(x+(150)*sx,y+(83)*sy);
        glVertex2f(x+(100)*sx,y+(91.5)*sy);
          glVertex2f(x-(12)*sx,y+91.5*sy);
    glEnd();

//back left piller

  backPiller( x+45*sx, y+10*sy ,sx, sy);

//front right piller
   frontPiller( x+85*sx, y+1*sy ,sx, sy);

//back right piller
   backPiller( x+130*sx, y+11*sy ,sx, sy);

//box base
//front
glColor3ub(255, 178, 102);
    glBegin(GL_QUADS);
        glVertex2f(x-(12)*sx,y+91.5*sy);
        glVertex2f(x+(100)*sx,y+(91.5)*sy);
        glVertex2f(x+(100)*sx,y+(93.5)*sy);
        glVertex2f(x-(12)*sx,y+93.5*sy);

    glEnd();

//side base in box

glBegin(GL_QUADS);
         glVertex2f(x+(100)*sx,y+(91.5)*sy);
         glVertex2f(x+(150)*sx,y+(83)*sy);
        glVertex2f(x+(150)*sx,y+(85)*sy);
        glVertex2f(x+(100)*sx,y+(93.5)*sy);

    glEnd();

//side wall
glColor3ub(98, 74, 71);
glBegin(GL_QUADS);
        glVertex2f(x+(100)*sx,y+(93.5)*sy);
        glVertex2f(x+(150)*sx,y+(85)*sy);
         glVertex2f(x+(150)*sx,y+(100)*sy);
         glVertex2f(x+(100)*sx,y+(108.5)*sy);

    glEnd();
glColor3ub(255, 178, 102);

glBegin(GL_QUADS);
         glVertex2f(x+(100)*sx,y+(108.5)*sy);
         glVertex2f(x+(150)*sx,y+(100)*sy);
         glVertex2f(x+(150)*sx,y+(101.5)*sy);
         glVertex2f(x+(100)*sx,y+(110)*sy);
    glEnd();

 //box back piller

 //right

 backPiller( x+144*sx, y+101*sy ,sx, sy/5);


//box upper shadow

 glColor3ub(0,0,0);
    glBegin(GL_QUADS);

        glVertex2f(x+(40)*sx,y+(109.5*sy));
        glVertex2f(x+(152)*sx,y+(116)*sy);
        glVertex2f(x+(102)*sx,y+(130.5)*sy);
          glVertex2f(x-(20)*sx,y+126*sy);
    glEnd();

//front left wall
     glColor3ub(118,80,67);

    quads(x-(5.5)*sx,y+93.5*sy,x+35*sx,y+107.5*sy);
    //upper base
     glColor3ub(255, 178, 102);
     quads(x-(5.5)*sx,y+107.5*sy,x+41*sx,y+110*sy);
     //shadow
     glColor3ub(0,0,0);
      quads(x-(5.5)*sx,y+106*sy,x+41*sx,y+107*sy);
      //side base
     glColor3ub(255, 178, 102);
      quads(x+35*sx,y+93.5*sy,x+41*sx,y+110*sy);


//front right wall
      glColor3ub(118,80,67);

        quads(x+65*sx,y+93.5*sy,x+95*sx,y+108*sy);
        //upper base
         glColor3ub(255, 178, 102);
         quads(x+65*sx,y+108.5*sy,x+95*sx,y+111*sy);
         //shadow
         glColor3ub(0,0,0);
          quads(x+65*sx,y+107.5*sy,x+95*sx,y+108.5*sy);
          //side base
         glColor3ub(255, 178, 102);
          quads(x+65*sx,y+93.5*sy,x+69*sx,y+110*sy);

//front wall sided all black shadow

glColor3ub(0,0,0);
      quads(x+41*sx,y+93.5*sy,x+65*sx,y+98.5*sy);
      quads(x+41*sx,y+93.5*sy,x+48*sx,y+111*sy);


//box front piller
//right
 frontPiller(x+(95)*sx,y+(93.5)*sy,sx,(sy/3));
 //left
 frontPiller(x-(12)*sx,y+93.5*sy,sx,(sy/3));


 //terrace
 glColor3ub(255, 178, 102);
 glBegin(GL_TRIANGLES);
 glVertex2f(x-(15)*sx,y+126.3*sy);
   glVertex2f(x+(100)*sx,y+(130.5)*sy);
         glVertex2f(x+(55)*sx,y+(133)*sy);

    glEnd();


//stair

    //left
 glColor3ub(255,153,51);
      glBegin(GL_QUADS);

        glVertex2f(x+(35)*sx,y-1*sy);
        glVertex2f(x+(38)*sx,y-1*sy);
        glVertex2f(x+(38)*sx,y+(93)*sy);
          glVertex2f(x+(35)*sx,y+93*sy);
    glEnd();
     //right

     glBegin(GL_QUADS);

        glVertex2f(x+(65)*sx,y-2*sy);
        glVertex2f(x+(68)*sx,y-2*sy);
        glVertex2f(x+(68)*sx,y+(91.5)*sy);
          glVertex2f(x+(65)*sx,y+91.5*sy);
    glEnd();


   quads(x+38*sx,y+2*sy,x+65*sx,y+1*sy);
    quads(x+38*sx,y+7*sy,x+65*sx,y+6*sy);
    quads(x+38*sx,y+12*sy,x+65*sx,y+11*sy);
    quads(x+38*sx,y+17*sy,x+65*sx,y+16*sy);
    quads(x+38*sx,y+22*sy,x+65*sx,y+21*sy);
    quads(x+38*sx,y+27*sy,x+65*sx,y+26*sy);
    quads(x+38*sx,y+32*sy,x+65*sx,y+31*sy);
     quads(x+38*sx,y+37*sy,x+65*sx,y+36*sy);
    quads(x+38*sx,y+42*sy,x+65*sx,y+41*sy);
     quads(x+38*sx,y+47*sy,x+65*sx,y+46*sy);
    quads(x+38*sx,y+52*sy,x+65*sx,y+51*sy);
     quads(x+38*sx,y+57*sy,x+65*sx,y+56*sy);
      quads(x+38*sx,y+62*sy,x+65*sx,y+61*sy);
     quads(x+38*sx,y+67*sy,x+65*sx,y+66*sy);
    quads(x+38*sx,y+72*sy,x+65*sx,y+71*sy);
     quads(x+38*sx,y+77*sy,x+65*sx,y+76*sy);
      quads(x+38*sx,y+82*sy,x+65*sx,y+81*sy);
     quads(x+38*sx,y+87*sy,x+65*sx,y+86*sy);



}

void box(float x, float y){
glColor3ub(255, 248, 107);


//box

 glBegin(GL_QUADS);
    glVertex2f(x,y);
    glVertex2f(x+0.5,y);
    glVertex2f(x+0.5,y+0.5);
    glVertex2f(x,y+0.5);
 glEnd();

 //box border
glColor3ub (0, 0, 0);
glLineWidth(2);
 glBegin(GL_LINE_LOOP);
    glVertex2f(x,y);
    glVertex2f(x+0.5,y);
    glVertex2f(x+0.5,y+0.5);
    glVertex2f(x,y+0.5);
 glEnd();

}


void seaLine(){
glPushMatrix();

    glLineStipple(150, 0xAAAA);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.1,-0.7);
    glVertex2f(1.0,-0.7);
    glEnd();
    glDisable(GL_LINE_STIPPLE);

    glTranslatef(0.3,0,0);

    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.1,-0.8);
    glVertex2f(1.0,-0.8);
    glEnd();
    glDisable(GL_LINE_STIPPLE);

    glTranslatef(-0.3,0,0);

    ;
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.1,-0.9);
    glVertex2f(1.0,-0.9);
    glEnd();
    glDisable(GL_LINE_STIPPLE);

    glPopMatrix();
}

void sea(){
    glBegin(GL_QUADS);
    glVertex2f(-1.0,-0.6);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glVertex2f(1.0,-0.6);
    glEnd();

    seaLine();

}
void nightSea(){
glBegin(GL_QUADS);
    glColor3ub(0,0,204);
    glVertex2f(-1.0,-0.6);
    glColor3ub(0,0,102);
    glVertex2f(-1.0,-1.0);
    glVertex2f(1.0,-1.0);
    glColor3ub(0,0,204);
    glVertex2f(1.0,-0.6);
    glEnd();
    seaLine();

}
void eveningSky(){
glBegin(GL_QUADS);
    glColor3ub(219, 94, 64);
    glVertex2f(-1.0,0.4);
    glColor3ub(88, 115, 255);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glColor3ub(219, 94, 64);
    glVertex2f(1.0,0.4);
    glEnd();

}
void sky(){
//sky
    glBegin(GL_QUADS);
    glVertex2f(-1.0,0.4);
    glVertex2f(-1.0,1.0);
    glVertex2f(1.0,1.0);
    glVertex2f(1.0,0.4);
    glEnd();


}
void ground(){


glBegin(GL_QUADS);
    glColor3ub(155, 153, 105);
    glVertex2f(-1.0,-0.6);
    glVertex2f(1.0,-0.6);

    glColor3ub(177, 172, 108);
    glVertex2f(1.0,0.4);
    glVertex2f(-1.0,0.4);
    glEnd();



}
void nightGround(){
glBegin(GL_QUADS);
    glColor3ub(102,51,0);
    glVertex2f(-1.0,-0.6);
    glVertex2f(1.0,-0.6);
    glColor3ub(160,82,45);
    glVertex2f(1.0,0.4);
    glVertex2f(-1.0,0.4);
    glEnd();

}


void road(){
//box
    glBegin(GL_QUADS);
    glColor3ub(96, 106, 114);
    glVertex2f(-1.0,-0.3);
    glVertex2f(1.0,-0.3);
    glVertex2f(1.0,-0.6);
    glVertex2f(-1.0,-0.6);
    glEnd();


    //side line up

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0,-0.32);
    glVertex2f(1.0,-0.32);
    glVertex2f(1.0,-0.31);
    glVertex2f(-1.0,-0.31);
    glEnd();

    //side line down
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0,-0.59);
    glVertex2f(1.0,-0.59);
    glVertex2f(1.0,-0.58);
    glVertex2f(-1.0,-0.58);
    glEnd();

    // middle line
    glLineStipple(50, 0xAAAA);
    glEnable(GL_LINE_STIPPLE);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.1,-0.45);
    glVertex2f(1.0,-0.45);
    glEnd();
    glDisable(GL_LINE_STIPPLE);

}
void sean(){
    // evening
    if(boolEvening){
        glColor3ub(241, 168, 76);
        eveningSky();
        glColor3ub(59, 205, 235);
        sea();
        // sun
        glColor3ub(252, 232, 1);
        circle(0.5,0.5,0.05);

        ground();
    }

    //night
    if(boolNight){
        glColor3ub(64, 64, 64);
        sky();
        glColor3ub(6, 176, 210);
        nightSea();
        //moon
        glColor3ub(210, 211, 213);
        circle(0.4,0.8,0.05);

        nightGround();
    }


     //Day
    if(boolDay){
        glColor3ub(192, 244, 247);
        sky();
        glColor3ub(65, 223, 255);
        sea();
         //sun
        glColor3ub(252, 232, 1);
        circle(0.4,0.8,0.05);
        ground();
    }


    mountains();
    road();

}


void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;



    if(birdsPosition>3)
        birdsPosition=0.0;

    birdsPosition+=birdspeed;


     if(rainPosion <-1.0)
        rainPosion = 0.2f;
    rainPosion -= rainSpeed;



    if(position2 >1.0)
        position2 = -1.0f;

    if(carPosition>2)
        carPosition=-0.3f;

    carPosition+=carSpeed;



    if(boatPosition>2)
        boatPosition=-0.3f;

    boatPosition+=boatSpeed;

    if(bulletPosition>3.8){
        bulletSpeed=0.0f;
        bulletPosition=0.0f;
    }


    bulletPosition += bulletSpeed;

    if(cloudsPosition>1.5)
        cloudsPosition=-1.0f;
    cloudsPosition += cloudsSpeed;

     if(cloudsPosition2>1.0)
        cloudsPosition2=-1.5f;
    cloudsPosition2 += cloudsSpeed;


     if(cloudsPosition3>1.0)
        cloudsPosition3=-1.5f;
    cloudsPosition3 += cloudsSpeed;

   if(cloudsPosition4>0.5)
        cloudsPosition4=-2.0f;
    cloudsPosition4 += cloudsSpeed;




     if(humanPosition <-2.6)
        humanPosition =2.3f;
    humanPosition -= humanSpeed;



 if(humanPosition2>1.3)
        humanPosition2=-1.0f;
    humanPosition2 += humanSpeed;

	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
   glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
   gluOrtho2D(0.0, 1244.0, 0.0, 700.0);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    speed = 0.0f;
    break;
case 'w':
    speed += 0.1f;
    break;

case 'd':
    boolDay=true;
    boolNight=false;
    boolEvening=false;
    break;

case 'n':
    boolDay=false;
    boolNight=true;
    boolEvening=false;
    break;

case 'e':
    boolDay=false;
    boolNight=false;
    boolEvening=true;
    break;

case 'r':
    if(Rain){
        sndPlaySound(NULL,SND_ASYNC);
        Rain=false;
    }
    else{



        Rain=true;

        sndPlaySound("C:\\Users\\Fahad\\OneDrive\\study\\9th\\computer grafics\\Final Project Group-04\\rain.wav",SND_LOOP | SND_ASYNC);

    }
    break;


case 'z':
    if(carSpeed>-1.0){
            sndPlaySound("C:\\Users\\Fahad\\OneDrive\\study\\9th\\computer grafics\\Final Project Group-04\\car.wav",SND_LOOP | SND_ASYNC);
       carSpeed-=0.01;
    }

    break;

case 'x':
    carSpeed=0;
    sndPlaySound(NULL,SND_ASYNC);
    break;

case 'c':
    if(carSpeed<1.0){
            sndPlaySound("C:\\Users\\Fahad\\OneDrive\\study\\9th\\computer grafics\\Final Project Group-04\\car.wav",SND_LOOP | SND_ASYNC);
        carSpeed+=0.01;
    }

    break;



case ',':
    if(boatSpeed>-1.0){
            sndPlaySound("C:\\Users\\Fahad\\OneDrive\\study\\9th\\computer grafics\\Final Project Group-04\\boat.wav",SND_LOOP | SND_ASYNC);
       boatSpeed-=0.01;
    }

    break;

case '.':
    boatSpeed=0;
    sndPlaySound(NULL,SND_ASYNC);
    break;

case '/':
    if(boatSpeed<1.0){
            sndPlaySound("C:\\Users\\Fahad\\OneDrive\\study\\9th\\computer grafics\\Final Project Group-04\\boat.wav",SND_LOOP | SND_ASYNC);
        boatSpeed+=0.01;
    }

    break;


case 'f':
    bulletSpeed=0.2f;
    sndPlaySound("C:\\Users\\Fahad\\OneDrive\\study\\9th\\computer grafics\\Final Project Group-04\\fire.wav", SND_ASYNC);

    break;
glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
  glLoadIdentity();



sean();

clouds();

jeep();

boat1();


trees();

watchTower(0.7,0.25,0.0010,0.005);

allGrass();

satellite();

birds();


tents();


humans();

bdFlag();

tank();


if(Rain){
  rain();
}

   glFlush();
}



int main(int argc, char** argv) {

    cout<<"Press 'd' for Day mode"<<endl;
    cout<<"Press 'e' for Evening mode"<<endl;
    cout<<"Press 'n' for Night mode"<<endl;
    cout<<endl;
    cout<<"Press 'r' for Rain mode OFF or ON"<<endl;
    cout<<"Press 'f' for Fire"<<endl;
    cout<<endl;
    cout<<"Press 'c' to move jeep Forward"<<endl;
    cout<<"Press 'z' to move jeep Backward"<<endl;
    cout<<"Press 'x' to stop the jeep"<<endl;
    cout<<endl;
    cout<<"Press ',' to move Boat Forward"<<endl;
    cout<<"Press '/' to move Boat Backward"<<endl;
    cout<<"Press '.' to stop the Boat"<<endl;


   glutInit(&argc, argv);
   glutInitWindowSize(1244,700);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Army Camp View");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
