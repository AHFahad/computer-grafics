#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>

int x=20;
int y=900;

void box(int x1,int y1,int x2,int y2){

    glBegin(GL_QUADS);
    glVertex2i(x1, y2);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);

glEnd();


}

void holobox(int x1,int y1,int x2,int y2){
    glColor3ub (0, 0, 0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(x1, y2);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);

glEnd();


}

void circleC(int centerx,int centery, int r){

 glColor3ub (91, 71, 50);
    glBegin(GL_POINTS);


  int pk =1-r;

    int x=0;
    int y=r;


int yk=y;
int xk=x;
    while(x < y){



        if(pk>=0){
            yk=y;
            y--;
            xk=x;
            x++;

            }
        else if(pk<0){
            yk=y;
            xk=x;
            x++;

            }
     pk=pk+2*(xk+1)+(y*y-yk*yk)-(y-yk)+1;

    glVertex2i(x+centerx, y+centery);
    glVertex2i(y+centerx, x+centery);
    glVertex2i(-x+centerx, y+centery);
    glVertex2i(-y+centerx, x+centery);
    glVertex2i(-y+centerx, -x+centery);
    glVertex2i(-x+centerx, -y+centery);
    glVertex2i(x+centerx, -y+centery);
    glVertex2i(y+centerx, -x+centery);




        }



glEnd();
}



void circleD(int centerx,int centery, int r){

 glColor3ub (0, 0, 0);
    glBegin(GL_POLYGON);


  int pk =1-r;

    int x=0;
    int y=r;


int yk=y;
int xk=x;
    while(x < y){



        if(pk>=0){
            yk=y;
            y--;
            xk=x;
            x++;

            }
        else if(pk<0){
            yk=y;
            xk=x;
            x++;

            }
     pk=pk+2*(xk+1)+(y*y-yk*yk)-(y-yk)+1;
    glVertex2i(y+centerx, x+centery);
    glVertex2i(x+centerx, y+centery);

    glVertex2i(-x+centerx, y+centery);
    glVertex2i(-y+centerx, x+centery);
    glVertex2i(-y+centerx, -x+centery);
    glVertex2i(-x+centerx, -y+centery);
    glVertex2i(x+centerx, -y+centery);
    glVertex2i(y+centerx, -x+centery);




        }



glEnd();
}





void cloud(){
    glPointSize(3);
    circleC(4*x,31*x,5*x);
    circleC(4*x,37*x,5*x);

    circleC(-4*x,26*x,7*x);

    circleD(x*1.1,32.9*x,7*x);

}



