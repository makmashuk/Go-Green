
/*
    ***********Go-Green***************

 Submitted By:-

                      1.Khan, Md.Mohiuddin

*/




#include<iostream>
#include<glut.h>
#include <stdlib.h>
#include <math.h>

using namespace std ;


 float posx=-4.5,posy=3.0; //charactor
 float posx2=5.5,posy2=-5.0; //charactor 2
 int i=0;
 int p=0;
 float cx1=-4.5, dx=0.01; //cube 1
 float cx2=3.0; //cube 2
 float cy3=3;
 float cy4=0.0;
 float cx5=5;
 float cx6=1;
 float cx7=6;
 int colCount = 0;
 bool collided = false;

 bool point_clr1=false;
 bool point_clr2=false;
 bool point_clr3=false;


float px1=3;
float px2=-4;
float px3=0;
//level2
    float mx=0.015;
float dx1=-2.5; //cube 1
 float dx2=3.0; //cube 2
 float dy3=-2;
 float dy4=-5;
 float dx5=5;
  float dx6=-3;
 float dy7=1;

float p1=-4;
float p2=5.3;
float p3=2.5;

bool point_clr4=false;
bool point_clr5=false;
bool point_clr6=false;


float _angle = 0.0;
float _cameraAngle =0.0;
float _ang_tri = 0.0;





void drawHealthBar(int x, float r ,float g ,float b)
{

	if (colCount== 0)
	{
		glPushMatrix();
		glColor3f(0 + r, .5 + g, 0 + b);
            glTranslatef(-5.0,4.1,0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0.0, 0.0);
					glVertex3f(4.0, 0.0, 0.0);
					glVertex3f(4.0, 1.0, 0.0);
					glVertex3f(0, 1.0, 0.0);
				glEnd();
            glPopMatrix();

	}
        else if (colCount== 1)
	{
                glPushMatrix();
		glColor3f(1, 1, 0);
                glTranslatef(-5.0,4.1,0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0.0, 0.0);
					glVertex3f(3.0, 0.0, 0.0);
					glVertex3f(3.0, 1.0, 0.0);
					glVertex3f(0, 1.0, 0.0);
				glEnd();
            glPopMatrix();
	}
		else if (colCount== 2)
		{

			glPushMatrix();
            glColor3f(1, 0.5, 0);
            glTranslatef(-5.0,4.1,0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0.0, 0.0);
					glVertex3f(2.0, 0.0, 0.0);
					glVertex3f(2.0, 1.0, 0.0);
					glVertex3f(0, 1.0, 0.0);
				glEnd();
            glPopMatrix();
		}
		else if (colCount== 3)
		{

			glPushMatrix();
            glColor3f(1, 0, 0);
            glTranslatef(-5.0,4.1,0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0.0, 0.0);
					glVertex3f(1.0, 0.0, 0.0);
					glVertex3f(1.0, 1.0, 0.0);
					glVertex3f(0, 1.0, 0.0);
				glEnd();
            glPopMatrix();
            }
}

void drawCube_l2()
{
	float c1=0.0;
    float c2=0.8;
          //cube 1

        glPushMatrix();
        glColor3f(0.6,0.6,0.3);
        glTranslatef(dx1,2.5,0.0);
				glBegin(GL_POLYGON);
					glVertex3f(c1, c1, 0.0);
					glVertex3f(c2+0.5, c2, 0.0);
					glVertex3f(c1, c2, 0.0);
					glVertex3f(c2+0.5, c1, 0.0);
				glEnd();
        glPopMatrix();

           //cube 2

        glPushMatrix();
        glColor3f(0.6,0.6,0.3);
        glTranslatef(dx2,-3,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c2+0.5, c2, 0.0);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c2+0.5, c1, 0.0);
				glVertex3f(c1, c2, 0.0);
			glEnd();
        glPopMatrix();


         //cube 3
         glColor3f(0.6,0.6,0.3);
        glPushMatrix();
        glTranslatef(0,dy3,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c1, c2+0.5, 0.0);
				glVertex3f(c2, c1, 0.0);
				glVertex3f(c2, c2+0.5, 0.0);
			glEnd();
        glPopMatrix();


         //cube 4

        glPushMatrix();
        glColor3f(0.6,0.6,0.3);
        glTranslatef(-3,dy4,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c1, c2+0.5, 0.0);
				glVertex3f(c2, c1, 0.0);
				glVertex3f(c2, c2+0.5, 0.0);
			glEnd();
        glPopMatrix();


        glPushMatrix();
        glColor3f(0.6,0.6,0.3);
        glTranslatef(dx6,-5,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c2+0.5, c2, 0.0);
				glVertex3f(c1, c2, 0.0);
				glVertex3f(c2+0.5, c1, 0.0);
			glEnd();
        glPopMatrix();

          //cube 7
        glPushMatrix();
        glColor3f(0.6,0.6,0.3);
        glTranslatef(4,dy7,0.0);
			glBegin(GL_POLYGON);
			glVertex3f(c2, c2+0.5, 0.0);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c1, c2+0.5, 0.0);
				glVertex3f(c2, c1, 0.0);

			glEnd();
			glEnd();
        glPopMatrix();
}

