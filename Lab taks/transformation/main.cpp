#include <windows.h>
#include <GL/glut.h>
#include <math.h>

float xa=0.2,ya=0.2,xb=-0.2,yb=0.2,xc=-0.2,yc=-0.2,xd=0.2,yd=-0.2;
void display(){

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(xa-0.3,ya-0.5);
    glColor3f(0,1,0);
    glVertex2f(xb-0.3,yb-0.5);
    glColor3f(0,0,1);
    glVertex2f(xc-0.3,yc-0.5);
    glColor3f(1,0.5,0.5);
    glVertex2f(xd-0.3,yd-0.5);
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
