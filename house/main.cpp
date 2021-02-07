#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


int x=20;
int y=950;
int h=25;

void box(float x1,float y1,float x2,float y2){

    glBegin(GL_QUADS);
    glVertex2i(x1, y2);
    glVertex2i(x1, y1);
    glVertex2i(x2, y1);
    glVertex2i(x2, y2);

glEnd();






}


void holobox(float x1,float y1,float x2,float y2){

    glBegin(GL_LINE_LOOP);
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
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 0, 0);
glPointSize(10.0);


//from wall
glColor3ub (181, 169, 153);
box(3.5*x,10,950-(3.5*x+2),11*x);


//floor
glColor3ub (0, 0, 0);
box(10,10,x*47,15);

//side walls
box(3.5*x,15,3.5*x+2,11*x);
mirrorbox(3.5*x,15,3.5*x+2,11*x);

//middile wall
box(23*x,15,23*x+2,11*x);

//roof dawn
box(20,11*x,x*47-10,11*x+4);
box(13,11*x+4,x*47-3,11*x+8);





//window
glColor3ub (255, 255, 255);
box(6*x,3*x,12*x,9*x);





glColor3ub (0, 0, 0);
holobox(6*x,3*x,12*x,9*x);
    glBegin(GL_LINES);
    glVertex2i(6*x, 5*x);
    glVertex2i(12*x, 5*x);
    glEnd();
glBegin(GL_LINES);
    glVertex2i(9*x, 3*x);
    glVertex2i(9*x, 9*x);

glEnd();



//garaj door
glColor3ub (200, 200, 200);
box(25*x,25,y-8*x,10*x);
glColor3ub (0, 0, 0);
holobox(25*x,25,y-8*x,10*x);

// garax dorr line strip
glBegin(GL_LINES);
    glVertex2i(25*x, 25+h);
    glVertex2i(y-8*x, 25+h);

    glVertex2i(25*x, 25+h*2);
    glVertex2i(y-8*x, 25+h*2);

    glVertex2i(25*x, 25+h*3);
    glVertex2i(y-8*x, 25+h*3);

    glVertex2i(25*x, 25+h*4);
    glVertex2i(y-8*x, 25+h*4);

    glVertex2i(25*x, 25+h*5);
    glVertex2i(y-8*x, 25+h*5);

    glVertex2i(25*x, 25+h*6);
    glVertex2i(y-8*x, 25+h*6);

glEnd();



//roof...
glColor3ub (255, 255, 255);
glBegin(GL_TRIANGLES);
    glVertex2i(20, 11*x+8);
    glVertex2i(x*47-10, 11*x+8);
    glVertex2i(475, 19*x);
glEnd();

glColor3ub (0, 0, 0);
glBegin(GL_LINE_LOOP);
    glVertex2i(20, 11*x+8);
    glVertex2i(x*47-10, 11*x+8);
    glVertex2i(475, 19*x);
glEnd();




//ROOF TOP
glColor3ub (178, 171, 156);
glBegin(GL_TRIANGLES);
    glVertex2i(17*x, 15.5*x+8);
    glVertex2i(y-17*x, 15.5*x+8);
    glVertex2i(475, 18*x);
glEnd();


glColor3ub(61, 62, 70);
glBegin(GL_POLYGON);

    glVertex2i(475, 19*x);
    glVertex2i(13*x, 15*x+8);
    glVertex2i(15.5*x, 15*x+8);

    glVertex2i(475, 18*x);

    glVertex2i(y-15.5*x, 15*x+8);
    glVertex2i(y-13*x, 15*x+8);




glEnd();

glColor3ub(61, 62, 70);
glBegin(GL_POLYGON);

    glVertex2i(475-(12*x), 19*x-(4*x));
    glVertex2i(13*x-(12*x), 15*x+8-(4*x));
    glVertex2i(15.5*x-(12*x), 15*x+8-(4*x));

    glVertex2i(475-(12*x), 18*x-(4*x));

    glVertex2i(y-15.5*x-(12*x), 15*x+8-(4*x));
    glVertex2i(y-13*x-(12*x), 15*x+8-(4*x));




glEnd();


glColor3ub (178, 171, 156);
glBegin(GL_TRIANGLES);
    glVertex2i(17*x-(12*x), 15.5*x+8-(4*x));
    glVertex2i(y-17*x-(12*x), 15.5*x+8-(4*x));
    glVertex2i(475-(12*x), 18*x-(4*x));
glEnd();




glColor3ub(49, 54, 63);

box(17*x,40,22*x,10*x);




glFlush ();
}

void myInit (void)
{
glClearColor(255.0, 255.0, 255.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0, -950, 0, 600);
}



int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (950, 600);
glutInitWindowPosition (0, 0);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}