void drawCube_l1()
{
		float c1=0.0;
        float c2=0.8;
          //cube 1

        glPushMatrix();
        glColor3f(0.6,0.3,0.3);
        glTranslatef(cx1,0,0.0);
				glBegin(GL_POLYGON);
					glVertex3f(c1, c1, 0.0);
					glVertex3f(c2+0.5, c2, 0.0);
					glVertex3f(c1, c2, 0.0);
					glVertex3f(c2+0.5, c1, 0.0);
				glEnd();
        glPopMatrix();

           //cube 2

        glPushMatrix();
        glColor3f(0.6,0.3,0.3);
        glTranslatef(cx2,-3,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c2+0.5, c2, 0.0);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c2+0.5, c1, 0.0);
				glVertex3f(c1, c2, 0.0);
			glEnd();
        glPopMatrix();


         //cube 3
         glColor3f(0.6,0.3,0.3);
        glPushMatrix();
        glTranslatef(-2.5,cy3,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c1, c2+0.5, 0.0);
				glVertex3f(c2, c1, 0.0);
				glVertex3f(c2, c2+0.5, 0.0);
			glEnd();
        glPopMatrix();


         //cube 4

        glPushMatrix();
        glColor3f(0.6,0.3,0.3);
        glTranslatef(2.2,cy4,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c1, c2+0.5, 0.0);
				glVertex3f(c2, c1, 0.0);
				glVertex3f(c2, c2+0.5, 0.0);
			glEnd();
        glPopMatrix();

        //cube 5

        glPushMatrix();
        glColor3f(0.6,0.3,0.3);
        glTranslatef(cx5,2,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c2+0.5, c2, 0.0);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c2+0.5, c1, 0.0);
				glVertex3f(c1, c2, 0.0);
			glEnd();
        glPopMatrix();

        //cube 6

        glPushMatrix();
        glColor3f(0.6,0.3,0.3);
        glTranslatef(cx6,-5,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c2+0.5, c2, 0.0);
				glVertex3f(c1, c2, 0.0);
				glVertex3f(c2+0.5, c1, 0.0);
			glEnd();
        glPopMatrix();


          //cube 7
        glPushMatrix();
        glColor3f(0.6,0.3,0.3);
        glTranslatef(cx7,-1,0.0);
			glBegin(GL_POLYGON);
				glVertex3f(c1, c1, 0.0);
				glVertex3f(c2+0.5, c2, 0.0);
				glVertex3f(c1, c2, 0.0);
				glVertex3f(c2+0.5, c1, 0.0);
			glEnd();
        glPopMatrix();
}
void boundary()
{
    //** OBJECT BOUNDARY
                if(posx<= -4.4 )
                posx=-4.3;
               else if (posx >=6.3)
                   posx= 6.2;
                else if(posy <=-5)
                    posy= -4.9;
                else if(posy >=3.4)
                     posy= 3.3;

                      if(posx2<= -4.4 )
                posx2=-4.3;
               else if (posx2 >=6.3)
                   posx2= 6.2;
                else if(posy2 <=-5)
                    posy2= -4.9;
                else if(posy2 >=3.4)
                     posy2= 3.3;

			glLineWidth(3.0);
            //*** INSIDE BOARDER
            glPushMatrix();
            glTranslatef(-5,-6,0);
            glColor3f(0,1,1);
            glScalef(2,2,0);
				glBegin(GL_LINE_LOOP);
					glVertex3f(0, 0, 0.0);
					glVertex3f(6, 0, 0.0);
					glVertex3f(6, 5, 0.0);
					glVertex3f(0, 5, 0.0);
				glEnd();
            glPopMatrix();

            // **OUTSIDE BOARDER
            glPushMatrix();
            glTranslatef(-5.6,-6.2,0);
            glScalef(2.2,2.4,0);
				glBegin(GL_LINE_LOOP);
					glVertex3f(0, 0, 0.0);
					glVertex3f(6, 0, 0.0);
					glVertex3f(6, 5, 0.0);
					glVertex3f(0, 5, 0.0);
				glEnd();
            glPopMatrix();


}
void door_l1()
{
    //**DOOR

            glPushMatrix();
            glTranslatef(5.8,-4.8,0);
            //glRotatef(35, 1.0, 1.0, 0.0);

            glColor4f(0,1,1,0.2);
                glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50;
                    float r=1.20;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
                glEnd();
                glPopMatrix();


}
void door_l2()
{
    //**DOOR

            glPushMatrix();
            glTranslatef(-4,2.8,0);
            //glRotatef(35, 1.0, 1.0, 0.0);

            glColor4f(0,1,1,0.2);
                glBegin(GL_POLYGON);
                for(int i=0;i<200;i++)
                {
                    float pi=3.1416;
                    float A=(i*2*pi)/50;
                    float r=1.00;
                    float x = r * cos(A);
                    float y = r * sin(A);
                    glVertex2f(x,y );
                }
                glEnd();
                glPopMatrix();


}

