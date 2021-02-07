#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include<iostream>

using namespace std;



int centerx=0;
int centery=0;
int r=0;


void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3ub (255, 0, 0);
glPointSize(1.0);


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

    cout<<"Enter the coordinates of the center:"<<endl;
    cout<<"Enter x-coordinate: ";
    cin>>centerx;
    cout<<"Enter y-coordinate: ";
    cin>>centery;

    cout<<"Enter radius: ";
    cin>>r;





glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 1000);
glutInitWindowPosition (0, 0);
glutCreateWindow ("");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();

}
