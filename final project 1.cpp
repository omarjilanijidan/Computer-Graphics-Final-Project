#include<windows.h>
#include<GL/glut.h>
#include<stdlib.h>
#include<math.h>
double  r=.2,s=.3;  
int i;
float  tx=10,bx=10;
int x=0,y=0;

void init()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f); 
    glOrtho(-210,210,-220,310,-210,310); 

}
//-----------------------sky------------------------------------------------------------------

//-----------------------cloud-----------------------------------------------------------------
void cloud(double x, double y)
{
   
    
    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*r;
            y=y+sin((i*3.14)/180)*r;
 
            glVertex2d(x,y);
            
        }
        
        
    glEnd();

        
    
}
void sun(double x, double y)
{
   
    
    glBegin(GL_TRIANGLE_FAN);
        for(i=0;i<360;i++)
        {
            x=x+cos((i*3.14)/180)*s;
            y=y+sin((i*3.14)/180)*s;
 
            glVertex2d(x,y);
            
        }
        
        
    glEnd();

        
    
}
// ------------------------------------Fence-------------------------------------------------
void fence(int x)
{
    glBegin(GL_POLYGON);  
        glColor3ub(184,134,11);
        
        glVertex2i(190-x,130);
        glVertex2i(190-x,70);
        glVertex2i(187-x,70);
        glVertex2i(187-x,130);
        glVertex2i(190-x,130);

        
        
    glEnd();

}

//--------------------------------------------------------------------------------------------