void point_l2()
{

     if ( posy2 <-3.4 ||posy2 >-1.8 || p1>posx2+0.6||  posx2>p1+1 )
                    {

                    }
                    else
                    {
                        if(!point_clr4)
                            p=p+2;
                        point_clr4=true;
                    }

    if(point_clr4==true)
    {
        glColor3f(0.0,0.0,0.0);

    }
    else
    {
         glColor3f(0.0,1.0,0.5);
         glPushMatrix();

        glTranslatef(p1,-3,0.0);
        glRotatef(_angle, 0.0, 1.0, 0.0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0, 0.0);
					glVertex3f(0.5, 0, 0.0);
					glVertex3f(0.5, 0.5, 0.0);
					glVertex3f(0, 0.5, 0.0);

				glEnd();
        glPopMatrix();

    }

         if ( posy2 <1.3 ||posy2 >2.9 || p2>posx2+0.6||  posx2>p2+1 )
                    {

                    }
                    else
                    {
                        if(!point_clr5)
                            p=p+2;
                        point_clr5=true;
                    }

    if(point_clr5==true)
    {
        glColor3f(0.0,0.0,0.0);

    }
    else
    {
         glColor3f(0.0,1.0,0.5);
         glPushMatrix();
        glTranslatef(p2,1.6,0.0);
         glRotatef(_angle, 0.0, 1.0, 0.0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0, 0.0);
					glVertex3f(0.5, 0, 0.0);
					glVertex3f(0.5, 0.5, 0.0);
					glVertex3f(0, 0.5, 0.0);

				glEnd();
        glPopMatrix();
    }


        if (posy2 >-4 || p3>posx2+0.6||  posx2>p3+1 )
                    {

                    }
                    else
                    {
                        if(!point_clr6)
                            p=p+2;
                        point_clr6=true;
                    }

    if(point_clr6==true)
    {
        glColor3f(0.0,0.0,0.0);

    }
    else
    {
         glColor3f(0.0,1.0,0.5);
          glPushMatrix();
        glTranslatef(p3,-5.1,0.0);
         glRotatef(_angle, 0.0, 1.0, 0.0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0, 0.0);
					glVertex3f(0.5, 0, 0.0);
					glVertex3f(0.5, 0.5, 0.0);
					glVertex3f(0, 0.5, 0.0);

				glEnd();
        glPopMatrix();
    }

        glColor3f(1,1,1);
         glRasterPos2f(4.8, 4.8);
         glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '0' + p);
}

