#include<cstdio>

#include <GL/gl.h>
#include <GL/glut.h>
#include<iostream>
using namespace std;


GLfloat roketPosition = 0.0f;
GLfloat enemyPosition=0.0f;
GLfloat speed = 0.1f;
GLfloat enemySpeed =-0.1f;
GLfloat bulletSpeed = 0.0f;
GLfloat bullet2Speed=0.0f;
GLfloat bullet3Speed=0.0f;

bool bulletAttachtedToRoket=true;
bool bullet2AttachtedToRoket=true;
bool bullet3AttachtedToRoket=true;
GLfloat bulletPositionX=0.0f;
GLfloat bulletPositionY=0.0f;

GLfloat bullet2PositionX=0.0f;
GLfloat bullet2PositionY=0.0f;

GLfloat bullet3PositionX=0.0f;
GLfloat bullet3PositionY=0.0f;

void bullet(float x,float y){

glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 1.0f, 1.0f);
   glVertex2f(x-0.05f,-0.3f+y);
   glVertex2f(x+0.05f, -0.3f+y);
   glVertex2f(x, -0.1f+y);

   glEnd();

}


void bullet2(float x,float y){

glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 1.0f, 1.0f);
   glVertex2f(x-0.05f,-0.3f+y);
   glVertex2f(x+0.05f, -0.3f+y);
   glVertex2f(x, -0.1f+y);

   glEnd();

}


void bullet3(float x,float y){

glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 1.0f, 1.0f);
   glVertex2f(x-0.05f,-0.3f+y);
   glVertex2f(x+0.05f, -0.3f+y);
   glVertex2f(x, -0.1f+y);

   glEnd();

}










void update(int value) {






    if(enemyPosition<-1.8f)
        enemyPosition=1.15f;


    if(bulletPositionY>1.5f){
        bulletSpeed=0.0f;
        bulletPositionY=0.0f;
        bulletAttachtedToRoket=true;
    }


     if(bullet2PositionY>1.5f){
        bullet2Speed=0.0f;
        bullet2PositionY=0.0f;
        bullet2AttachtedToRoket=true;
    }

     if(bullet3PositionY>1.5f){
        bullet3Speed=0.0f;
        bullet3PositionY=0.0f;
        bullet3AttachtedToRoket=true;
    }



    if(bulletAttachtedToRoket==true)
        bulletPositionX=roketPosition;

    if(bullet2AttachtedToRoket==true)
        bullet2PositionX=roketPosition;

    if(bullet3AttachtedToRoket==true)
        bullet3PositionX=roketPosition;

    enemyPosition += enemySpeed;

    bulletPositionY += bulletSpeed;
    bullet2PositionY += bullet2Speed;
    bullet3PositionY += bullet3Speed;



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
                    if(bulletSpeed==0.0){
                bulletSpeed=0.1f;
                bulletAttachtedToRoket=false;
            }


            else if(bullet2Speed==0.0 ){
                    cout<<"bullet 2 fired"<<endl;
                bullet2Speed=0.1f;
                bullet2AttachtedToRoket=false;
            }

            else if(bullet3Speed==0.0){
                    cout<<"bullet 3 fired"<<endl;
                bullet3Speed=0.1f;
                bullet3AttachtedToRoket=false;
            }
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {
case 'l':
    speed = -0.05f;
    if(roketPosition> -0.8f)
        roketPosition += speed;

    break;
case 'r':
    speed = 0.05f;
    if(roketPosition<0.8)
        roketPosition += speed;
    break;
case 'f':
    if(bulletSpeed==0.0){
        bulletSpeed=0.1f;
        bulletAttachtedToRoket=false;
    }


    else if(bullet2Speed==0.0 ){
            cout<<"bullet 2 fired"<<endl;
        bullet2Speed=0.1f;
        bullet2AttachtedToRoket=false;
    }

    else if(bullet3Speed==0.0){
            cout<<"bullet 3 fired"<<endl;
        bullet3Speed=0.1f;
        bullet3AttachtedToRoket=false;
    }


    break;





glutPostRedisplay();
	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();


//roket
glPushMatrix();
glTranslatef(roketPosition,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.1f, -0.8f);
      glVertex2f( 0.1f, -0.8f);
      glVertex2f( 0.1f,  -0.4f);
      glVertex2f(-0.1f,  -0.4f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(-0.1f,-0.4f);
   glVertex2f(0.1f, -0.4f);
   glVertex2f(0.0f, -0.1f);

   glEnd();


    //roket right wing
    glBegin(GL_TRIANGLES);
   glVertex2f(0.1f, -0.5f);
   glVertex2f(0.1f,-0.7f);
   glVertex2f(0.2f, -0.7f);
   glEnd();

   //left wing
   glBegin(GL_TRIANGLES);
   glVertex2f(-0.1f, -0.5f);
   glVertex2f(-0.1f,-0.7f);
   glVertex2f(-0.2f, -0.7f);
   glEnd();


glPopMatrix();


glPushMatrix();

// enemy 1
    glTranslatef(0.0f,enemyPosition, 0.0f);
    glBegin(GL_TRIANGLES);
   glColor3f(1.0f, 0.0f, 0.0f);
   glVertex2f(-0.7f,0.8f);
   glVertex2f(-0.6f, 0.5f);
   glVertex2f(-0.5f, 0.8f);
   glEnd();


// enemy 2





    glBegin(GL_TRIANGLES);
   glVertex2f(-0.4f,0.6f);
   glVertex2f(-0.3f, 0.3f);
   glVertex2f(-0.2f, 0.6f);
   glEnd();


   //enemy 3

   glBegin(GL_TRIANGLES);
   glVertex2f(-0.1f,0.8f);
   glVertex2f(0.0f, 0.5f);
   glVertex2f(0.1f, 0.8f);
   glEnd();


   glBegin(GL_TRIANGLES);
   glVertex2f(0.4f,0.6f);
   glVertex2f(0.5f, 0.3f);
   glVertex2f(0.6f, 0.6f);
   glEnd();



glPopMatrix();

//bullet

glPushMatrix();
    glTranslatef(bulletPositionX,bulletPositionY, 0.0f);
        bullet(0.0f,0.0f);
glPopMatrix();

glPushMatrix();
    glTranslatef(bullet2PositionX,bullet2PositionY, 0.0f);
        bullet2(0.0f,0.0f);
glPopMatrix();

glPushMatrix();
    glTranslatef(bullet3PositionX,bullet3PositionY, 0.0f);
        bullet3(0.0f,0.0f);
glPopMatrix();


   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(600, 600);
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
