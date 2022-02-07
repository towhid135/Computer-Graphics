#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float x,y,r = 0.5;
float X,Y,R = 0.4;
void display(){

     glColor3f(1,0,0);
     glBegin(GL_POLYGON);
     for(float theta=0; theta < 360; theta+=0.1){
      x = r * cos(theta);
      y = r * sin(theta);
      glVertex2f(x,y);
     }
     glEnd();

     glColor3f(0,0,0);
     glBegin(GL_POLYGON);
     for(float theta=0; theta < 360; theta+=0.1){
      X = R * cos(theta);
      Y = R * sin(theta);
      glVertex2f(X,Y);
     }
     glEnd();

     glFlush();


}




int main(int argc, char **argv){

        glutInit(&argc,argv);
        glutInitDisplayMode(GLUT_SINGLE);
        glutInitWindowSize(700,700);
        glutInitWindowPosition(500,100);
        glutCreateWindow("Double Circle");
        glutDisplayFunc(display);
        glutMainLoop();

        return 0;
}