void point_l1()
{                   //point 1
    if ( posy <-0.6 ||posy >1.2 || px1>posx+0.6||  posx>px1+1 )
                    {

                    }
                    else
                    {
                        if(!point_clr1)
                            p=p+1;
                        point_clr1=true;
                    }

    if(point_clr1==true)
    {
        glColor3f(0.0,0.0,0.0);

    }
    else
    {
         glColor3f(0.0,1.0,0.0);
         glPushMatrix();
        glTranslatef(px1,0,0.0);
        glRotatef(_angle, 0.0, 1.0, 0.0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0, 0.0);
					glVertex3f(0.5, 0, 0.0);
					glVertex3f(0.5, 0.5, 0.0);
					glVertex3f(0, 0.5, 0.0);

				glEnd();
        glPopMatrix();
    }

                //point 2
    if ( posy <-0.6 ||posy >1.2 || px2>posx+0.6||  posx>px2+1 )
                    {
                    }
                    else
                    {
                        if(!point_clr2)
                            p=p+1;
                        point_clr2=true;}


         if(point_clr2==true)
    {
        glColor3f(0.0,0.0,0.0);
    }
    else
    {
        glColor3f(0.0,1.0,0.0);
        glPushMatrix();
        glTranslatef(px2,0,0.0);
        glRotatef(_angle, 0.0, 1.0, 0.0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0, 0.0);
					glVertex3f(0.5, 0, 0.0);
					glVertex3f(0.5, 0.5, 0.0);
					glVertex3f(0, 0.5, 0.0);

				glEnd();
        glPopMatrix();
    }
        //point 2


          //point 3
    if ( posy <-3.4 ||posy >-1.8 || px3>posx+0.6||  posx>px3+1 )
                    {
                    }
                    else
                    {
                        if(!point_clr3)
                            p=p+1;
                        point_clr3=true;}


         if(point_clr3==true)
    {
        glColor3f(0.0,0.0,0.0);

    }
    else
    {
        glColor3f(0.0,1.0,0.0);
         glPushMatrix();
        glTranslatef(px3,-3,0.0);
        glRotatef(_angle, 0.0, 1.0, 0.0);
				glBegin(GL_POLYGON);
					glVertex3f(0, 0, 0.0);
					glVertex3f(0.5, 0, 0.0);
					glVertex3f(0.5, 0.5, 0.0);
					glVertex3f(0, 0.5, 0.0);

				glEnd();
        glPopMatrix();
    }

        glColor3f(1,1,1);
        glRasterPos2f(4.8, 4.8);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '0' + p);
    }

void charector_l1()

