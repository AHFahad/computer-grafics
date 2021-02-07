#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>

void box(int i,int j){
    glVertex2i(i,j);
    glVertex2i(i+100,j);
    glVertex2i(i+100,j+100);
    glVertex2i(i,j+100);

}

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 0, 0);
glPointSize(0.5);
glBegin(GL_QUADS);
//dawn border
glVertex2i(0,  0);
glVertex2i(810, 0);
glVertex2i(810, 10);
glVertex2i( 0,10);
//left border
glVertex2i(0,  0);
glVertex2i(10, 0);
glVertex2i(10, 810);
glVertex2i( 0,810);
// right border
glVertex2i(810,  0);
glVertex2i(820, 0);
glVertex2i(820, 820);
glVertex2i( 810,820);
// top border
glVertex2i(0,  810);
glVertex2i(820, 810);
glVertex2i(820, 820);
glVertex2i( 0,820);

int i=10;
int c=0;
    while (i<810){
            int j=10;
        while (j<810){
                if(c%2==0){
                glColor3ub (0, 0, 0);
                box(i,j);
                }
                else{
                glColor3ub (255, 255, 255);
                box(i,j);
                }
            j=j+100;
            c++;
        }
        c++;
        i=i+100;
    }
glEnd();
glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 820.0, 0.0, 820.0);
}

int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (820, 820);
glutInitWindowPosition (100, 150);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}
