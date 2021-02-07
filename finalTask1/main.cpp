#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <cmath>

using namespace std;

int edge=4;
int tx;
int ty;
float sy;
float sx;
int ch;
float theta;
int x[4];
int y[4];

void Default(){

glBegin(GL_POLYGON);
     glColor3ub (0, 255, 0);
          glVertex2i(x[0],y[0]);
          glVertex2i(x[1],y[1]);
          glVertex2i(x[2],y[2]);
          glVertex2i(x[3],y[3]);
     glEnd();

}

void Translation(){

glBegin(GL_POLYGON);
     glColor3ub (255, 0, 0);
        glVertex2i(x[0]+tx,y[0]+ty);
        glVertex2i(x[1]+tx,y[1]+ty);
        glVertex2i(x[2]+tx,y[2]+ty);
        glVertex2i(x[3]+tx,y[3]+ty);

     glEnd();



}
void  Scaling(){

glBegin(GL_POLYGON);
     glColor3ub (255, 0, 0);
          glVertex2i(x[0]*sx,y[0]*sy);
          glVertex2i(x[1]*sx,y[1]*sy);
          glVertex2i(x[2]*sx,y[2]*sy);
          glVertex2i(x[3]*sx,y[3]*sy);
     glEnd();

}

void  Rotation(){
    glBegin(GL_POLYGON);
     glColor3ub (255, 0, 0);
    float rad=theta/180*3.1416;
          glVertex2i(x[0]*cos(rad)-y[0]*sin(rad),x[0]*sin(rad)+y[0]*cos(rad));
          glVertex2i(x[1]*cos(rad)-y[1]*sin(rad),x[1]*sin(rad)+y[1]*cos(rad));
          glVertex2i(x[2]*cos(rad)-y[2]*sin(rad),x[2]*sin(rad)+y[2]*cos(rad));
          glVertex2i(x[3]*cos(rad)-y[3]*sin(rad),x[3]*sin(rad)+y[3]*cos(rad));
     glEnd();

}


void myDisplay(void){
    glClear (GL_COLOR_BUFFER_BIT);
    glPointSize(1.0);
    Default();

    switch(ch)
    {
    case 1:
        Translation();
        break;
    case 2:
        Scaling();
        break;
    case 3:
        Rotation();
        break;
    case 4:
        break;

    }

    glFlush ();
}
void myInit (void){
    glClearColor(255, 255, 255, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}




int main(int argc, char** argv){

for(int i=0;i<edge;i++)
{
    cout<<"Enter the co-ordinates of vertex "<<i+1<<":-";
    cin>>x[i];
    cin>>y[i];

}

cout<<"1.   Translation"<<endl;
cout<<"2.   Scaling"<<endl;
cout<<"3.   Rotation"<<endl;
cout<<"4.   Exit"<<endl;


cout<<"Enter your choice: "<<endl;
cin>>ch;


 switch(ch)
    {
    case 1:
        cout<<"Enter the Translation factor for x and y:-";
        cin>>tx;
        cin>>ty;
        break;
    case 2:
        cout<<"Enter the Scaling factor for x and y:-";
        cin>>sx;
        cin>>sy;
        break;
    case 3:
         cout<<"Enter the Theta :-";
         cin>>theta;
        break;
    case 4:
        return 0;
        break;

    }





    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (100, 150);
    glutCreateWindow ("");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();

}