{
            if(
               ( posy <-0.6 ||posy >1.6 || cx1>posx+0.8||  posx>cx1+1.8 ) &&
               ( posy <-3.4 ||posy >-1.4 || cx2>posx+0.8 ||  posx >cx2+1.8)  &&
               ( posx <-3.2 ||posx >-1.2 || cy3>posy+0.8 ||  posy >cy3+1.8)&&
               ( posx <1.5 ||posx >3.4 || cy4>posy+0.8 ||  posy >cy4+1.8) &&
               (posy <1.4 ||posy >3.6 || cx5>posx+0.8||  posx>cx5+1.8)  &&
               (posy <-5.4||posy >-3.6 || cx6>posx+0.8||  posx>cx6+1.8) &&
               ( posy <-1.6 ||posy >0.6 || cx7>posx+0.8||  posx>cx7+1.8 ))
                    {
                            glColor3f(0.0,0.8,0.5);
                            collided = false;
                    }

                else
                    {
                        glColor3f(1.0,0.0,0.0);
                        if(!collided)
                            colCount++;

                       collided = true;
                    }
            glPushMatrix();
            glTranslatef(posx, posy, 0.0);
            glLineWidth(2.0);
			 glPushMatrix();
			glScalef(0.25,0.30,0.0);
		  glPushMatrix();
			  glColor3f(1.0, 0.0, 0.0);
				glBegin(GL_POLYGON);
					glVertex3f(-2.3, 1.8, 0.0);
					glVertex3f(-1.6, 0.4, 0.0);
					glVertex3f(-2.1, -2.8, 0.0);
					glVertex3f(3.1, -2.8, 0.0);
					glVertex3f(2.7, -1.0, 0.0);
					glVertex3f(3.1, 1.4, 0.0);
				glEnd();
			glPopMatrix();
			 glPushMatrix();
			 glColor3f(0.5,0.65,0.55);
				glBegin(GL_POLYGON);
					glVertex3f(3.1, 1.3, 0.0);
					glVertex3f(-1.3, 1.2, 0.0);
					glVertex3f(-1.2, -1.2, 0.0);
					glVertex3f(-0.0, -2, 0.0);
					glVertex3f(0.4, -0.9, 0.0);
					glVertex3f(1.5, -2.0, 0.0);
					glVertex3f(2.8, -1.0, 0.0);
				glEnd();
			glPopMatrix();
			 glPushMatrix();
			 glColor3f(0.25,0.20,0.45);
				glBegin(GL_POLYGON);
						glVertex3f(0.7, -0.6, 0.0);
						glVertex3f(1.1, -0.8, 0.0);
						glVertex3f(2.3, -0.6, 0.0);
						glVertex3f(2.5, -0.0, 0.0);
						glVertex3f(0.7, -0.4, 0.0);
						glVertex3f(-0.7, -0.0, 0.0);
						glVertex3f(-0.5, -0.6, 0.0);
						glVertex3f(0.3, -0.8, 0.0);
				glEnd();
			glPopMatrix();

			glPushMatrix();
			 glColor3f(1.0,1.0,0.0);
				glBegin(GL_TRIANGLES);
						glVertex3f(0.0, -0.2, 0.0);
						glVertex3f(0.2, -0.5, 0.0);
						glVertex3f(0.4, -0.3, 0.0);
				glEnd();
				glBegin(GL_TRIANGLES);
						glVertex3f(1.2, -0.28, 0.0);
						glVertex3f(1.4, -0.5, 0.0);
						glVertex3f(1.6, -0.2, 0.0);
				glEnd();
			glPopMatrix();

			glPopMatrix();

			glPopMatrix();


}
void charector_l2()

{if(
               ( posy2 <2.0 || dx1>posx2+0.7||  posx2>dx1+1.9 ) &&
               ( posy2 <-3.5 ||posy2 >-1.4 || dx2>posx2+0.7 ||  posx2 >dx2+1.9)  &&
               (  posx2 <-0.7 ||posx2 >1.3 || dy3>posy2+0.7 ||  posy2 >dy3+1.8)&&
               ( posx2 <-3.7 ||posx2 >-1.7 || dy4>posy2+0.8 ||  posy2 >dy4+1.8) &&
               ( posy2 >-3.4 || dx6>posx2+0.7 ||  posx2 >dx6+1.9)  &&
               (  posx2 <3.3 ||posx2 >5.3 || dy7>posy2+0.4 ||  posy2 >dy7+2.0)
   )
                    {
                         glColor3f(0.0,0.8,0.5);
                            collided = false;
                    }

                else
                    {
                        glColor3f(1.0,0.0,0.0);
                        if(!collided)
                            colCount++;

                       collided = true;
                    }


            glPushMatrix();
            glTranslatef(posx2, posy2, 0.0);
            glLineWidth(2.0);
			 glPushMatrix();
			glScalef(0.25,0.3,0.0);
		  glPushMatrix();
			  glColor3f(0.0, 0.0, 1.0);
				glBegin(GL_POLYGON);
					glVertex3f(-2.3, 1.8, 0.0);
					glVertex3f(-1.6, 0.4, 0.0);
					glVertex3f(-2.1, -2.8, 0.0);
					glVertex3f(3.1, -2.8, 0.0);
					glVertex3f(2.7, -1.0, 0.0);
					glVertex3f(3.1, 1.4, 0.0);
				glEnd();
			glPopMatrix();
			 glPushMatrix();
			 glColor3f(0.5,0.65,0.55);
				glBegin(GL_POLYGON);
					glVertex3f(3.1, 1.3, 0.0);
					glVertex3f(-1.3, 1.2, 0.0);
					glVertex3f(-1.2, -1.2, 0.0);
					glVertex3f(-0.0, -2, 0.0);
					glVertex3f(0.4, -0.9, 0.0);
					glVertex3f(1.5, -2.0, 0.0);
					glVertex3f(2.8, -1.0, 0.0);
				glEnd();
			glPopMatrix();
			 glPushMatrix();
			 glColor3f(0.25,0.20,0.45);
				glBegin(GL_POLYGON);
						glVertex3f(0.7, -0.6, 0.0);
						glVertex3f(1.1, -0.8, 0.0);
						glVertex3f(2.3, -0.6, 0.0);
						glVertex3f(2.5, -0.0, 0.0);
						glVertex3f(0.7, -0.4, 0.0);
						glVertex3f(-0.7, -0.0, 0.0);
						glVertex3f(-0.5, -0.6, 0.0);
						glVertex3f(0.3, -0.8, 0.0);
				glEnd();
			glPopMatrix();

			glPushMatrix();
			 glColor3f(1.0,1.0,0.0);
				glBegin(GL_TRIANGLES);
						glVertex3f(0.0, -0.2, 0.0);
						glVertex3f(0.2, -0.5, 0.0);
						glVertex3f(0.4, -0.3, 0.0);
				glEnd();
				glBegin(GL_TRIANGLES);
						glVertex3f(1.2, -0.28, 0.0);
						glVertex3f(1.4, -0.5, 0.0);
						glVertex3f(1.6, -0.2, 0.0);
				glEnd();
			glPopMatrix();

			glPopMatrix();

			glPopMatrix();


}

