#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


int centerx=450;
int centery=300;


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (0, 106, 78);
glPointSize(1.0);

glBegin(GL_QUADS);
glVertex2i(0, 0);
glVertex2i(1000, 0);
glVertex2i(1000, 600);
glVertex2i(0, 600);


glEnd();

glColor3ub (244,42,65);
glBegin(GL_POLYGON);

    int r=200;
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





glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
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
