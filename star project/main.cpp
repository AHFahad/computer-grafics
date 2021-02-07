#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


int x=20;
void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(5.0);

glBegin(GL_POLYGON);
// right hand
glVertex2i(x*39, x*26);
// left hand
glVertex2i(x, x*26);
//left side
glVertex2i(x*12.5, x*17.3);
//left lag
glVertex2i( x*8.2,x*3.6);
glEnd();

glBegin(GL_POLYGON);
// right lag
glVertex2i( x*31.8,x*3.6);
//head
glVertex2i( x*20,x*40);
// left upper
glVertex2i(x*15.5, x*26);
// left hand
glVertex2i(x, x*26);
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}



int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 800);
glutInitWindowPosition (0, 0);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}