void update(int value)
{


	_angle += 2.0f;
	if (_angle > 360)
        {
            _angle -= 360;
        }
	_ang_tri += 2.0f;
	if (_ang_tri > 360)
        {
		_ang_tri -= 360;
        }
    //for cube  1

         if(cx1>-1)
        {	 cx1=-4.5;	 }
        else
        {	cx1=cx1+dx;  }


    //for cube 2
        if(cx2<=-4.5)
        {	 cx2=3;	}
        else
        {	cx2=cx2-dx;	}

	//for cube 3
         if(cy3>=3)
        {	cy3=-5;		}
        else
        {	cy3=cy3+dx;		}

    //for cube 4
         if(cy4>=3)
        {	cy4=-5;	}
        else
        {	cy4=cy4+dx;	}


    //for cube 5
        if(cx5<=1.5)
        {	cx5=6.0;	 }
        else
        {	cx5=cx5-dx;	 }

	//for cube 6
        if(cx6>=0)
        {	cx6=-4.5;	}
        else
        {	cx6=cx6+dx; }
	//for cube 6
        if(cx7>=5.7)
        { cx7=2.2; }
        else
        { cx7=cx7+dx;	}


         //for cube  1

         if(dx1>3)
        {	 dx1=-2.5;	 }
        else
        {	dx1=dx1+mx;  }


    //for cube 2
        if(dx2<=-4.5)
        {	 dx2=3;	}
        else
        {	dx2=dx2-mx;	}

//for cube 3
         if(dy3>=2)
        {	dy3=-5;		}
        else
        {	dy3=dy3+mx;		}

    //for cube 4
         if(dy4>=2)
        {	dy4=-4;	}
        else
        {	dy4=dy4+mx;	}


        if(dx6>=0)
        {	dx6=-4.5;	}
        else
        {	dx6=dx6+mx; }
	//for cube 6
        if(dy7<=-3)

        { dy7=2; }
        else
        { dy7=dy7-mx;	}


	glutPostRedisplay();

	glutTimerFunc(10, update, 0);

}

