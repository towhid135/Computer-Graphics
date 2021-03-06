#include <windows.h>
#include <GL/glut.h>

void display(void){

          glColor3f(0,1,0);
          glBegin(GL_POLYGON);
          glVertex2f(0,0.5); //a
          glVertex2f(.3,.3); //b
          glVertex2f(.3,-.1); //c
          glVertex2f(-.3,-0.1); //d
          glVertex2f(-.3,0.3); //e
          glEnd();//end pentagon

          glColor3f(0,1,0);
          glBegin(GL_TRIANGLES);
          glVertex2f(0,0.5); //a
          glVertex2f(-.3,0.3); //e
          glVertex2f(-.5,0.7);
          glEnd();

          glColor3f(0,1,0);
          glBegin(GL_TRIANGLES);
          glVertex2f(0,0.5); //a
          glVertex2f(.3,.3); //b
          glVertex2f(.5,0.7);
          glEnd();

          glColor3f(0,1,0);
          glBegin(GL_TRIANGLES);
          glVertex2f(-.3,0.3); //e
          glVertex2f(-.3,-0.1); //d
          glVertex2f(-.7,0);
          glEnd();

          glColor3f(0,1,0);
          glBegin(GL_TRIANGLES);
          glVertex2f(.3,.3); //b
          glVertex2f(.3,-.1); //c
          glVertex2f(.7,0);
          glEnd();

          glColor3f(0,1,0);
          glBegin(GL_TRIANGLES);
          glVertex2f(-.3,-0.1); //d
          glVertex2f(.3,-.1); //c
          glVertex2f(0,-0.5);
          glEnd();

         //stat- drawing with lines
         /*glBegin(GL_LINES); // for drawing with lines
         glVertex2f(0,0.7); //a
         glVertex2f(.5,-.3); //c

         glVertex2f(.5,-.3); //c
         glVertex2f(-.7,0.3); //e

         glVertex2f(-.7,0.3); //e
         glVertex2f(.7,.3); //b

         glVertex2f(.7,.3); //b
         glVertex2f(-.5,-0.3); //d

         glVertex2f(-.5,-0.3); //d
         glVertex2f(0,0.7); //a
         glEnd(); */

         //end drawing with lines


         glFlush();


}

int main(int argc, char **argv){

        glutInit(&argc,argv);
        glutInitDisplayMode(GLUT_SINGLE);
        glutInitWindowSize(700,700);
        glutInitWindowPosition(500,100);
        glutCreateWindow("Star");
        glutDisplayFunc(display);
        glutMainLoop();

        return 0;
}