void bird(float bx,float by){

    int p=3;
    glLineWidth(3);
    glPointSize(1);
     glColor3ub (0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2i(bx, by);
    glVertex2i(bx+2*p, by);

    glVertex2i(bx+4*p, by+1*p);
    glVertex2i(bx+9*p, by+5.6*p);
     glVertex2i(bx+10.5*p, by+5.6*p);
    glVertex2i(bx+6*p, by+6*p);
    glVertex2i(bx+6*p, by+7*p);
     glVertex2i(bx+4*p, by+7*p);
      glVertex2i(bx+3*p, by+6*p);



      glVertex2i(bx, by+4*p);
      glVertex2i(bx-2*p, by+3*p);
    glVertex2i(bx-12*p, by+3.5*p);
     glVertex2i(bx-12*p, by+3*p);
      glVertex2i(bx, by+2*p);
glEnd();

glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2i(bx+1*p, by+1*p);
    glVertex2i(bx+4*p, by-3*p);
glEnd();

    glPointSize(1);
    glBegin(GL_LINES);
    glVertex2i(bx-0.5*p, by+1*p);
    glVertex2i(bx, by-3*p);
glEnd();



}




void windowMake(int bx, int by){
    glLineWidth(1);
    glColor3ub(206, 190, 182);
    box(bx,by,bx+4*x,by+6*x);

    glLineWidth(3);
    glColor3ub (0, 0, 0);
    holobox(bx,by,bx+4*x,by+6*x);

    glLineWidth(1);
    box(bx+10,by+10,bx+3.5*x,by+5.5*x);

    glColor3ub(255, 248, 108);
    box(bx+10,by+3.7*x,bx+3.5*x,by+5.5*x);


    glColor3ub (0, 0, 0);
    glLineWidth(3);
    holobox(bx+10,by+10,bx+3.5*x,by+5.5*x);

}


void frontWall(int bx,int by){

    glColor3ub (145, 116, 71);
    box(bx-4*x,by,bx,by+3*x);

    glColor3ub (0, 0, 0);
    glLineWidth(3);
    holobox(bx-4*x,by,bx,by+3*x);
}


void piller(int bx,int by){


    glLineWidth(1);
    glColor3ub(206, 190, 182);
    box(bx,by,bx+0.7*x,by+8*x);
    glColor3ub (0, 0, 0);
    glLineWidth(3);
    holobox(bx,by,bx+0.7*x,by+8*x);
}

void randomStarPoint(float p,int number)
{
    glPointSize(p);

    glLineWidth(1);
    glColor3ub(171, 112, 81);
    //glColor3ub(225, 225, 255);
    glBegin(GL_POINTS);


    int i;
    int k=0;
    for (i = 0; i < number; i++) {
        int num = (rand()%(1000 - 1 + 1)) + 1;
         glVertex2i(k, num);
         k=num;
    }
    glEnd();

}


















void stars(){

randomStarPoint(1,1000);
randomStarPoint(2,500);

}


void background(){

//create cloud
    cloud();
//create the stars
    stars();
    //backgound base
    glColor3ub(225, 225, 197);

    box(0,0,y,9.5*x);



    //background srike

    glLineWidth(3);
     glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(2.5*x, 2.5*x);
    glVertex2i(2.5*x, 9.5*x);

    glVertex2i(4.5*x, 2.5*x);
    glVertex2i(4.5*x, 9.5*x);




glEnd();



}










void myDisplay(void)
{
//glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(1.0);
glLineWidth(1);





background();




// stairs
glColor3ub(193, 187, 182);
box(0,2*x,10*x,4*x-5);
glLineWidth(3);
holobox(0,2*x,10*x,4*x-5);


glLineWidth(1);
glColor3ub(193, 187, 182);
box(0+2*x,2*x+2*x-5,10*x+2*x,4*x-5+2*x-5);
glLineWidth(3);
holobox(0+2*x,2*x+2*x-5,10*x+2*x,4*x-5+2*x-5);

glLineWidth(1);
glColor3ub (145, 116, 71);
box(0+4*x,2*x+4*x-10,10*x+4*x,4*x-5+4*x-10);
glLineWidth(3);
holobox(0+4*x,2*x+4*x-10,10*x+4*x,4*x-5+4*x-10);


glLineWidth(1);
glColor3ub (145, 116, 71);
box(0+6*x,2*x+6*x-15,10*x+6*x,4*x-5+6*x-15);
glLineWidth(3);
holobox(0+6*x,2*x+6*x-15,10*x+6*x,4*x-5+6*x-15);





//front wall
glLineWidth(1);
glBegin(GL_POLYGON);
glColor3ub (145, 116, 71);
 glVertex2i(11.5*x, 4*x-5+6*x-15);
    glVertex2i(10*x+11*x,4*x-5+6*x-15);
    glVertex2i(21*x, 19.5*x);
    glVertex2i(21*x, 19.5*x);
    glVertex2i(15.3*x, 26.5*x);
    glVertex2i(11.5*x, 19.5*x);
glEnd();

glLineWidth(3);
glBegin(GL_LINE_LOOP);
glColor3ub (0, 0, 0);
 glVertex2i(11.5*x, 4*x-5+6*x-15);
    glVertex2i(10*x+11*x,4*x-5+6*x-15);
    glVertex2i(21*x, 19.5*x);
    glVertex2i(21*x, 19.5*x);
    glVertex2i(15.3*x, 26.5*x);
    glVertex2i(11.5*x, 19.5*x);
glEnd();




// front wall strike



glLineWidth(3);
glBegin(GL_LINES);
glColor3ub (0, 0, 0);

    glVertex2i(11.5*x,10*x);
    glVertex2i(21*x,10*x);

    glVertex2i(11.5*x,13*x);
    glVertex2i(21*x,13*x);


    glVertex2i(11.5*x,16*x);
    glVertex2i(21*x,16*x);

    glVertex2i(11.5*x,20*x);
    glVertex2i(21*x,20*x);

    glVertex2i(11.5*x,22*x);
    glVertex2i(21*x,22*x);

    glVertex2i(11.5*x,24*x);
    glVertex2i(21*x,24*x);

glEnd();





glColor3ub(193, 187, 182);
//box(0,2*x,10*x,4*x-5);
glLineWidth(1);
glBegin(GL_POLYGON);
    glVertex2i(10*x+2*x, 2*x+2*x-5);
    glVertex2i(10*x,4*x-5);
    glVertex2i(10*x,2*x);
    glVertex2i(y-1.3*x, 2*x);
    glVertex2i(y-1.3*x, 4*x-5+2*x-5);
    glVertex2i(10*x+2*x,4*x-5+2*x-5);
glEnd();




glColor3ub (0, 0, 0);
glLineWidth(3);
glBegin(GL_LINE_LOOP);
    glVertex2i(10*x+2*x, 2*x+2*x-5);
    glVertex2i(10*x,4*x-5);
    glVertex2i(10*x,2*x);
    glVertex2i(y-1.3*x, 2*x);
    glVertex2i(y-1.3*x, 4*x-5+2*x-5);
    glVertex2i(10*x+2*x,4*x-5+2*x-5);
glEnd();




//stair back
glLineWidth(1);
glColor3ub (145, 116, 71);
glBegin(GL_POLYGON);
    glVertex2i(10*x+6*x,2*x+6*x-15);


    glVertex2i(10*x+4*x,4*x-5+4*x-10);
    glVertex2i(10*x+4*x,2*x+4*x-10);

    glVertex2i(10*x+11*x,2*x+4*x-10);
    glVertex2i(10*x+11*x,4*x-5+6*x-15);
   glVertex2i(10*x+6*x,4*x-5+6*x-15);
glEnd();

glLineWidth(3);
glColor3ub (0, 0, 0);
glBegin(GL_LINE_LOOP);
    glVertex2i(10*x+6*x,2*x+6*x-15);


    glVertex2i(10*x+4*x,4*x-5+4*x-10);
    glVertex2i(10*x+4*x,2*x+4*x-10);

    glVertex2i(10*x+11*x,2*x+4*x-10);
    glVertex2i(10*x+11*x,4*x-5+6*x-15);
   glVertex2i(10*x+6*x,4*x-5+6*x-15);
glEnd();



//house bottom
glLineWidth(1);
glColor3ub (145, 116, 71);
    box(10*x+11*x+1,2*x+4*x-10,y-1.3*x, 4*x-5+4.5*x-5);

glLineWidth(3);
holobox(10*x+11*x+1,2*x+4*x-10,y-1.3*x, 4*x-5+4.5*x-5);
box(10*x+11*x+1,7.5*x,y-1.3*x, 8*x);

//bottom line strike
 glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(y-6.3*x, 2*x+4*x-10);
    glVertex2i(y-6.3*x, 4*x-5+4.5*x-5);

    glVertex2i(y-13.3*x, 2*x+4*x-10);
    glVertex2i(y-13.3*x, 4*x-5+4.5*x-5);

    glVertex2i(y-20.3*x, 2*x+4*x-10);
    glVertex2i(y-20.3*x, 4*x-5+4.5*x-5);


glEnd();


//side wall
glLineWidth(1);
glColor3ub (145, 116, 71);
    box(10*x+11*x+1,4*x-5+4.5*x-5,y-1.1*x, 19*x);

    //roof shadow
    glColor3ub (0, 0, 0);
    box(10*x+11*x+1,18*x,y-1.1*x, 19*x);



// side wall strike
  glLineWidth(3);
 glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(21*x+1, 9.5*x);
    glVertex2i(y-1.1*x, 9.5*x);

    glVertex2i(21*x+1, 12.5*x);
    glVertex2i(y-1.1*x, 12.5*x);

    glVertex2i(21*x+1, 15*x);
    glVertex2i(y-1.1*x, 15*x);
glEnd();



//left window
windowMake(24*x,10*x);


//right window
windowMake(36*x,10*x);


// roof thikness
glColor3ub(102, 62, 31);
    box(20.7*x,19*x,y-0.5*x, 19.5*x);



//roof
glColor3ub(102, 62, 31);
glBegin(GL_QUADS);
    glVertex2i(21*x, 19.5*x);
    glVertex2i(y-0.5*x, 19.5*x);
    glVertex2i(y-6.5*x, 27.5*x);
    glVertex2i(15.3*x, 27.5*x);
glEnd();


glLineWidth(3);
glColor3ub(0, 0, 0);
glBegin(GL_LINE_LOOP);
    glVertex2i(21*x, 19.5*x);
    glVertex2i(y-0.5*x, 19.5*x);
    glVertex2i(y-6.5*x, 27.5*x);
    glVertex2i(15.3*x, 27.5*x);
glEnd();


//roof 2
glColor3ub(102, 62, 31);
glLineWidth(1);
glBegin(GL_QUADS);
    glVertex2i(19.7*x, 21.5*x);
    glVertex2i(y-1.5*x, 21.5*x);
    glVertex2i(y-6.5*x, 27.5*x);
    glVertex2i(15.3*x, 27.5*x);
glEnd();


glLineWidth(3);
glColor3ub(0, 0, 0);
glBegin(GL_LINE_LOOP);
    glVertex2i(19.7*x, 21.5*x);
    glVertex2i(y-1.5*x, 21.5*x);
    glVertex2i(y-6.5*x, 27.5*x);
    glVertex2i(15.3*x, 27.5*x);
glEnd();

// roof 3
glColor3ub(102, 62, 31);
glLineWidth(1);
glBegin(GL_QUADS);
    glVertex2i(18.3*x, 23.5*x);
    glVertex2i(y-2.7*x, 23.5*x);
    glVertex2i(y-6.5*x, 27.5*x);
    glVertex2i(15.3*x, 27.5*x);
glEnd();


glLineWidth(3);
glColor3ub(0, 0, 0);
glBegin(GL_LINE_LOOP);
    glVertex2i(18.3*x, 23.5*x);
    glVertex2i(y-2.7*x, 23.5*x);
    glVertex2i(y-6.5*x, 27.5*x);
    glVertex2i(15.3*x, 27.5*x);
glEnd();




// roof 4
glColor3ub(102, 62, 31);
glLineWidth(1);
glBegin(GL_QUADS);
    glVertex2i(16.9*x, 25.5*x);
    glVertex2i(y-4.1*x, 25.5*x);
    glVertex2i(y-6.5*x, 27.5*x);
    glVertex2i(15.3*x, 27.5*x);
glEnd();


glLineWidth(3);
glColor3ub(0, 0, 0);
glBegin(GL_LINE_LOOP);
    glVertex2i(16.9*x, 25.5*x);
    glVertex2i(y-4.1*x, 25.5*x);
    glVertex2i(y-6.5*x, 27.5*x);
    glVertex2i(15.3*x, 27.5*x);
glEnd();



//v roof
glColor3ub(102, 62, 31);
glLineWidth(1);
glBegin(GL_POLYGON);
    glVertex2i(15.3*x, 26.5*x);
    glVertex2i(20.7*x, 19*x);
   glVertex2i(21*x, 19.5*x);
    glVertex2i(15.3*x, 27.5*x);
    glVertex2i(9.5*x, 19.5*x);
    glVertex2i(10.3*x, 19.5*x);
glEnd();



glColor3ub(0, 0, 0);
glLineWidth(3);
glBegin(GL_LINE_LOOP);
    glVertex2i(15.3*x, 26.5*x);
    glVertex2i(20.7*x, 19*x);
   glVertex2i(21*x, 19.5*x);
    glVertex2i(15.3*x, 27.5*x);
    glVertex2i(9.5*x, 19.5*x);
    glVertex2i(10.3*x, 19.5*x);
glEnd();


//shaw of roof
glLineWidth(1);
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
    glVertex2i(10.3*x, 19.5*x);
    glVertex2i(11.5*x, 19.5*x);
    glVertex2i(16*x, 25.6*x);
    glVertex2i(15.3*x, 26.5*x);
glEnd();



//door
box(13.3*x,9*x,18*x,16.5*x);

glColor3ub(110, 86, 66);
box(14*x,9*x,17.8*x,16.3*x);



//front walls
frontWall(11.5*x, 9*x);

frontWall(21*x,9*x);

piller(9*x,9*x);
piller(17.5*x,9*x);


//frond shade front
glColor3ub(114, 69, 34);
glLineWidth(1);
box(8.5*x,17*x,18.5*x,17.5*x);
glColor3ub(0, 0, 0);
glLineWidth(3);
holobox(8.5*x,17*x,18.5*x,17.5*x);



//frond shade front side
glColor3ub(114, 69, 34);
glLineWidth(1);
box(18.4*x,17*x,20.5*x,17.5*x);
glColor3ub(0, 0, 0);
glLineWidth(3);
holobox(18.4*x,17*x,20.5*x,17.5*x);



// frond shade triangle
glLineWidth(1);
glBegin(GL_TRIANGLES);
glColor3ub(114, 69, 34);
    glVertex2i(18.4*x,17.5*x);
    glVertex2i(20.5*x, 17.5*x);
    glVertex2i(20.5*x, 19*x);
glEnd();

glLineWidth(3);
glBegin(GL_LINE_LOOP);
glColor3ub(0, 0, 0);

    glVertex2i(18.4*x,17.5*x);
    glVertex2i(20.5*x, 17.5*x);
    glVertex2i(20.5*x, 19*x);
glEnd();




glLineWidth(1);
glBegin(GL_QUADS);
glColor3ub(114, 69, 34);
    glVertex2i(8.5*x,17.5*x);
    glVertex2i(18.4*x, 17.5*x);
    glVertex2i(20.5*x, 19*x);
    glVertex2i(11.5*x, 19*x);
glEnd();

glColor3ub(0, 0, 0);
glLineWidth(3);
glBegin(GL_LINE_LOOP);
glColor3ub(0, 0, 0);
    glVertex2i(8.5*x,17.5*x);
    glVertex2i(18.4*x, 17.5*x);
    glVertex2i(20.5*x, 19*x);
    glVertex2i(11.5*x, 19*x);
glEnd();



// bird
bird(y-5*x,22*x);



glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 900.0, 0.0, 800.0);
}



int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (900, 800);
glutInitWindowPosition (0, 0);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}
