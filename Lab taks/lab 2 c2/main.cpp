#include <windows.h>
#include <GL/glut.h>

void display(void){
  glColor3f(1,0,0);
 glBegin(GL_LINES);
 glVertex2f(-.5,-.5);
 glVertex2f(.5,.5);
 glVertex2f(.5,-.5);
 glVertex2f(-.5,.5);
 glEnd(); //cross
 glBegin(GL_POINTS);
 glVertex2f(0,0.5);
 glEnd(); //a point

 /*glColor3f(0,1,0);
 glBegin(GL_TRIANGLES);
 glVertex2f(0,1);
 glVertex2f(1,0);
 glVertex2f(-1,0);
 glEnd();//triangle

 glColor3f(0,.5,.5);
 glBegin(GL_QUADS);
 glVertex2f(-.5,0);
 glVertex2f(.5,0);
 glVertex2f(.5,-1);
 glVertex2f(-.5,-1);
 glEnd();// quads */
 glColor3f(0,.3,.4);
 glBegin(GL_POLYGON);
 glVertex2f(0,0.7);
 glVertex2f(.7,.3);
 glVertex2f(.7,-.3);
 glVertex2f(0,-0.7);
 glVertex2f(-.7,-0.3);
 glVertex2f(-.7,0.3);
 glEnd(); //Polygone
 glFlush();
}

int main(int argc, char **argv){

   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_SINGLE);
   glutInitWindowSize(700,700);
   glutInitWindowPosition(500,100);
   glutCreateWindow("Computer Graphics Lab");
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;

}