void init(void)
    {
        glClearColor(0.0, 0.0, 0.0, 0.0);
        glShadeModel(GL_FLAT);
         glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    }

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(90.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y)
{
        switch (key) {
            case 's':
                posy=posy+0.2;
                posx=posx-0.2;
                glutPostRedisplay();
                break;
            case 'a':
                posy=posy-0.2;
                posx=posx+0.2;
                glutPostRedisplay();
                break;
            case 'z':
                posy=posy+0.2;
                posx=posx+0.2;
                glutPostRedisplay();
                break;
            case 'x':
                posy=posy-0.2;
                posx=posx-0.2;
                glutPostRedisplay();
                break;

        default:
            break;
        }
}
void keyboard(int key, int x, int y)
    {

            switch (key) {
        case GLUT_KEY_RIGHT:
              posx=posx+0.2;
              posx2=posx2+0.2;
            break;

        case GLUT_KEY_LEFT:
           posx=posx-0.2;
           posx2=posx2-0.2;
            break;

        case GLUT_KEY_UP:
            posy=posy+0.2;
            posy2=posy2+0.2;

            break;

        case GLUT_KEY_DOWN:
           posy=posy-0.2;
           posy2=posy2-0.2;
            break;
        default:
        break;

        }

        cout << posx << endl;
        cout << posy << endl;
        cout << endl;
        glutPostRedisplay();

}
void game_end(void)
{
            if(colCount>=4)
            {
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glRotatef(-_cameraAngle, 0.0, 1.0, 0.0);
            glTranslatef(0.0, 0.0, -7.0);
            glColor3f(1,0,0);
           boundary();
                glRasterPos2f(0,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'G');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'A');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'M');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ' ');
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ' ');
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ' ');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'O');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'V');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'R');
                    glRasterPos2f(0.5,-0.5);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'S');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'C');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'O');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'R');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
                 glRasterPos2f(1,-1);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '0' + p);

            }
}



void level_completed()
{
     if((posx2<-3.7 && posy2 >3))
            {

                 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
                glMatrixMode(GL_MODELVIEW);
                glLoadIdentity();
                glRotatef(-_cameraAngle, 0.0, 1.0, 0.0);
                glTranslatef(0.0, 0.0, -7.0);

           boundary();

                glRasterPos2f(0,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'L');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'V');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'L');
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ' ');
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '2');
         glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ' ');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'C');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'O');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'M');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'P');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'L');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'T');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'D');

		    glRasterPos2f(0.5,-0.5);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'S');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'C');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'O');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'R');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
                 glRasterPos2f(1,-1);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '0' + p);

            }
}

void level_2(void)
    {

            {

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(-_cameraAngle, 0.0, 0.0, 1.0);
        glTranslatef(0.0, 0.0, -7.0);
            glColor3f(1,1,0);
         glRasterPos2f(-4, 5.2);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'H');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'A');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'L');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'T');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'H');

		 glRasterPos2f(0, 5.2);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'L');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'V');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'L');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, ' ');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '2');

		 glRasterPos2f(3.5, 5.2);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'S');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'C');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'O');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'R');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');

			glPushMatrix();
			glTranslatef(-1.0, 0.0, 0.0);
			// glRotatef(8, 0.0, -0.4, 0);

        glColor3f(0,1,0.5);
        boundary();
        drawCube_l2();
        charector_l2();
		drawHealthBar(0,0,0,0);
		point_l2();
        door_l2();
		level_completed();
		 game_end();
        glPopMatrix();
        glutSwapBuffers();
            }
}



void chklevel()
{
    if(posx>5 && posy <-4)
          {
              glutDisplayFunc(level_2);
          }

}



void level_1(void)
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glRotatef(-_cameraAngle, 0.0, 0.0, 1.0);
        glTranslatef(0.0, 0.0, -7.0);
            glColor3f(1,1,0);
         glRasterPos2f(-4, 5.2);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'H');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'A');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'L');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'T');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'H');

		 glRasterPos2f(3.5, 5.2);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'S');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'C');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'O');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'R');
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'E');

			glPushMatrix();
			glTranslatef(-1.0, 0.0, 0.0);
			// glRotatef(8, 0.0, -0.4, 0);


        boundary();
        drawCube_l1();
        point_l1();
        charector_l1();
		door_l1();

		drawHealthBar(0,0,0,0);
        game_end();
        //level_completed();
        chklevel();
        //level_2();


        glPopMatrix();

        glutSwapBuffers();

}



int main(int argc, char** argv)
    {

        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
        glutInitWindowSize(800, 600);
        glutInitWindowPosition(100, 100);
        glutCreateWindow(argv[0]);
        init();

		 //cout << "X: " << posx << endl;
         //cout << "Y: " << posy << endl;


            glutDisplayFunc(level_1);
            glutReshapeFunc(reshape);
            glutKeyboardFunc(keyboard);
            glutSpecialFunc(keyboard);
            glutTimerFunc(10, update, 0); // timer
            glutMainLoop();

        //

        return 0;
}


