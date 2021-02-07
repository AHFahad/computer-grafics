#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<iostream>
using namespace std;

GLfloat mouseX=-1.1;
GLfloat mouseY=-1.1;


int windowSize=600;

GLfloat enemyPosition=1.2f;
GLfloat enemySpeed =-0.1f;



bool enemyDestroyed=false;






void update(int value) {

    if(enemyPosition<-2.4f){
        enemyPosition=1.0f;
        enemyDestroyed=false;
    }


    enemyPosition += enemySpeed;


	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{



			mouseX= x;
			mouseY=(windowSize-y);
			mouseX=mouseX/(windowSize/2);
			mouseY=mouseY/(windowSize/2);
			mouseX=mouseX-1;
			mouseY=mouseY-1;

            printf("clicked at (%f, %f)\n", mouseX, mouseY);


            if((mouseX>=-0.2&& mouseX<=0.2)&&(mouseY>=(enemyPosition-0.2) && mouseY<=(enemyPosition+0.2) ))
                {
                    enemyDestroyed=true;
                    enemyPosition=-2.0f;
                    cout<<"Enemy destroyed"<<endl;
                }


		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {
case 'l':
    break;
case 'r':
    break;
case 'f':
    break;



glutPostRedisplay();
	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();





glPushMatrix();



    glTranslatef(0.0f,enemyPosition, 0.0f);
     glColor3f(1.0f, 0.0f, 0.0f);


if(!enemyDestroyed)
    {
    glBegin(GL_QUADS);
    glVertex2f(-0.2f,-0.2f);
    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.2f, 0.2f);
    glVertex2f(-0.2f, 0.2f);

   glEnd();
    }





glPopMatrix();
   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(windowSize, windowSize);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