void display() 
{

    glClear(GL_COLOR_BUFFER_BIT);
//-----------------------sky------------------------------------------------------------------
    glColor4f(0.7f, 1.0f, 1.0f, 1.0f);//light blue
        glRecti(-200,300,200,100);
//-----------------------------------field------------------------------
    glBegin(GL_POLYGON);  
        glColor3ub(0,100,0);//green
        
        glVertex2i(-200,100);
        glVertex2i(-100,160);
        glVertex2i(0,100);
        glVertex2i(50,70);
        glVertex2i(100,180);
        glVertex2i(200,100);
        glColor3ub(255,215,0);//gold
        glVertex2i(200,-200);
        
        glVertex2i(-200,-200);
        glColor3ub(255,215,0);//gold
        glVertex2i(-200,100);
        
    glEnd();
    // glColor3f(0.0, 0.5, 0.0);
    //     glRecti(-200,100,200,-200);
//-------------------SUN-------------------------
    glColor3ub(255,215,0);
    sun(90,250);
// ------------------------------------fence--------------------------
    int x=0;
    for(int i=0;i<39;i++)
    {
        fence(x);
        x+=10;
    }
    
    glColor3ub(184,134,11);
    glRecti(-200,120,200,115);
    glRecti(-200,100,200,95);
    glRecti(-200,85,200,80);
    
    
//-------------------------------------TREE------------------------
    glColor3ub(218,165,32);
    glRecti(-20,200,-13,140);
    glColor3ub(124,252,0);
    sun(-30,190);
    sun(0,190);
    sun(-10,210);
    sun(-30,175);
    sun(-0,170);

//-----------------------------------------------TUBEWELL-----------------------------------------
    
    glBegin(GL_POLYGON);  // First part

        glColor3ub(128,128,128);//
        glVertex2i(115,65);
        glVertex2i(95,5);
        glVertex2i(145,5);
        glVertex2i(165,65);
        glVertex2i(115,65);
        
    glEnd();
    glBegin(GL_POLYGON);  // second part

        glColor3ub(169,169,169);//
        glVertex2i(120,58);
        glVertex2i(104,13);
        glVertex2i(140,12);
        glVertex2i(155,58);
        glVertex2i(120,58);
        
    glEnd();
    glColor3ub(105,105,105);// third part
        glRecti(95,5,145,-6);

    glBegin(GL_POLYGON);  // fourth  part
        glColor3ub(105,105,105);//
        glVertex2i(165,65);
        glVertex2i(166,55);
        glVertex2i(145,-6);
        glVertex2i(145,5);
        glVertex2i(165,65);       
    glEnd();
    glBegin(GL_POLYGON);  // tubewell 1st part
        glColor3ub(184,134,11);
        glVertex2i(120,85);
        glVertex2i(120,30);
        glVertex2i(125,28);
        glVertex2i(130,30);
        glVertex2i(130,85);
        glVertex2i(125,87);
        glVertex2i(120,85);          
    glEnd();
    glBegin(GL_POLYGON);  // tubewell second part
        glColor3ub(255,215,0);//golden rod
        glVertex2i(120,85);
        glVertex2i(125,80);
        glVertex2i(130,85);
        glVertex2i(125,87);
        glVertex2i(120,85);

    glEnd();
    glColor3ub(205,133,63);//golden rod // tubewell third part
    glRecti(123,100,126,85);

    glBegin(GL_POLYGON);  // tubewell fourth part
        glColor3ub(139,69,19);//saddle brown
        glVertex2i(126,100);
        glVertex2i(128,102);
        glVertex2i(128,110);
        glVertex2i(126,113);
        glVertex2i(124,111);
        glVertex2i(100,80);
        glVertex2i(90,70);
        glVertex2i(90,65);
        glVertex2i(100,73);
        glVertex2i(126,100);
    glEnd();
    glBegin(GL_POLYGON);  // tubewell 5th part
        glColor3ub(210,105,30);//golden rod
        glVertex2i(130,70);
        glVertex2i(140,70);
        glVertex2i(140,50);
        glVertex2i(136,50);
        glVertex2i(136,60);
        glVertex2i(130,60);
        glVertex2i(130,70);
        
    glEnd();
    glColor3ub(210,105,30);//golden rod //tubewell last part
    glRecti(123,29,127,20);
    glColor3ub(139,69,19);//saddle brown
    glRecti(118,22,132,14);



//-------------------------------------------HOUSE-------------------------------------------------
    glBegin(GL_POLYGON);  // First part

        glColor3ub(218,165,32);//golden rod
        glVertex2i(-50,140);
        glVertex2i(0,149);
        glVertex2i(-12,88);
        glVertex2i(-65,89);
        glVertex2i(-50,140);
    glEnd();
    glBegin(GL_LINE_STRIP);  // First part

        glColor3ub(128,128,128);//gray
        glVertex2i(-50,140);
        glVertex2i(0,149);
        glVertex2i(-12,88);
        glVertex2i(-65,89);
        glVertex2i(-50,140);
    glEnd();
    
    
    

    glBegin(GL_POLYGON);  // Second Part
    glColor3f(0.6f, 0.4f, 0.5f);//Violet
        glVertex2i(-60,90);
        glVertex2i(-60,30);
        glVertex2i(-10,25);
        glVertex2i(-10,95);
    glEnd();
     glBegin(GL_LINE_STRIP);  // Second Part
     glColor3ub(128,128,128);//gray
        glVertex2i(-60,90);
        glVertex2i(-60,30);
        glVertex2i(-10,25);
        glVertex2i(-10,95);
    glEnd();
//---------------------------------------Door------------------------------------------
    glColor3ub(184,134,11);//dark golden rod 
    glRecti(-45,70,-30,28);

//--------------------------------------------------------------------------
    glBegin(GL_POLYGON);   // Third part 
    glColor3f(0.5f, 0.5f, 0.5f);//Violet
        glVertex2i(-10,25);
        glVertex2i(18,35);
        glVertex2i(18,100);
        glVertex2i(0,148);
        glVertex2i(-10,100);
        glVertex2i(-10,25);
        
    glEnd();
    glBegin(GL_LINE_STRIP);  // Third part 
    glColor3ub(128,128,128);//gray
        glVertex2i(-10,25);
        glVertex2i(18,35);
        glVertex2i(18,100);
        glVertex2i(0,148);
        glVertex2i(-10,100);
        glVertex2i(-10,25);
        
    glEnd();
    glBegin(GL_POLYGON); 
    glColor3ub(218,165,32);//golden rod
        glVertex2i(-1,150);
        glVertex2i(20,100);
        glVertex2i(17,90);
        glVertex2i(-4,140);
        glVertex2i(-1,150);

    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3ub(105,105,105);//gray
        glVertex2i(-1,150);
        glVertex2i(20,100);
        glVertex2i(17,90);
        glVertex2i(-3,135);
        

    glEnd();
    
    glBegin(GL_POLYGON);  // door
    glColor3ub(184,134,11);//dark golden rod 
        glVertex2i(0,70);
        glVertex2i(10,73);
        glVertex2i(10,32);
        glVertex2i(0,29);
        glVertex2i(0,70);
        
        
    glEnd();
    

//------------------------------------------RIVER--------------------------------------------------  
    glBegin(GL_POLYGON);
        glColor3ub(30,144,255);
        glVertex2i(-200,-50);
        glVertex2i(200,-30);
        glVertex2i(200,-200);
        glVertex2i(-200,-200);
        glVertex2i(-200,-50);   
    glEnd();
    glBegin(GL_POLYGON); // border
        glColor3ub(128,128,0);
        glVertex2i(-200,-45);
        glVertex2i(200,-25);
        glVertex2i(200,-30);
        glVertex2i(-200,-50 );
        glVertex2i(-200,-45);   
    glEnd();
    
//-------------------------------------------CLOUD-------------------------------------------------
	glPushMatrix();
	glColor3ub(220,220,220);
    glTranslatef(tx,0,0);
    cloud(0,250); 
    cloud(15,245);
    cloud(10,240);
    cloud(-2,243);

    sun(-165,260); 
    sun(-185,245);
    sun(-180,240);
    sun(-152,243);

    cloud(-80,250); 
    cloud(-95,245);
    cloud(-90,240);
    cloud(-90,243);
    cloud(-75,243);

    glPopMatrix();
    tx+=.01;
    if(tx>200)
    tx=-200;
//-------------------------------------------BOAT-------------------------------------------------
    glPushMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);//Black
    glTranslatef(bx,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(-180,-70);
        glVertex2i(-165,-100);
        glVertex2i(-150,-120);
        glVertex2i(-150,-100);
        glVertex2i(-180,-70);
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2i(-150,-100);
        glVertex2i(-150,-120);
        glVertex2i(-120,-125);
        glVertex2i(-90,-120);
        glVertex2i(-85,-100);
        glVertex2i(-150,-100); 
    glEnd();
    glBegin(GL_POLYGON);
        glVertex2i(-85,-100);
        glVertex2i(-90,-120);
        glVertex2i(-75,-105);  
        glVertex2i(-60,-70);
        glVertex2i(-85,-100);     
    glEnd();

    //--------------------------BOAT FLAG----------------------------
    glBegin(GL_POLYGON);
        glColor3ub(173,216,230);
        glVertex2i(-57,-40);
        glVertex2i(-50,-10);
        glVertex2i(-49,10);
        glVertex2i(-50,30);
        glVertex2i(-55,45);
        glVertex2i(-63,57);
        glVertex2i(-73,68); // end
        glVertex2i(-105,45);
        glVertex2i(-50,-10);
        
                   
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(173,216,230);
        
        glVertex2i(-68,-70);
        glVertex2i(-57,-40);
        glVertex2i(-85,10);
        glVertex2i(-68,-70);                
    glEnd();
    glBegin(GL_POLYGON);
        glColor3ub(173,216,230);
        glVertex2i(-85,-100);
        glVertex2i(-68,-70);
        glVertex2i(-80,-10);
        glVertex2i(-85,-100);
                        
    glEnd();

    glColor3ub(139,69,19);
    glRecti(-88,80,-86,-100);
    glBegin(GL_POLYGON);
        glColor3f(0.55,0.27,0.0745);//wood color
        glVertex2i(-85,-100);
        glVertex2i(-87,-80);
        glVertex2i(-93,-62);
        glVertex2i(-97,-55);
        glVertex2i(-105,-50);
        glVertex2i(-120,-48);
        glVertex2i(-120,-100);
        glVertex2i(-85,-100);
          
    glEnd();
    
    glBegin(GL_POLYGON);
        glColor3f(0.55,0.27,0.0745);//wood color
        glVertex2i(-150,-100);
        glVertex2i(-148,-80);
        glVertex2i(-142,-62);
        glVertex2i(-138,-55);
        glVertex2i(-130,-50);
        glVertex2i(-115,-48);
        glVertex2i(-115,-100);
        glVertex2i(-150,-100);
        
          
    glEnd();
//--------------------------BOAT LINE----------------------------
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);//Black
        glVertex2i(-142,-62);
        glVertex2i(-73,68);
        glVertex2i(-73,63);

        glVertex2i(-142,-62);
        glVertex2i(-105,45);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);//Black
        glVertex2i(-148,-80);
        glVertex2i(-87,-80);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);//Black
        glVertex2i(-142,-62);
        glVertex2i(-93,-62);      
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);//Black
        glVertex2i(-115,-48);
        glVertex2i(-115,-100);     
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);//Black
        glVertex2i(-130,-50);
        glVertex2i(-130,-100);     
    glEnd();
    glBegin(GL_LINE_STRIP);
        glColor3f(0.0f, 0.0f, 0.0f);//Black
        glVertex2i(-100,-52);
        glVertex2i(-100,-100);     
    glEnd();
   



    glPopMatrix();
    bx+=.03;
    if(bx>270)
    bx=-180;

    
    glutPostRedisplay();
//--------------------------------------------------------------------------------------------
    glFlush();   
}










int main(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitWindowSize(1200,800); 
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutCreateWindow("Final Project"); 
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}