#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>


int centerx=80;
int centery=80;
int x1=0;
int x2=100;
int y1=0;
int y2=0;

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(1.0);


glBegin(GL_POINTS);

 int dx = x2 - x1;
    int dy = y2 - y1;
    int pk = 2 * dy - dx;

    int x = x1;
    int y = y1;


int yk=0;
    while(x < x2){


        if(pk>=0){
            yk=y;
            y++;
            x++;

            }
        else if(pk<0){
            yk=y;
            x++;

            }


            pk=pk+2*dy-2*dx*(y-yk);
         glVertex2i(x, y);
        }



glEnd();





glFlush ();
}

void myInit (void)
{
glClearColor(0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 800.0, 0.0, 1000.0);
}



int main(int argc, char** argv)
{

glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 1000);
glutInitWindowPosition (0, 0);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}
