#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float x,y,r = 0.3;
void display(){

      glColor3f(0,1,0);
      glBegin(GL_QUADS);
      glVertex2f(-0.7,0.5);
      glVertex2f(0.7,0.5);
      glVertex2f(0.7,-0.5);
      glVertex2f(-0.7,-0.5);
      glEnd();// quads

     //filled circle
     glColor3f(1,0,0);
     glBegin(GL_POLYGON);
     for(float theta=0; theta < 360; theta+=0.1){
      x = r * cos(theta);
      y = r * sin(theta);
      glVertex2f(x,y);
     }
     glEnd();
     glFlush();


}




int main(int argc, char **argv){

        glutInit(&argc,argv);
        glutInitDisplayMode(GLUT_SINGLE);
        glutInitWindowSize(700,700);
        glutInitWindowPosition(500,100);
        glutCreateWindow("flag");
        glutDisplayFunc(display);
        glutMainLoop();

        return 0;
}
