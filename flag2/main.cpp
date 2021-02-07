#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


int x=20;
int y=1000;
int h=600;

void box(float x1,float y1,float x2,float y2){

    glBegin(GL_QUADS);
    glVertex2i(x1, y2);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);

glEnd();






}




void mirrorbox(float x1,float y1,float x2,float y2){

    glBegin(GL_QUADS);
    glVertex2i(y-x1, y2);
    glVertex2i(y-x1, y1);
    glVertex2i(y-x2, y1);
    glVertex2i(y-x2, y2);

glEnd();
}


void starx(int bx,int by,int k){
glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
glVertex2i(bx+k*39,by+ k*26);
glVertex2i(bx+k,by+k*26);
glVertex2i(bx+k*12.5,by+k*17.3);
glVertex2i( bx+k*8.2,by+k*3.6);
glEnd();
glBegin(GL_POLYGON);
glVertex2i( bx+k*31.8,by+k*3.6);
glVertex2i(bx+k*20,by+k*40);
glVertex2i(bx+k*15.5, by+k*26);
glVertex2i(bx+k, by+k*26);
glEnd();
glFlush ();



}

void star(int bx,int by,int k){

   glColor3ub(255, 0, 0);
glBegin(GL_POLYGON);
//left bottom
glVertex2i(bx,by);

//bottom
glVertex2i(bx+k*1.5,by-k*0.5);


//right bottom
glVertex2i(bx+k*3,by);

//right
glVertex2i( bx+k*3.2,by+k*1.3);


//right up
glVertex2i( bx+k*2.2,by+k*2.4);


//left up
glVertex2i( bx+k*0.8,by+k*2.4);


//left
glVertex2i( bx-k*0.1,by+k*1.3);


glEnd();

glBegin(GL_POLYGON);
//left bottom
glVertex2i(bx,by);
glVertex2i(bx-0.1*k,by-2*k);
//bottom
glVertex2i(bx+k*1.5,by-k*0.5);
glEnd();



glBegin(GL_POLYGON);
//bottom
glVertex2i(bx+k*1.5,by-k*0.5);

glVertex2i(bx+k*3.1,by-2*k);
//right bottom
glVertex2i(bx+k*3,by);
glEnd();






glBegin(GL_POLYGON);
//right bottom
glVertex2i(bx+k*3,by);


glVertex2i( bx+k*5.2,by+k*0.1);
//right
glVertex2i( bx+k*3.2,by+k*1.3);
glEnd();









glBegin(GL_POLYGON);
//right
glVertex2i( bx+k*3.2,by+k*1.3);


glVertex2i( bx+k*4.5,by+k*2.5);

//right up
glVertex2i( bx+k*2.2,by+k*2.4);
glEnd();



glBegin(GL_POLYGON);
//right up
glVertex2i( bx+k*2.2,by+k*2.4);

glVertex2i( bx+k*1.5,by+k*4.4);

//left up
glVertex2i( bx+k*0.8,by+k*2.4);

glEnd();




glBegin(GL_POLYGON);
//left up
glVertex2i( bx+k*0.8,by+k*2.4);

glVertex2i( bx-k*1.9,by+k*2.3);

//left
glVertex2i( bx-k*0.1,by+k*1.3);

glEnd();



glBegin(GL_POLYGON);
//left up
glVertex2i( bx+k*0.8,by+k*2.4);

glVertex2i( bx-k*1.9,by+k*2.3);

//left
glVertex2i( bx-k*0.1,by+k*1.3);

glEnd();




glBegin(GL_POLYGON);
//left
glVertex2i( bx-k*0.1,by+k*1.3);

glVertex2i(bx-k,by-k*0.5);

//bottom
glVertex2i(bx+k*1.5,by-k*0.5);

glEnd();

glFlush ();


}




void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 0, 0);
glPointSize(10.0);


//from wall
glColor3ub(1, 34, 105);
box(0,1.5*x,1000,h-1.5*x);




//white cross
glColor3ub(255, 255, 255);
glBegin(GL_POLYGON);
    glVertex2i(0, 15.5*x);
    glVertex2i(0, 14*x);
    glVertex2i(3*x, 14*x);
    glVertex2i(25*x, h-3*x);
  glVertex2i(25*x, h-1.5*x);
 glVertex2i(22*x, h-1.5*x);
glEnd();



glBegin(GL_POLYGON);

  glVertex2i(3*x, h-1.5*x);
 glVertex2i(0*x, h-1.5*x);
glVertex2i(0*x, h-3*x);
    glVertex2i(22*x, 14*x);
    glVertex2i(25*x, 14*x);
    glVertex2i(25*x, 15.5*x);



glEnd();


//red cross
glColor3ub(255, 0, 0);
glBegin(GL_POLYGON);

    glVertex2i(0, 14*x);
    glVertex2i(2*x, 14*x);


  glVertex2i(25*x, h-1.5*x);
 glVertex2i(23*x, h-1.5*x);
glEnd();



glBegin(GL_POLYGON);

 glVertex2i(0*x, h-1.5*x);
glVertex2i(0*x, h-2.6*x);

    glVertex2i(25*x, 14*x);
    glVertex2i(25*x, 15.1*x);

glEnd();




//white plus
glColor3ub(255, 255, 255);
box(0,19*x,25*x,23.5*x);
box(10.5*x,14*x,14.5*x,h-1.5*x);

//red plus
glColor3ub(255, 0, 0);
box(0,20.1*x,25*x,22.7*x);
box(11.3*x,14*x,13.7*x,h-1.5*x);



//star





starx(40*x,13*x,1.5);

starx(10*x,5*x,3);


starx(30*x,15*x,2);


starx(42*x,18*x,2);




starx(36*x,23*x,2);



starx(36*x,3*x,2);

star(10*x,8*x,30);

glFlush ();
}

void myInit (void)
{
glClearColor(255.0, 255.0, 255.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1000.0, 0.0, 600.0);
}



int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 600);
glutInitWindowPosition (0, 0);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}
