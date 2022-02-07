#include <windows.h>
#include <GL\glut.h>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

float xa=0.2, ya=0.2, xb=-0.2, yb=0.2, xc=-0.2, yc=-0.2, xd=0.2, yd=-0.2;
float t=1;
float tx=0, ty=0;
float x,y,r = 0.5,theta=0;
void display(void)
{


   glClear(GL_COLOR_BUFFER_BIT);
   glBegin(GL_QUADS);
   glColor3f(1, 0, 0);
   glVertex2f(xa,ya);
   glColor3f(0, 1, 0);
   glVertex2f(xb,yb);
   glColor3f(0, 0, 1);
   glVertex2f(xc,yc);
   glColor3f(1, 0.5, 0.5);
   glVertex2f(xd,yd);
   glEnd();
   glFlush();


}

void circular_move_anti(void){
               theta += 0.1;
               if (theta==360) theta = 0;
               x = r * cos(theta);
               y = r * sin(theta);

               glClear(GL_COLOR_BUFFER_BIT);
               glBegin(GL_QUADS);
               glColor3f(1, 0, 0);
               glVertex2f(xa+x,ya+y);
               glColor3f(0, 1, 0);
               glVertex2f(xb+x,yb+y);
               glColor3f(0, 0, 1);
               glVertex2f(xc+x,yc+y);
               glColor3f(1, 0.5, 0.5);
               glVertex2f(xd+x,yd+y);
               glEnd();
               glFlush();

}


void circular_move_clock(void){
               theta -= 0.1;
               if (theta==0) theta = 360;
               x = r * cos(theta);
               y = r * sin(theta);

               glClear(GL_COLOR_BUFFER_BIT);
               glBegin(GL_QUADS);
               glColor3f(1, 0, 0);
               glVertex2f(xa+x,ya+y);
               glColor3f(0, 1, 0);
               glVertex2f(xb+x,yb+y);
               glColor3f(0, 0, 1);
               glVertex2f(xc+x,yc+y);
               glColor3f(1, 0.5, 0.5);
               glVertex2f(xd+x,yd+y);
               glEnd();
               glFlush();

}




void keyboard(unsigned char key, int x, int y){
   switch (key){

       case 'r': circular_move_anti();
                 break;
       case 's': display();
                 break;
       case 't': circular_move_clock();
                 break;


   }

}




int main(int argc, char **argv)
{

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(700, 700);
glutInitWindowPosition(500, 100);
glutCreateWindow("Circular Move");
glutDisplayFunc(display);
glutKeyboardFunc(keyboard);
glutMainLoop();
return 0;
}
