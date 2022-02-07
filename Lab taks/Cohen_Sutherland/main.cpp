#include<stdio.h>
#include <windows.h>
#include <GL/glut.h>

float x1, x2, y1, y2, xmax, xmin, ymax, ymin, x3, y3, x4, y4,tx3,ty3;
int flag1, flag2;

void input(void){

scanf("%f %f %f %f",&xmin,&ymin,&xmax,&ymax);
scanf("%f %f %f %f",&x1, &y1, &x2, &y2);

}
void display(void){
 glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1,1,0);
 glBegin(GL_LINES);
 glVertex2f(xmin,ymin);
 glVertex2f(xmax,ymin);
 glVertex2f(xmax,ymin);
 glVertex2f(xmax,ymax);
 glVertex2f(xmax,ymax);
 glVertex2f(xmin,ymax);
 glVertex2f(xmin,ymax);
 glVertex2f(xmin,ymin);
 glColor3f(1,0,0);
 glVertex2f(x1,y1);
 glVertex2f(x2,y2);
 glColor3f(0,1,0);

 //Strart of code


 //inside
    if(x1>=xmin && x1<=xmax && y1>=ymin && y1<=ymax)
    {
        flag1 = 0;
        printf("\n%f %f", x1, y1);
        glVertex2f(x1,y1);
    }
    //top
    else if(x1>=xmin && x1<=xmax && y1>=ymax)
    {
        flag1 = 1;
        x3=x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y3=ymax;
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
    }
    //left
    else if(y1>=ymin && y1<=ymax && x1<=xmin)
    {
        flag1 = 2;
        x3 = xmin;
        y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
    }
    //right
    else if(y1>=ymin && y1<=ymax && x1>=xmax)
    {
        flag1 = 3;
        x3 = xmax;
        y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
    }
    //down
    else if(x1>=xmin && x1<=xmax && y1<=ymin)
    {
        flag1 = 4;
        x3=x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y3=ymin;
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
    }
    //top left
    else if(x1<=xmin && y1>=ymax)
    {
        flag1 = 5;
        x3 = xmin;
        y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
        x4=x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4=ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("\n%f %f", x4, y4);
            glVertex2f(x4,y4);
        }
    }
    //top right
    else if(x1>=xmax && y1>=ymax)
    {
        flag1 = 6;
        x3 = xmax;
        y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
        x4=x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4=ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("\n%f %f", x4, y4);
            glVertex2f(x4,y4);
        }
    }
    //down left
    else if(x1<=xmin && y1<=ymin)
    {
        flag1 = 7;
        x3 = xmin;
        y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
        x4=x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4=ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("\n%f %f", x4, y4);
            glVertex2f(x4,y4);
        }
    }

    //down right
    else if(x1>=xmax && y1<=ymin)
    {
        flag1 = 8;
        x3 = xmax;
        y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
        x4=x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4=ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("\n%f %f", x4, y4);
            glVertex2f(x4,y4);
        }
    }

    //inside
    if(x2>=xmin && x2<=xmax && y2>=ymin && y2<=ymax)
    {
        flag2 = 0;
        printf("\n%f %f", x2, y2);
        glVertex2f(x2,y2);
    }
    //top
    else if(x2>=xmin && x2<=xmax && y2>=ymax)
    {
        flag2 = 1;
        x3=x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y3=ymax;
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
    }
    //left
    else if(y2>=ymin && y2<=ymax && x2<=xmin)
    {
        flag2 = 2;
        x3 = xmin;
        y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
    }
    //right
    else if(y2>=ymin && y2<=ymax && x2>=xmax)
    {
        flag2 = 3;
        x3 = xmax;
        y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
    }
    //down
    else if(x2>=xmin && x2<=xmax && y2<=ymin)
    {
        flag2 = 4;
        x3=x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y3=ymin;
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
    }
    //top left
    else if(x2<=xmin && y2>=ymax)
    {
        flag2 = 5;
        x3 = xmin;
        y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
        x4=x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4=ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("\n%f %f", x4, y4);
            glVertex2f(x4,y4);
        }

    }
    //top right
    else if(x2>=xmax && y2>=ymax)
    {
        flag2 = 6;
        x3 = xmax;
        y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
        x4=x1+(x2-x1)*((ymax-y1)/(y2-y1));
        y4=ymax;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("\n%f %f", x4, y4);
            glVertex2f(x4,y4);
        }
    }
    //down left
    else if(x2<=xmin && y2<=ymin)
    {
        flag2 = 7;
        x3 = xmin;
        y3 = y1 + (y2-y1)*((xmin-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
        x4=x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4=ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("\n%f %f", x4, y4);
            glVertex2f(x4,y4);
        }
    }
    //down right
    else if(x2>=xmax && y2<=ymin)
    {
        flag2 = 8;
        x3 = xmax;
        y3 = y1 + (y2-y1)*((xmax-x1)/(x2-x1));
        if(x3>=xmin && x3<=xmax && y3>=ymin && y3<=ymax)
        {
            printf("\n%f %f", x3, y3);
            glVertex2f(x3,y3);
        }
        x4=x1+(x2-x1)*((ymin-y1)/(y2-y1));
        y4=ymin;
        if(x4>=xmin && x4<=xmax && y4>=ymin && y4<=ymax)
        {
            printf("\n%f %f", x4, y4);
            glVertex2f(x4,y4);
        }
    }
    printf("\n%d %d", flag1, flag2);

 //End of code




 glEnd();
 //glutPostRedisplay();
 glFlush();


}



int main(int argc, char **argv){
   input();
   glutInit(&argc,argv);
   glutInitDisplayMode(GLUT_SINGLE);
   glutInitWindowSize(700,700);
   glutInitWindowPosition(500,100);
   glutCreateWindow("Computer Graphics Lab");
   glutDisplayFunc(display);
   glutMainLoop();
   return 0;

}
