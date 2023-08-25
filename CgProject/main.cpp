#include <GL/glut.h>
#include <math.h>

static int year = 0, day = 0,kp=0,ka=0,bl=0;
int cc=0;
void myinit()
{
    glClearColor(0,0,0,0);
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,1500,0,800);


}
void display1()
{
    glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    int i;

    char c1[]="                    NMAM  INSTITUTE OF TECHNOLOGY                            ";
    char c2[]="                  DEPT. OF COMPUTER SCIENCE AND ENGINEERING                 ";
    char c3[]="     COMPUTER GRAPHICS MINI PROJECT ON: EARTH, MOON AND SUN SIMULATION      ";
    char c4[]="    STUDENTS NAMES AND USN                         UNDER THE GUDIDANCE OF   ";
    char c5[]="     SUHAS S GOWDA(USN: 4NM 20CS189)                   MR. PUNEETH RP       ";
    char c6[]="     SHREYAS PRASHANT KINDALKAR(USN: 4NM 20CS176)                           ";
    char c7[]="     PRESS 'H' TO KNOW THE HISTORY                                          ";




    for(i=0;c1[i]!='\0';i++)
    {

        glColor3f(0,1,0);
        glRasterPos2d(20*i,750);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c1[i]);

        glColor3f(0,0,1);
        glRasterPos2d(20*i,680);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c2[i]);

        glColor3f(1,0.5,0);
        glRasterPos2d(20*i,610);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c3[i]);

        glColor3f(1,1,1);
        glRasterPos2d(20*i,510);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c4[i]);

        glRasterPos2d(20*i,460);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c5[i]);

        glRasterPos2d(20*i,410);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c6[i]);

         glRasterPos2d(20*i,210);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c7[i]);
    }
    glFlush();

}
void display2()
{   glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    int i;
    char C[]="HISTORY OF THE SOLAR SYSTEM";
    char c11[]="The history of the solar system spans billions of years, from the formation of the Sun and planets to the evolution";
    char c12[]="of life on Earth. Our understanding of the solar system's history has been shaped by a combination of observation, ";
    char c13[]="theory and experimentation.                                                                                        ";
    char c21[]="According to the widely accepted theory of solar system formation, known as the nebular hypothesis, the solar      ";
    char c22[]="system began as a cloud of gas and dust that collapsed under its own gravity.As the cloud collapsed, it began to   ";
    char c23[]="spin and flatten into a disk. The center of the disk eventually formed the Sun, while the remaining material       ";
    char c24[]="coalesced into planets, moons, and other bodies.                                                                   ";
    char c31[]="The early solar system was a chaotic and violent place, with collisions between protoplanets and other bodies      ";
    char c32[]="shaping the orbits and properties of the planets we see today. Over time, the solar system settled into its current";
    char c33[]="state, with the inner planets (Mercury, Venus, Earth, and Mars) composed mostly of rock and metal, while the outer ";
    char c34[]="planets (Jupiter, Saturn, Uranus, and Neptune) are composed mostly of gas and ice.                                 ";
    char c41[]="In recent decades, space missions to various parts of the solar system have provided new insights into its history ";
    char c42[]="and evolution. From the discovery of water on Mars to the exploration of Saturn's moons, our understanding of the  ";
    char c43[]="solar system continues to evolve as we explore and study the wonders of our cosmic neighborhood.                   ";
    char cc[]="PRESS 'N' to continue ";


    glColor3f(1,0.5,0);//orange
    for(i=0;C[i]!='\0';i++)//for heading
    {


    glRasterPos2d(500+15*i,760);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, C[i]);
    }


     glColor3f(1,1,1);//white
    for(i=0;c11[i]!='\0';i++)//to write paragraph
    {


    glRasterPos2d(13*i,690);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c11[i]);
    glRasterPos2d(13*i,660);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c12[i]);
    glRasterPos2d(13*i,630);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c13[i]);


    glRasterPos2d(13*i,590-10);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c21[i]);
    glRasterPos2d(13*i,560-10);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c22[i]);
    glRasterPos2d(13*i,530-10);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c23[i]);
    glRasterPos2d(13*i,500-10);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c24[i]);


    glRasterPos2d(13*i,460-20);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c31[i]);
    glRasterPos2d(13*i,430-20);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c32[i]);
    glRasterPos2d(13*i,400-20);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c33[i]);
    glRasterPos2d(13*i,370-20);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c34[i]);


    glRasterPos2d(13*i,300);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c41[i]);
    glRasterPos2d(13*i,270);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c42[i]);
    glRasterPos2d(13*i,240);
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c43[i]);
    }


      glColor3f(0.0,1.0,0.0);//green
    for(i=0;cc[i]!='\0';i++)//for heading
    {


    glRasterPos2d(77+15*i,130);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, cc[i]);
    }


    glFlush();

}







void display(void)
{
    int i;
    char c[]="RULES:                                                                                      ";
    char c1[]="Press 'A' to add two planets which revolve in opposite direction while running the program. ";
    char c2[]="Press 'S' to add two planets which revolve in same direction while running the program.     ";
    char c3[]="     If 'A' is pressed then use 'B' to move two planets in opposite direction.              ";
    char c4[]="     If 'S' is pressed then use 'K' to move two planets in same direction.                  ";
    char c5[]="Use 'Y' and 'D' to revolve and rotate earth(blue planet) respectively.                      ";
    char c6[]="Now do full screen to run the program                                                       ";
     glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



    for(i=0;c[i]!='\0';i++)//for rules
    {
    glColor3f(1.0,0,0.0);//white

    glRasterPos2d(77+15*i,730);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);
    glColor3f(1.0,1.1,1.0);//white
    glRasterPos2d(77+15*i,637+30);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c1[i]);
    glRasterPos2d(77+15*i,602+30);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c3[i]);
    glRasterPos2d(77+15*i,562+10);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c2[i]);
    glRasterPos2d(77+15*i,527+10);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c4[i]);
    glRasterPos2d(77+15*i,477);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c5[i]);
    }

    glColor3f(0.0,1.0,0.0);//green
    for(i=0;c3[i]!='\0';i++)//for heading
    {


    glRasterPos2d(270+15*i,333);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c6[i]);

    }


    // Draw stars in the background
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPointSize(3.0); // Set size of points
    glBegin(GL_POINTS);
    for (int i = 0; i < 100; i++) {
        float x = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
        float y = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
        //float z = 10.0 * ((float) rand() / RAND_MAX) - 1.0;

        if(x>=1&&y>=1)
        {
            glVertex2f(x,y);
            glVertex2f(-x,y);
            glVertex2f(x,-y);
            glVertex2f(-x,-y);
        }


    }
    glEnd();


     glColor3f(1.0, 0.0, 0.0); // set initial color to orange
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.1415926 / 180.0; // convert angle to radians
        float x = 0.9 * cos(theta); // calculate x-coordinate of vertex
        float y = 0.9 * sin(theta); // calculate y-coordinate of vertex
        // gradually change color from red in the center to orange at the outer parts
        glColor3f(1.0, 0.0 + 0.8 * cos(theta), 0.0);
        glVertex2f(x, y);
    }
    glEnd();





    glColor3f(1.0, 0.5, 0.0); // Set color to orange

    // Draw sun
    glPushMatrix();
    glutSolidSphere(0.01, 20, 16);




    glRotatef((GLfloat) year, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(2.0, 0.0, 0.0); // Translate to distance from sun
    glRotatef((GLfloat) day, 0.0, 1.0, 0.0); // Rotate around y-axis
    glColor3f(0.0, 0.0, 1.0); // Set color to blue
    glutSolidSphere(0.2, 10, 8); // Draw planet

    // Draw moon
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPushMatrix();
    glRotatef((GLfloat) day * 2, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(0.4, 0.0, 0.0); // Translate to distance from planet
    glutSolidSphere(0.05, 5, 4); // Draw moon
    glPopMatrix();

    glPopMatrix();


    glutSwapBuffers();
}


void displaySS(void)
{

     glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);





    // Draw stars in the background
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPointSize(2.0); // Set size of points
    glBegin(GL_POINTS);
    for (int i = 0; i < 100; i++) {
        float x = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
        float y = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
       // float z = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
            if(x>=1&&y>=1)
        {
            glVertex2f(x,y);
            glVertex2f(-x,y);
            glVertex2f(x,-y);
            glVertex2f(-x,-y);
        }

    }
    glEnd();


     glColor3f(1.0, 0.0, 0.0); // set initial color to orange
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.1415926 / 180.0; // convert angle to radians
        float x = 0.9 * cos(theta); // calculate x-coordinate of vertex
        float y = 0.9 * sin(theta); // calculate y-coordinate of vertex
        // gradually change color from red in the center to orange at the outer parts
        glColor3f(1.0, 0.0 + 0.8 * cos(theta), 0.0);
        glVertex2f(x, y);
    }
    glEnd();





    glColor3f(1.0, 0.5, 0.0); // Set color to orange

    // Draw sun
    glPushMatrix();
    glutSolidSphere(0.01, 20, 16);



    glColor3f(0.0, 1.0, 1.0); // Set color to efe
    glPushMatrix();
    glRotatef((GLfloat) kp, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(3.0, 0.0, 0.0); // Translate to distance from sun
    glutSolidSphere(0.2, 10, 8); // Draw planet
    glPopMatrix();


    glColor3f(0.0, 1.0, 0.0); // Set color to light green
    glPushMatrix();
    glRotatef(180+(GLfloat) kp, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(3.0, 0.0, 0.0); // Translate to distance from sun
    glutSolidSphere(0.2, 10, 8); // Draw planet
    glPopMatrix();



    glRotatef((GLfloat) year, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(2.0, 0.0, 0.0); // Translate to distance from sun
    glRotatef((GLfloat) day, 0.0, 1.0, 0.0); // Rotate around y-axis
    glColor3f(0.0, 0.0, 1.0); // Set color to blue
    glutSolidSphere(0.2, 10, 8); // Draw planet

    // Draw moon
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPushMatrix();
    glRotatef((GLfloat) day * 2, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(0.4, 0.0, 0.0); // Translate to distance from planet
    glutSolidSphere(0.05, 5, 4); // Draw moon
    glPopMatrix();

    glPopMatrix();


    glutSwapBuffers();
}





void displayAA(void)
{


            glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Draw stars in the background
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPointSize(2.0); // Set size of points
    glBegin(GL_POINTS);
    for (int i = 0; i < 100; i++) {
        float x = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
        float y = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
        //float z = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
            if(x>=1&&y>=1)
        {
            glVertex2f(x,y);
            glVertex2f(-x,y);
            glVertex2f(x,-y);
            glVertex2f(-x,-y);
        }

    }
    glEnd();


     glColor3f(1.0, 0.0, 0.0); // set initial color to orange
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.1415926 / 180.0; // convert angle to radians
        float x = 0.9 * cos(theta); // calculate x-coordinate of vertex
        float y = 0.9 * sin(theta); // calculate y-coordinate of vertex
        // gradually change color from red in the center to orange at the outer parts
        glColor3f(1.0, 0.0 + 0.8 * cos(theta), 0.0);
        glVertex2f(x, y);
    }
    glEnd();





    glColor3f(1.0, 0.5, 0.0); // Set color to orange

    // Draw sun
    glPushMatrix();
    glutSolidSphere(0.01, 20, 16);



    glColor3f(0.0, 1.0, 1.0); // Set color to efe
    glPushMatrix();
    glRotatef((GLfloat) -ka, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(3.0, 0.0, 0.0); // Translate to distance from sun
    glutSolidSphere(0.2, 10, 8); // Draw planet
    glPopMatrix();


    glColor3f(0.0, 1.0, 0.0); // Set color to light green
    glPushMatrix();
    glRotatef(180+(GLfloat) ka, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(3.0, 0.0, 0.0); // Translate to distance from sun
    glutSolidSphere(0.2, 10, 8); // Draw planet
    glPopMatrix();



    glRotatef((GLfloat) year, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(2.0, 0.0, 0.0); // Translate to distance from sun
    glRotatef((GLfloat) day, 0.0, 1.0, 0.0); // Rotate around y-axis
    glColor3f(0.0, 0.0, 1.0); // Set color to blue
    glutSolidSphere(0.2, 10, 8); // Draw planet

    // Draw moon
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPushMatrix();
    glRotatef((GLfloat) day * 2, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(0.4, 0.0, 0.0); // Translate to distance from planet
    glutSolidSphere(0.05, 5, 4); // Draw moon
    glPopMatrix();

    glPopMatrix();


    glutSwapBuffers();

}


void Blast(void)
{


            glClearColor(0.0,0.0,0.0,0.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Draw stars in the background
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPointSize(2.0); // Set size of points
    glBegin(GL_POINTS);
    for (int i = 0; i < 100; i++) {
        float x = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
        float y = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
        float z = 10.0 * ((float) rand() / RAND_MAX) - 1.0;
       // glVertex3f(x, y,z);
           if(x>=1&&y>=1)
        {
            glVertex2f(x,y);
            glVertex2f(-x,y);
            glVertex2f(x,-y);
            glVertex2f(-x,-y);
        }

    }
    glEnd();


    glColor3f(0,1,0);
    glPointSize(8);
    glBegin(GL_POINTS);
    glVertex2f(0.2,0.2);
    glVertex2f(0.1,0.1);
    glVertex2f(-0.2,0.2);
    glVertex2f(0.1,-0.1);
    glVertex2f(0.05,0.2);
    glEnd();

    glColor3f(0,1,0);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2f(-0.2,-0.1);
    glVertex2f(0.1,-0.2);
    glVertex2f(0.2,-0.1);
    glVertex2f(0.05,0.00);
    glEnd();


    glColor3f(0,1,1);
    glPointSize(8);
    glBegin(GL_POINTS);
    glVertex2f(-0.2,-0.2);
    glVertex2f(-0.1,-0.1);
    glVertex2f(0.2,-0.2);
    glEnd();

    glColor3f(0,1,1);
    glPointSize(5);
    glBegin(GL_POINTS);
    glVertex2f(-0.1,0.1);
    glVertex2f(-0.05,-0.2);
    glVertex2f(0.2,0.1);
    glVertex2f(-0.1,0.2);
    glVertex2f(-0.2,0.1);
    glVertex2f(0.00,0.05);
    glEnd();


     glColor3f(0,1,0);
    glPointSize(10);
    glBegin(GL_POINTS);
    glVertex3f(0.0,0.0,0.0);
     glColor3f(1.0, 0.0, 0.0); // set initial color to orange
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++) {
        float theta = i * 3.1415926 / 180.0; // convert angle to radians
        float x = 0.9 * cos(theta); // calculate x-coordinate of vertex
        float y = 0.9 * sin(theta); // calculate y-coordinate of vertex
        // gradually change color from red in the center to orange at the outer parts
        glColor3f(1.0, 0.0 + 0.8 * cos(theta), 0.0);
        glVertex2f(x, y);
    }
    glEnd();





    glColor3f(1.0, 0.5, 0.0); // Set color to orange

    // Draw sun
    glPushMatrix();
    glutSolidSphere(0.01, 20, 16);



    glColor3f(0.0, 0.0, 0.0); // Set color to efe
    glPushMatrix();
    glRotatef((GLfloat)0 , 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(3.0, 0.0, 0.0); // Translate to distance from sun
    glutSolidSphere(0.2, 10, 8); // Draw planet
    glPopMatrix();


    glColor3f(0.0, 0.0, 0.0); // Set color to light green
    glPushMatrix();
    glRotatef(180+(GLfloat)0 , 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(3.0, 0.0, 0.0); // Translate to distance from sun
    glutSolidSphere(0.2, 10, 8); // Draw planet
    glPopMatrix();



    glRotatef((GLfloat) year, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(2.0, 0.0, 0.0); // Translate to distance from sun
    glRotatef((GLfloat) day, 0.0, 1.0, 0.0); // Rotate around y-axis
    glColor3f(0.0, 0.0, 1.0); // Set color to blue
    glutSolidSphere(0.2, 10, 8); // Draw planet

    // Draw moon
    glColor3f(1.0, 1.0, 1.0); // Set color to white
    glPushMatrix();
    glRotatef((GLfloat) day * 2, 0.0, 1.0, 0.0); // Rotate around y-axis
    glTranslatef(0.4, 0.0, 0.0); // Translate to distance from planet
    glutSolidSphere(0.05, 5, 4); // Draw moon
    glPopMatrix();

    glPopMatrix();


    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glRasterPos2i(180, 377);

    // Draw text using glutBitmapString
    glColor3f(1.0, 0.0, 0.0); // Set color to white
    char* text = "Planets blasted! This lead to destroy of the ability of earth to rotate and revolve!!\n THE END!!!!";
    int len = strlen(text);
    for (int i = 0; i < len; i++) {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    glPopMatrix();
    glMatrixMode(GL_PROJECTION);
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);


    glutSwapBuffers();

}





void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei) w, (GLsizei) h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}

void keyboard(unsigned char key, int x, int y)
{
    if(bl>=17)
    {
        glutReshapeFunc(reshape);
            glutDisplayFunc(Blast);
            glutPostRedisplay();
    }
    else{
    switch (key) {
        case 'H':
            glutDisplayFunc(display2);
            glutPostRedisplay();
            break;
        case 'h':
            glutDisplayFunc(display2);
            glutPostRedisplay();
            break;
        case 'n':
            glutReshapeFunc(reshape);
            glutDisplayFunc(display);
            glutPostRedisplay();
            break;
        case 'N':
            glutReshapeFunc(reshape);
            glutDisplayFunc(display);
            glutPostRedisplay();

            break;
        case 'd':
            day = (day + 10) % 360;
            glutPostRedisplay();
            break;
        case 'D':
            day = (day - 10) % 360;
            glutPostRedisplay();
            break;

        case 'y':
            year = (year + 5) % 360;
            glutPostRedisplay();
            break;
        case 'Y':
            year = (year - 5) % 360;
            glutPostRedisplay();
            break;
        case 'S':
            glutReshapeFunc(reshape);
            glutDisplayFunc(displaySS);
            glutPostRedisplay();
            break;
        case 's':
            glutReshapeFunc(reshape);
            glutDisplayFunc(displaySS);
            glutPostRedisplay();
            break;
        case 'K':
            kp = (kp + 5) % 360;
            glutPostRedisplay();
        break;
        case 'k':
            kp = (kp + 5) % 360;
            glutPostRedisplay();
        break;
        case 'A':
            glutReshapeFunc(reshape);
            glutDisplayFunc(displayAA);
            glutPostRedisplay();
            break;
        case 'a':
            glutReshapeFunc(reshape);
            glutDisplayFunc(displayAA);
            glutPostRedisplay();
            break;
        case 'B':
            ka = (ka + 5) % 360;
            glutPostRedisplay();
            bl++;
        break;
        case 'b':
            ka = (ka + 5) % 360;
            glutPostRedisplay();
            bl++;
        break;
        default:
            break;
    }
    }

}







int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1500, 800);
    glutCreateWindow("Solar System");
    myinit();
    glutDisplayFunc(display1);
    glutKeyboardFunc(keyboard);





    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
    return 0;
}
