#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#define PI     3.14159265358979323846

void init() {
   glClearColor(0.6f, 0.9f, 0.0f, 0.0f);
}

GLfloat positionOfCloud1 = 0.0f;
GLfloat speedOfCloud1 = 0.001f;
void cloudAnimation1(int value)
{
    if(positionOfCloud1 < -1.7f)
        positionOfCloud1 = 0.6f;

    positionOfCloud1 -= speedOfCloud1;
    glutPostRedisplay();
    glutTimerFunc(40, cloudAnimation1, 0);
}

GLfloat positionOfCloud2 = 0.0f;
GLfloat speedOfCloud2 = 0.002f;
void cloudAnimation2(int value)
{
    if(positionOfCloud2 < -0.6f)
        positionOfCloud2 = 1.6f;

    positionOfCloud2 -= speedOfCloud2;
    glutPostRedisplay();
    glutTimerFunc(40, cloudAnimation2, 0);
}

GLfloat positionOfCloud3 = 0.0f;
GLfloat speedOfCloud3 = 0.001f;
void cloudAnimation3(int value)
{
    if(positionOfCloud3 < -1.2f)
        positionOfCloud3 = 1.1f;

    positionOfCloud3 -= speedOfCloud3;
    glutPostRedisplay();
    glutTimerFunc(40, cloudAnimation3, 0);
}

void daysky()
{
    glBegin(GL_QUADS);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
    glVertex2f(-1.0,0.5);
    glVertex2f(1.0,0.5);
    glColor4f(0.6f, 0.8f, 1.0f, 1.0f);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();

}

GLfloat positionOfBird1 = 0.0f;
GLfloat speedOfBird1 = 0.004f;
void birdAnimation1(int value)
{
    if(positionOfBird1 > 0.9f)
        positionOfBird1 = -1.2f;

    positionOfBird1 += speedOfBird1;
    glutPostRedisplay();
    glutTimerFunc(20, birdAnimation1, 0);
}

void bird1()//yellow bird
{
    glPushMatrix();
    glTranslatef(positionOfBird1, 0.0f, 0.0f);
    glTranslated(0.0,0.05, 0.0);
    int i;

	GLfloat mm=0.182f; GLfloat nn=.801f; GLfloat radiusmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 190, 0);
		glVertex2f(mm, nn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mm + (radiusmm * cos(i *  twicePi / triangleAmount)),
			    nn + (radiusmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(0.1f,0.8f);
    glVertex2f(0.11f,0.79f);
    glVertex2f(0.12f,0.78f);
    glVertex2f(0.16f,0.77f);
    glVertex2f(0.19f,0.79f);
    glVertex2f(0.201f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.15f,0.8f);
    glVertex2f(0.14f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.175f,0.8f);
    glVertex2f(0.144f,0.8f);
    glVertex2f(0.12f,0.83f);
    glEnd();
    glPopMatrix();
}

GLfloat positionOfBird2 = 0.0f;
GLfloat speedOfBird2 = 0.003f;
void birdAnimation2(int value)
{
    if(positionOfBird2 > 1.1f)
        positionOfBird2 = -1.1f;

    positionOfBird2 += speedOfBird2;
    glutPostRedisplay();
    glutTimerFunc(20, birdAnimation2, 0);
}

void bird2()//blue bird
{
    glPushMatrix();
    glTranslatef(positionOfBird2, 0.0f, 0.0f);
    int i;
	GLfloat mmm=0.062f; GLfloat nnn=.801f; GLfloat radiusmmm =.01f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0, 210, 255);
		glVertex2f(mmm, nnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.02f,0.8f);
    glVertex2f(-0.01f,0.79f);
    glVertex2f(0.0f,0.78f);
    glVertex2f(0.04f,0.77f);
    glVertex2f(0.07f,0.79f);
    glVertex2f(0.081f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.03f,0.8f);
    glVertex2f(0.02f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(0.055f,0.8f);
    glVertex2f(0.024f,0.8f);
    glVertex2f(0.0f,0.83f);
    glEnd();
    glPopMatrix();
}

GLfloat positionOfBird3 = 0.0f;
GLfloat speedOfBird3 = 0.005f;
void birdAnimation3(int value)
{
    if(positionOfBird3 > 1.7f)
        positionOfBird3 = -0.5f;

    positionOfBird3 += speedOfBird3;
    glutPostRedisplay();
    glutTimerFunc(20, birdAnimation3, 0);
}

void bird3()//pink bird
{
    glPushMatrix();
    glTranslatef(positionOfBird3, 0.0f, 0.0f);
    int i;
	GLfloat mmmm=-0.638f; GLfloat nnnn=.801f; GLfloat radiusmmm =.01f;
    int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 140, 150);
		glVertex2f(mmmm,nnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(-0.72f,0.8f);
    glVertex2f(-0.71f,0.79f);
    glVertex2f(-0.7f,0.78f);
    glVertex2f(-0.66f,0.77f);
    glVertex2f(-0.63f,0.79f);
    glVertex2f(-0.619f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.67f,0.8f);
    glVertex2f(-0.68f,0.84f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.645f,0.8f);
    glVertex2f(-0.676f,0.8f);
    glVertex2f(-0.7f,0.83f);
    glEnd();
    glPopMatrix();
}

GLfloat positionOfBird4 = 0.0f;
GLfloat speedOfBird4 = 0.003f;
void birdAnimation4(int value)
{
    if(positionOfBird4 > 1.7f)
        positionOfBird4 = -0.6f;

    positionOfBird4 += speedOfBird4;
    glutPostRedisplay();
    glutTimerFunc(20, birdAnimation4, 0);
}

void bird4()//gray bird
{
    glPushMatrix();
    glTranslatef(positionOfBird4, 0.0f, 0.0f);
    glTranslated(0.05,0.0,0.0);
    int i;
    GLfloat mmmmm=-0.518f; GLfloat nnnnn=.801f; GLfloat radiusmmm =.01f;
    int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(120, 120, 140);
		glVertex2f(mmmmm, nnnnn); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            mmmmm + (radiusmmm * cos(i *  twicePi / triangleAmount)),
			    nnnnn + (radiusmmm * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
    glBegin(GL_POLYGON);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.59f,0.79f);
    glVertex2f(-0.58f,0.78f);
    glVertex2f(-0.54f,0.77f);
    glVertex2f(-0.51f,0.79f);
    glVertex2f(-0.499f,0.8f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.55f,0.8f);
    glVertex2f(-0.56f,0.84f);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(242, 242, 242 );
    glVertex2f(-0.525f,0.8f);
    glVertex2f(-0.556f,0.8f);
    glVertex2f(-0.58f,0.83f);
    glEnd();
    glPopMatrix();
}
void nightsky()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.0,0.5);
    glVertex2f(1.0,0.5);
    glVertex2f(1.0,1.0);
    glVertex2f(-1.0,1.0);
    glEnd();

}

void stars()
{
    glPointSize( 2.5 );
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    glVertex2f(0.8f,0.95f);
    glVertex2f(0.9f,0.9f);
    glVertex2f(0.95f,0.7f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.7f,0.9f);
    glVertex2f(0.6f,0.8f);
    glVertex2f(0.5f,0.75f);
    glVertex2f(0.4f,0.9f);
    glVertex2f(0.3f,0.7f);
    glVertex2f(0.25f,0.9f);
    glVertex2f(0.25f,0.7f);
    glVertex2f(0.1f,0.9f);
    glVertex2f(0.15f,0.75f);
    glVertex2f(0.0f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.4f,0.8f);
    glVertex2f(-0.8f,0.95f);
    glVertex2f(-0.9f,0.9f);
    glVertex2f(-0.95f,0.7f);
    glVertex2f(-0.8f,0.8f);
    glVertex2f(-0.7f,0.9f);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.5f,0.75f);
    glVertex2f(-0.4f,0.9f);
    glVertex2f(-0.3f,0.7f);
    glVertex2f(-0.25f,0.9f);
    glVertex2f(-0.25f,0.7f);
    glVertex2f(-0.15f,0.75f);
    glVertex2f(-0.1f,0.9f);
    glEnd();

}

void sun()
{
    int i;

    GLfloat x= -0.84f; GLfloat y=0.88f; GLfloat radius =0.1f;
    int triangleAmount = 100;
    glColor3f(1.0f, 1.0f, 0.0f);
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

}

void moon()
{
    int i;

    GLfloat x= -0.87f; GLfloat y=0.88f; GLfloat radius =0.07f;
    int triangleAmount = 100;
    glColor3f(1.0f, 1.0f, 1.0f);
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();

}

void cloud1()
{
    glPushMatrix();
    glTranslatef(positionOfCloud1, 0.05f, 0.0f);
        int i;

        GLfloat x=.5f; GLfloat y=.90f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255, 240, 255);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=.55f; GLfloat b=.87f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=.45f; GLfloat d=.87f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=.52f; GLfloat f=.84f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=.6f; GLfloat h=.86f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}

void cloud2()
{
    glPushMatrix();
    glTranslatef(positionOfCloud2, -0.02f, 0.0f);

        int i;

        GLfloat x=-.5f; GLfloat y=.84f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255, 240, 255);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=-.55f; GLfloat b=.81f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=-.45f; GLfloat d=.81f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=-.52f; GLfloat f=.78f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=-.6f; GLfloat h=.80f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}

void cloud3()
{
    glPushMatrix();
    glTranslatef(positionOfCloud3, 0.0f, 0.0f);

        int i;

        GLfloat x=0.0f; GLfloat y=.86f; GLfloat radius =.05f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
            glColor3ub(255, 240, 255);
            glVertex2f(x, y); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        x + (radius * cos(i *  twicePi / triangleAmount)),
                    y + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat a=.05f; GLfloat b=.83f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(a, b); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        a + (radius * cos(i *  twicePi / triangleAmount)),
                    b + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat c=-0.05f; GLfloat d=.83f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(c, d); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        c + (radius * cos(i *  twicePi / triangleAmount)),
                    d + (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat e=.02f; GLfloat f=.8f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(e, f); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        e + (radius * cos(i *  twicePi / triangleAmount)),
                    f+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();

        GLfloat g=.1f; GLfloat h=.82f;

        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(g, h); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f(
                        g + (radius * cos(i *  twicePi / triangleAmount)),
                    h+ (radius * sin(i * twicePi / triangleAmount))
                );
            }
        glEnd();
    glPopMatrix();
}



void hill()
{
    glColor3f(0.3f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 1.f,0.50f);
    glVertex2f( 0.88f,.50f);
    glVertex2f(.94f,.64f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.8f, 0.0f);
    glVertex2f(0.80,0.52);
    glVertex2f(.88,0.50);
    glVertex2f(.90,0.52);
    glVertex2f(0.86,0.58);
    glEnd();

    glColor3f(0.3f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 0.76f,0.55f);
    glVertex2f( 0.88f,.50f);
    glVertex2f(.70f,.50f);
    glEnd();
    // clear the screenn

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.8f, 0.0f);
    glVertex2f(0.65,0.52);
    glVertex2f(.70,0.50);
    glVertex2f(.75,0.54);
    glVertex2f(0.70,0.59);
    glEnd();

    glColor3f(0.3f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 0.54f,0.50f);
    glVertex2f( 0.40f,.50f);
    glVertex2f(.48f,.56f);
    glEnd();
    // clear the screenn


    glColor3f(0.3f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex2f( 0.40f,0.50f);
 glVertex2f( 0.24f,.50f);
   glVertex2f(.30f,.60f);
   glEnd();
    // clear the screenn

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.8f, 0.0f);
    glVertex2f(0.16,0.52);
    glVertex2f(.24,0.49);
    glVertex2f(.27,0.54);
    glVertex2f(0.20,0.60);
    glEnd();

    glColor3f(0.3f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex2f( -0.02f,0.50f);
 glVertex2f( 0.24f,.50f);
   glVertex2f(.13f,.57f);
   glEnd();// clear the screenn

    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.8f, 0.0f);
    glVertex2f(-0.10,0.53);
    glVertex2f(-0.02,0.50);
    glVertex2f(.06,0.53);
    glVertex2f(-0.02,0.59);
    glEnd();

    glColor3f(0.3f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLES);
    glVertex2f( -0.02f,0.50f);
    glVertex2f( -0.28f,.50f);
    glVertex2f(0-.16f,.59f);
    glEnd();
    // clear the screenn


    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.8f, 0.0f);
    glVertex2f(-0.36,0.53);
    glVertex2f(-0.32,0.50);
    glVertex2f(-.20,0.51);
    glVertex2f(-0.28,0.65);
    glEnd();

    glColor3f(0.3f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex2f( -0.28f,0.50f);
 glVertex2f( -0.50f,.50f);
   glVertex2f(-0.38f,.59f);
   glEnd();// clear the screenn


    glColor3f(0.3f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex2f( -0.66f,0.50f);
 glVertex2f( -0.50f,.50f);
   glVertex2f(-0.57f,.59f);
   glEnd();
    // clear the screenn


    glColor3f(0.3f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex2f( -0.66f,0.50f);
 glVertex2f( -0.74f,.50f);
   glVertex2f(-0.72f,.54f);
   glEnd();
    // clear the screenn


    glColor3f(0.3f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex2f( -0.90f,0.50f);
 glVertex2f( -0.74f,.50f);
   glVertex2f(-0.82f,.55f);
   glEnd();
    // clear the screenn


    glColor3f(0.3f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glVertex2f( -0.90f,0.50f);
 glVertex2f( -1.f,.50f);
   glVertex2f(-1.f,.55f);
   glEnd();
    // clear the screenn
}

void left_side_house()
{
    //left side small house
     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-0.70,0.50);
    glVertex2f(-0.60,0.50);
    glVertex2f(-0.60,0.58);
    glVertex2f(-0.70,0.58);
    glEnd();

    //window
     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.67,0.52);
    glVertex2f(-0.63,0.52);
    glVertex2f(-0.63,0.55);
    glVertex2f(-0.67,0.55);
    glEnd();

    //roof
    glColor3f(0.0f, 0.9f, 0.3f);
glBegin(GL_TRIANGLES);
glVertex2f( -0.60f,0.58f);
 glVertex2f( -0.70f,.58f);
   glVertex2f(0-.65f,.65f);
   glEnd();
    // clear the screenn

   ////left side big house


   glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.0f);
    glVertex2f(-0.50,0.50);
    glVertex2f(-0.30,0.50);
    glVertex2f(-0.30,0.60);
    glVertex2f(-0.50,0.60);
    glEnd();

//roof
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.9f);
    glVertex2f(-0.50,0.60);
    glVertex2f(-0.30,0.60);
    glVertex2f(-0.33,0.65);
    glVertex2f(-0.47,0.65);
    glEnd();

    //lest side window
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.9f);
    glVertex2f(-0.48,0.52);
    glVertex2f(-0.45,0.52);
    glVertex2f(-0.45,0.57);
    glVertex2f(-0.48,0.57);
    glEnd();
    //right side window
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.9f);
    glVertex2f(-0.33,0.52);
    glVertex2f(-0.36,0.52);
    glVertex2f(-0.36,0.57);
    glVertex2f(-0.33,0.57);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.9f);
    glVertex2f(-0.42,0.50);
    glVertex2f(-0.40,0.50);
    glVertex2f(-0.40,0.58);
    glVertex2f(-0.42,0.58);
    glEnd();
//
 glBegin(GL_QUADS);
    glColor3f(0.0f, 0.9f, 0.3f);
    glVertex2f(-0.26,0.50);
    glVertex2f(-0.18,0.50);
    glVertex2f(-0.18,0.58);
    glVertex2f(-0.26,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f( -0.18f,0.58f);
    glVertex2f( -0.26f,.58f);
    glVertex2f(-0.22f,.64f);
    glEnd();

}
void right_side_house()
{
    //house
    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.3f);
    glVertex2f(0.50,0.50);
    glVertex2f(0.70,0.50);
    glVertex2f(0.70,0.62);
    glVertex2f(0.50,0.62);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.5f, 0.6f, 0.7f);
    glVertex2f(0.50,0.62);
    glVertex2f(0.70,0.62);
    glVertex2f(0.66,0.65);
    glVertex2f(0.54,0.65);
    glEnd();

// left window
 glBegin(GL_QUADS);
    glColor3f(0.7f, 0.6f, 0.7f);
    glVertex2f(0.52,0.55);
    glVertex2f(0.55,0.55);
    glVertex2f(0.55,0.58);
    glVertex2f(0.52,0.58);
    glEnd();

//right side window
 glBegin(GL_QUADS);
    glColor3f(0.7f, 0.6f, 0.7f);
    glVertex2f(0.65,0.55);
    glVertex2f(0.68,0.55);
    glVertex2f(0.68,0.58);
    glVertex2f(0.65,0.58);
    glEnd();

    //door
    glBegin(GL_QUADS);
    glColor3f(0.7f, 0.6f, 0.7f);
    glVertex2f(0.58,0.50);
    glVertex2f(0.62,0.50);
    glVertex2f(0.62,0.58);
    glVertex2f(0.58,0.58);
    glEnd();

    //paddy
glBegin(GL_QUADS);
    glColor3f(0.0f, 0.9f, 0.3f);
    glVertex2f(0.36,0.50);
    glVertex2f(0.44,0.50);
    glVertex2f(0.44,0.58);
    glVertex2f(0.36,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 0.44f,0.58f);
    glVertex2f( 0.36f,.58f);
    glVertex2f(0.40f,.62f);
    glEnd();


}

void small_tree()
{
    //tree
     glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(0.88,0.50);
    glVertex2f(0.87,0.50);
    glVertex2f(0.87,0.55);
    glVertex2f(0.88,0.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.55);
    glVertex2f(0.92,0.55);
    glVertex2f(0.90,0.56);
    glVertex2f(0.85,0.56);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.56);
    glVertex2f(0.92,0.56);
    glVertex2f(0.90,0.58);
    glVertex2f(0.85,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 0.90f,0.58f);
    glVertex2f( 0.85f,.58f);
    glVertex2f(0.87f,.62f);
    glPopMatrix();
    glEnd();
    //tree end
}

void small_tree2()
{
    glPushMatrix();
    glTranslated(-0.07,0.0,0.0);
     glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(0.88,0.50);
    glVertex2f(0.87,0.50);
    glVertex2f(0.87,0.55);
    glVertex2f(0.88,0.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.55);
    glVertex2f(0.92,0.55);
    glVertex2f(0.90,0.56);
    glVertex2f(0.85,0.56);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.56);
    glVertex2f(0.92,0.56);
    glVertex2f(0.90,0.58);
    glVertex2f(0.85,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 0.90f,0.58f);
    glVertex2f( 0.85f,.58f);
    glVertex2f(0.87f,.62f);
    glPopMatrix();
    glEnd();
    glPopMatrix();
}

void small_tree3()
{
    glPushMatrix();
    glTranslated(-0.16,0.0,0.0);
     glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(0.88,0.50);
    glVertex2f(0.87,0.50);
    glVertex2f(0.87,0.55);
    glVertex2f(0.88,0.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.55);
    glVertex2f(0.92,0.55);
    glVertex2f(0.90,0.56);
    glVertex2f(0.85,0.56);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.56);
    glVertex2f(0.92,0.56);
    glVertex2f(0.90,0.58);
    glVertex2f(0.85,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 0.90f,0.58f);
    glVertex2f( 0.85f,.58f);
    glVertex2f(0.87f,.62f);
    glPopMatrix();
    glEnd();
    glPopMatrix();
}

void small_tree4()
{
    glPushMatrix();
    glTranslated(-0.85,0.01,0.0);
     glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(0.88,0.50);
    glVertex2f(0.87,0.50);
    glVertex2f(0.87,0.55);
    glVertex2f(0.88,0.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.55);
    glVertex2f(0.92,0.55);
    glVertex2f(0.90,0.56);
    glVertex2f(0.85,0.56);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.56);
    glVertex2f(0.92,0.56);
    glVertex2f(0.90,0.58);
    glVertex2f(0.85,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 0.90f,0.58f);
    glVertex2f( 0.85f,.58f);
    glVertex2f(0.87f,.62f);
    glPopMatrix();
    glEnd();
    glPopMatrix();
}

void small_tree5()
{
    glPushMatrix();
    glTranslated(-0.9,0.0,0.0);
     glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(0.88,0.50);
    glVertex2f(0.87,0.50);
    glVertex2f(0.87,0.55);
    glVertex2f(0.88,0.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.55);
    glVertex2f(0.92,0.55);
    glVertex2f(0.90,0.56);
    glVertex2f(0.85,0.56);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.83,0.56);
    glVertex2f(0.92,0.56);
    glVertex2f(0.90,0.58);
    glVertex2f(0.85,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f( 0.90f,0.58f);
    glVertex2f( 0.85f,.58f);
    glVertex2f(0.87f,.62f);
    glPopMatrix();
    glEnd();
    glPopMatrix();
}

void small_tree6()
{
    glPushMatrix();
    glTranslated(-0.05,0.01,0.0);
     glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(-0.88,0.50);
    glVertex2f(-0.87,0.50);
    glVertex2f(-0.87,0.55);
    glVertex2f(-0.88,0.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(-0.83,0.55);
    glVertex2f(-0.92,0.55);
    glVertex2f(-0.90,0.56);
    glVertex2f(-0.85,0.56);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(-0.83,0.56);
    glVertex2f(-0.92,0.56);
    glVertex2f(-0.90,0.58);
    glVertex2f(-0.85,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.90f,0.58f);
    glVertex2f(-0.85f,.58f);
    glVertex2f(-0.87f,.62f);
    glPopMatrix();
    glEnd();
    glPopMatrix();
}

void small_tree7()
{
    glPushMatrix();
    glTranslated(0.06,0.03,0.0);
     glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(-0.88,0.50);
    glVertex2f(-0.87,0.50);
    glVertex2f(-0.87,0.55);
    glVertex2f(-0.88,0.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(-0.83,0.55);
    glVertex2f(-0.92,0.55);
    glVertex2f(-0.90,0.56);
    glVertex2f(-0.85,0.56);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(-0.83,0.56);
    glVertex2f(-0.92,0.56);
    glVertex2f(-0.90,0.58);
    glVertex2f(-0.85,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.90f,0.58f);
    glVertex2f(-0.85f,.58f);
    glVertex2f(-0.87f,.62f);
    glPopMatrix();
    glEnd();
    glPopMatrix();
}

void small_tree8()
{
    glPushMatrix();
    glTranslated(0.12,0.00,0.0);
     glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(-0.88,0.50);
    glVertex2f(-0.87,0.50);
    glVertex2f(-0.87,0.55);
    glVertex2f(-0.88,0.55);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(-0.83,0.55);
    glVertex2f(-0.92,0.55);
    glVertex2f(-0.90,0.56);
    glVertex2f(-0.85,0.56);
    glEnd();

     glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(-0.83,0.56);
    glVertex2f(-0.92,0.56);
    glVertex2f(-0.90,0.58);
    glVertex2f(-0.85,0.58);
    glEnd();

    glColor3f(0.0f, 0.9f, 0.3f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.90f,0.58f);
    glVertex2f(-0.85f,.58f);
    glVertex2f(-0.87f,.62f);
    glPopMatrix();
    glEnd();
    glPopMatrix();
}


void river()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 1.0f);
    glVertex2f(-1.0,0.5);
    glVertex2f(1.0,0.5);
    glVertex2f(1.0,0.3);
    glVertex2f(-1.0,0.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.0f);
    glVertex2f(-1.0,0.2);
    glVertex2f(1.0,0.3);
    glVertex2f(1.0,0.2);
    glVertex2f(-1.0,0.1);
    glEnd();
}

GLfloat positionOfBoat1 = 0.0f;
GLfloat speedOfBoat1 = 0.001f;
void boatAnimation1(int value)
{
    if(positionOfBoat1 < -1.8f)
        positionOfBoat1 = 0.5f;

    positionOfBoat1 -= speedOfBoat1;
    glutPostRedisplay();
    glutTimerFunc(40, boatAnimation1, 0);
}

GLfloat positionOfBoat2 = 0.0f;
GLfloat speedOfBoat2 = 0.002f;
void boatAnimation2(int value)
{
    if(positionOfBoat2 < -0.7f)
        positionOfBoat2 = 1.5f;

    positionOfBoat2 -= speedOfBoat2;
    glutPostRedisplay();
    glutTimerFunc(40, boatAnimation2, 0);
}


void boat()
{
    glPushMatrix();
       glTranslatef(positionOfBoat1, 0.0f, 0.0f);
       glTranslatef(0.35f,0.49f,0.0f);
       glScalef(0.5,0.5,0);
       glBegin(GL_QUADS);     //1stBoat
       glColor3ub(1, 16, 2); //Black
       glVertex2f(0.8f,-0.1f);
       glVertex2f(0.9f,0.0f);
       glVertex2f(0.5f,0.0f);
       glVertex2f(0.6f,-0.1f);
       glEnd();

       glBegin(GL_QUADS);  //Red
       glColor3ub(249, 51, 3);
       glVertex2f(0.8f,0.0f);
       glVertex2f(0.6f,0.0f);
       glVertex2f(0.65f,0.075f);
       glVertex2f(0.75f,0.075f);
       glEnd();
       glLoadIdentity();
    glPopMatrix();

       //secondboat
    glPushMatrix();
       glTranslatef(positionOfBoat2, 0.0f, 0.0f);
       glTranslatef(-0.8f,0.445f,0.0f);
       glScalef(0.5,0.5,0);
       glBegin(GL_QUADS);     //Boat
       glColor3ub(4, 12, 64); //Black
       glVertex2f(0.8f,-0.1f);
       glVertex2f(0.9f,0.0f);
       glVertex2f(0.5f,0.0f);
       glVertex2f(0.6f,-0.1f);
       glEnd();

       glBegin(GL_QUADS);  //orange
       glColor3ub(249,166,4);
       glVertex2f(0.8f,0.0f);
       glVertex2f(0.6f,0.0f);
       glVertex2f(0.65f,0.075f);
       glVertex2f(0.75f,0.075f);
       glEnd();
    glPopMatrix();
       glLoadIdentity();
}

GLfloat positionOfBoat3 = 0.0f;
GLfloat speedOfBoat3 = 0.003f;
void boatAnimation3(int value)
{
    if(positionOfBoat3 < -1.2f)
        positionOfBoat3 = 1.2f;

    positionOfBoat3 -= speedOfBoat3;
    glutPostRedisplay();
    glutTimerFunc(40, boatAnimation3, 0);
}

void boat2()
{
    glPushMatrix();
    glTranslatef(positionOfBoat3, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);//black
	glVertex2f(-0.2f, 0.38f);
	glVertex2f(-0.15f, 0.33f);
	glVertex2f(0.15f, 0.33f);
    glVertex2f(0.2f, 0.38f);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 0);
	glVertex2f(-0.13f, 0.38f);
	glVertex2f(-0.11f,0.46f);
	glVertex2f(-0.088f, 0.46f);
	glVertex2f(0.13f, 0.46f);
	glVertex2f(0.14f, 0.47f);
    glVertex2f(0.15f, 0.38f);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,25,25);
	glVertex2f(-0.038f, 0.55f);
	glVertex2f(-0.038f, 0.71f);
	glVertex2f(-0.035f, 0.73f);
	glVertex2f(0.064f, 0.71f);
	glVertex2f(0.065f, 0.69f);
    glVertex2f(0.065f, 0.53f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.46f);
	glVertex2f(0.0f, 0.77f);
	glVertex2f(0.01f, 0.77f);
	glVertex2f(0.01f, 0.46f);
	glEnd();
	glPopMatrix();
}

void road()
{
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.6f, 0.6f);
    glVertex2f(-1.0,0.1);
    glVertex2f(1.0,0.2);
    glVertex2f(1.0,-0.2);
    glVertex2f(-1.0,-0.4);
    glEnd();

     //divider
    glBegin(GL_LINES);
    glLineWidth(250);

   glColor3ub(246,241,249);
   glVertex2f(1.0f,0.0f);
   glVertex2f(-1.0f,-0.2f);
   glEnd();
}

GLfloat positionOfCar1x = 0.0f;
GLfloat speedOfCar1x = 0.004f;
GLfloat positionOfCar1y = 0.0f;
GLfloat speedOfCar1y = 0.001f;
void carAnimation1(int value)
{
    if(positionOfCar1x > 1.9f)
        positionOfCar1x = -0.3f;

    if(positionOfCar1y > 0.1f)
        positionOfCar1y = 0.00f;

    positionOfCar1x += speedOfCar1x;
    positionOfCar1y += speedOfCar1y;
    glutPostRedisplay();
    glutTimerFunc(20, carAnimation1, 0);
}

GLfloat positionOfCar2x = 0.0f;
GLfloat speedOfCar2x = 0.005f;
void carAnimation2(int value)
{
    if(positionOfCar2x < -1.9f)
        positionOfCar2x = 0.3f;

    positionOfCar2x -= speedOfCar2x;
    glutPostRedisplay();
    glutTimerFunc(20, carAnimation2, 0);
}

void car()
{
    glPushMatrix();
    glTranslatef(positionOfCar1x, positionOfCar1y, 0.0f);
    glTranslatef(-0.8f,0.075f,0.0f);
     glScalef(0.5,0.5,0);
    glBegin(GL_QUADS);
   glColor3ub(89, 0, 67); // pink color
   glVertex2f(-0.24f,-0.18f);    // x, y
   glVertex2f(0.255f, -0.18f);
   glVertex2f(0.255f, -0.1f);
   glVertex2f(-0.24f, -0.1f);
   glEnd();
       glBegin(GL_QUADS); //headlight
   glColor3ub(246, 241, 249); //white
   glVertex2f(0.23f,-0.14f);    // x, y
   glVertex2f(0.255f, -0.14f);
   glVertex2f(0.255f, -0.1f);
   glVertex2f(0.23f, -0.1f);
   glEnd();


   // pink Roof //
   glBegin(GL_QUADS);
   glColor3ub(89, 0, 67); // pink color
   glVertex2f(-0.16f,-0.1f);    // x, y
   glVertex2f(0.18f, -0.1f);
   glVertex2f(0.13f, -0.0165f);
   glVertex2f(-0.1f, -0.0165f);
   glEnd();


   // Blue Inside Glass //
   glBegin(GL_QUADS);
   glColor3ub(63, 40, 156); //  color
   glVertex2f(-0.13f,-0.1f);    // x, y
   glVertex2f(0.15f, -0.1f);
   glVertex2f(0.10f, -0.03f);
   glVertex2f(-0.07f, -0.03f);
   glEnd();


   // Right Wheel
GLfloat x=0.14;  GLfloat y=-0.18f; GLfloat radius =0.060f;

GLfloat twicePi = 2.0f * PI;
   glColor3ub(26, 22, 22);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(int i = 0; i <=20;i++)
           {
glVertex2f
(
               x + (radius * cos(i *  twicePi / 20)),
   y + (radius * sin(i * twicePi / 20))
);
}
glEnd();


// White Circle inside Right Wheel
x=0.14;  y=-0.18f; radius =0.025f;

twicePi = 2.0f * PI;
   glColor3ub(255, 255, 255);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(int i = 0; i <=20;i++)
           {
glVertex2f
(
               x + (radius * cos(i *  twicePi / 20)),
   y + (radius * sin(i * twicePi / 20))
);
}
glEnd();





// Left Wheel
x=-0.14;  y=-0.18f; radius =0.060f;

twicePi = 2.0f * PI;
   glColor3ub(26, 22, 22);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(int i = 0; i <=20;i++)
           {
glVertex2f
(
               x + (radius * cos(i *  twicePi / 20)),
   y + (radius * sin(i * twicePi / 20))
);
}
glEnd();



// White Circle Inside Left Wheel
x=-0.14;  y=-0.18f; radius =0.025f;

twicePi = 2.0f * PI;
   glColor3ub(255, 255, 255);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(int i = 0; i <=20;i++)
           {
glVertex2f
(
               x + (radius * cos(i *  twicePi / 20)),
   y + (radius * sin(i * twicePi / 20))
);
}
glEnd();
glScalef(2,2,0);
glLoadIdentity();
glPopMatrix();

// second car
    glPushMatrix();
    glTranslatef(positionOfCar2x, 0.0f, 0.0f);
    glTranslatef(0.8f,-0.08f,0.0f);
     glScalef(0.5,0.5,0);
    glBegin(GL_QUADS);
   glColor3ub(124, 14, 14); // maroon color
   glVertex2f(-0.24f,-0.18f);    // x, y
   glVertex2f(0.255f, -0.18f);
   glVertex2f(0.255f, -0.1f);
   glVertex2f(-0.24f, -0.1f);
   glEnd();
       glBegin(GL_QUADS); //headlight
   glColor3ub(246, 241, 249); //white
   glVertex2f(-0.24f,-0.14f);    // x, y
   glVertex2f(-0.21f, -0.14f);
   glVertex2f(-0.21f, -0.1f);
   glVertex2f(-0.24f, -0.1f);
   glEnd();


   // Roof ///
   glBegin(GL_QUADS);
   glColor3ub(124, 14,14); // maroon color
   glVertex2f(-0.16f,-0.1f);    // x, y
   glVertex2f(0.18f, -0.1f);
   glVertex2f(0.13f, -0.0165f);
   glVertex2f(-0.1f, -0.0165f);
   glEnd();


   // Blue Inside Glass //
   glBegin(GL_QUADS);
   glColor3ub(63, 40, 156); //  color
   glVertex2f(-0.13f,-0.1f);    // x, y
   glVertex2f(0.15f, -0.1f);
   glVertex2f(0.10f, -0.03f);
   glVertex2f(-0.07f, -0.03f);
   glEnd();


   // Right Wheel
 x=0.14;   y=-0.18f;  radius =0.060f;

 twicePi = 2.0f * PI;
   glColor3ub(26, 22, 22);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(int i = 0; i <=20;i++)
           {
glVertex2f
(
               x + (radius * cos(i *  twicePi / 20)),
   y + (radius * sin(i * twicePi / 20))
);
}
glEnd();


// White Circle inside Right Wheel
x=0.14;  y=-0.18f; radius =0.025f;

twicePi = 2.0f * PI;
   glColor3ub(255, 255, 255);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(int i = 0; i <=20;i++)
           {
glVertex2f
(
               x + (radius * cos(i *  twicePi / 20)),
   y + (radius * sin(i * twicePi / 20))
);
}
glEnd();





// Left Wheel
x=-0.14;  y=-0.18f; radius =0.060f;

twicePi = 2.0f * PI;
   glColor3ub(26, 22, 22);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(int i = 0; i <=20;i++)
           {
glVertex2f
(
               x + (radius * cos(i *  twicePi / 20)),
   y + (radius * sin(i * twicePi / 20))
);
}
glEnd();



// White Circle Inside Left Wheel
x=-0.14;  y=-0.18f; radius =0.025f;

twicePi = 2.0f * PI;
   glColor3ub(255, 255, 255);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x, y); // center of circle
for(int i = 0; i <=20;i++)
           {
glVertex2f
(
               x + (radius * cos(i *  twicePi / 20)),
   y + (radius * sin(i * twicePi / 20))
);
}
glEnd();
glScalef(2,2,0);
glLoadIdentity();
glPopMatrix();
}

void park()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.6f, 0.2f);
    glVertex2f(0.3,-0.27);
    glVertex2f(1.0,-0.2);
    glColor3f(0.0f, 0.2f, 0.0f);
    glVertex2f(1.0,-1.0);
    glVertex2f(0.0,-1.0);
    glEnd();
}

void grass1()
{
    glPushMatrix();
    glTranslated(-0.12,-0.59,0.0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void grass2()
{
    glPushMatrix();
    glTranslated(-0.02,-0.39,0.0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void grass3()
{
    glPushMatrix();
    glTranslated(-0.23,-0.39,0.0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void grass4()
{
    glPushMatrix();
    glTranslated(-0.32,-0.59,0.0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void grass5()
{
    glPushMatrix();
    glTranslated(0.075,-0.50,0.0);
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 102, 0);
	glVertex2f(-.05f, -0.35f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.05f, -0.35f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.027f, -0.33f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(0.0f, -0.3f);
	glVertex2f(0.0f, -0.4f);//
	glVertex2f(-0.075f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
	glVertex2f(0.0745f, -0.37f);
	glVertex2f(-0.0f, -0.4f);//
    glEnd();
    int i;
    int triangleAmount = 20;
GLfloat twicePi = 2.0f * PI;


	GLfloat e=-.05f; GLfloat f=-.35f; GLfloat radius11 =.02f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 51, 0);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius11 * cos(i *  twicePi / triangleAmount)),
			    f+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=0.05f; GLfloat h=-0.35f;
glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 102, 0);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius11 * cos(i *  twicePi / triangleAmount)),
			    h+ (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
GLfloat a1=0.0f; GLfloat b1=-0.3f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius11 * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius11 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void building1()
{
    glBegin(GL_QUADS);
    glColor3f(0.6f, 0.2f, 0.5f);
    glVertex2f(-1.0,-1.0);
    glVertex2f(-0.80,-1.0);
    glVertex2f(-0.80,-0.20);
    glVertex2f(-1.0,-0.20);
    glEnd();


    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-0.98,-0.95);
    glVertex2f(-0.82,-0.95);
    glVertex2f(-0.82,-0.85);
    glVertex2f(-0.98,-0.85);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-0.98,-0.80);
    glVertex2f(-0.82,-0.80);
    glVertex2f(-0.82,-0.70);
    glVertex2f(-0.98,-0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-0.98,-0.65);
    glVertex2f(-0.82,-0.65);
    glVertex2f(-0.82,-0.55);
    glVertex2f(-0.98,-0.55);
    glEnd();
    glFlush();

    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-0.98,-0.50);
    glVertex2f(-0.82,-0.50);
    glVertex2f(-0.82,-0.40);
    glVertex2f(-0.98,-0.40);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(-0.98,-0.35);
    glVertex2f(-0.82,-0.35);
    glVertex2f(-0.82,-0.25);
    glVertex2f(-0.98,-0.25);
    glEnd();
}

void building2()
{
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.3f, 0.4f);
    glVertex2f(-0.80,-1.0);
    glVertex2f(-0.60,-1.0);
    glVertex2f(-0.60,-0.35);
    glVertex2f(-0.80,-0.30);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.62,-0.95);
    glVertex2f(-0.78,-0.95);
    glVertex2f(-0.78,-0.85);
    glVertex2f(-0.62,-0.85);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.62,-0.80);
    glVertex2f(-0.78,-0.80);
    glVertex2f(-0.78,-0.70);
    glVertex2f(-0.62,-0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.62,-0.65);
    glVertex2f(-0.78,-0.65);
    glVertex2f(-0.78,-0.55);
    glVertex2f(-0.62,-0.55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.62,-0.50);
    glVertex2f(-0.78,-0.50);
    glVertex2f(-0.78,-0.40);
    glVertex2f(-0.62,-0.40);
    glEnd();
}

void building3()
{
    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.5f, 0.2f);
    glVertex2f(-0.58,-1.0);
    glVertex2f(-0.38,-1.0);
    glVertex2f(-0.38,-0.25);
    glVertex2f(-0.58,-0.25);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.56,-0.98);
    glVertex2f(-0.40,-0.98);
    glVertex2f(-0.40,-0.90);
    glVertex2f(-0.56,-0.90);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.56,-0.80);
    glVertex2f(-0.40,-0.80);
    glVertex2f(-0.40,-0.70);
    glVertex2f(-0.56,-0.70);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.56,-0.60);
    glVertex2f(-0.40,-0.60);
    glVertex2f(-0.40,-0.50);
    glVertex2f(-0.56,-0.50);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.56,-0.40);
    glVertex2f(-0.40,-0.40);
    glVertex2f(-0.40,-0.30);
    glVertex2f(-0.56,-0.30);
    glEnd();
}

void bigtree()
{
    glPushMatrix();
    glTranslated(0.9,-0.6,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.72f,-0.15f);
    glVertex2f(-0.65f,-0.2f);
    glVertex2f(-0.735f,-0.17f);
    glVertex2f(-0.74f,-0.25f);
    glVertex2f(-0.775f,-0.17f);
    glVertex2f(-0.85f,-0.2f);
    glVertex2f(-0.78f,-0.15f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,-0.15f);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.72f,0.23f);
    glVertex2f(-0.72f,-0.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.76f,0.23f);
    glVertex2f(-0.76f,0.3f);
    glVertex2f(-0.74f,0.3f);
    glVertex2f(-0.74f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.74f,0.23f);
    glVertex2f(-0.71f,0.29f);
    glVertex2f(-0.7f,0.28f);
    glVertex2f(-0.72f,0.23f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(102, 51, 0);
    glVertex2f(-0.78f,0.23f);
    glVertex2f(-0.8f,0.28f);
    glVertex2f(-0.79f,0.29f);
    glVertex2f(-0.76f,0.23f);
    glEnd();

     int i;

	GLfloat x=-.75f; GLfloat y=.33f; GLfloat radius =.06f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.68f; GLfloat b=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.81f; GLfloat d=.31f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.87f; GLfloat f=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.61f; GLfloat h=.35f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat a1=-.61f; GLfloat b1=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(a1, b1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a1 + (radius * cos(i *  twicePi / triangleAmount)),
			    b1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c1=-.88f; GLfloat d1=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c1 + (radius * cos(i *  twicePi / triangleAmount)),
			    d1 + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e1=-.87f; GLfloat f1=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e1, f1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e1 + (radius * cos(i *  twicePi / triangleAmount)),
			    f1+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g1=-.61f; GLfloat h1=.4f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g1 + (radius * cos(i *  twicePi / triangleAmount)),
			    h1+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat e11=-.64f; GLfloat f11=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e11, f11); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e11 + (radius * cos(i *  twicePi / triangleAmount)),
			    f11+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e12=-.75f; GLfloat f12=.44f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e12, f12); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e12 + (radius * cos(i *  twicePi / triangleAmount)),
			    f12+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	 glBegin(GL_QUADS);
    glColor3ub(51, 204, 51);
    glVertex2f(-0.85f,0.33f);
    glVertex2f(-0.85f,0.44f);
    glVertex2f(-0.65f,0.44f);
    glVertex2f(-0.65f,0.33f);
    glEnd();

    GLfloat e123=-.8f; GLfloat f123=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e123, f123); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e123 + (radius * cos(i *  twicePi / triangleAmount)),
			    f123+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat e1232=-.7f; GLfloat f1232=.5f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(51, 204, 51);
		glVertex2f(e1232, f1232); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e1232 + (radius * cos(i *  twicePi / triangleAmount)),
			    f1232+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void tree()
{
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(-0.35,-0.98);
    glVertex2f(-0.30,-0.98);
    glVertex2f(-0.30,-0.60);
    glVertex2f(-0.35,-0.60);
    glEnd();

    int i;

	GLfloat x=-0.38f; GLfloat y=-0.63f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=-0.32f; GLfloat b=-0.65f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.27f; GLfloat d=-0.63f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-0.30f; GLfloat h=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat j=-0.36f; GLfloat k=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(j, k); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j + (radius * cos(i *  twicePi / triangleAmount)),
			    k + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    GLfloat l=-0.33f; GLfloat m=-0.49f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(l, m); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            l + (radius * cos(i *  twicePi / triangleAmount)),
			    m + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void tree2()
{
    glPushMatrix();
    glTranslated(0.1,0.2,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(-0.35,-0.98);
    glVertex2f(-0.30,-0.98);
    glVertex2f(-0.30,-0.60);
    glVertex2f(-0.35,-0.60);
    glEnd();

    int i;

	GLfloat x=-0.38f; GLfloat y=-0.63f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=-0.32f; GLfloat b=-0.65f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.27f; GLfloat d=-0.63f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-0.30f; GLfloat h=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat j=-0.36f; GLfloat k=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(j, k); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j + (radius * cos(i *  twicePi / triangleAmount)),
			    k + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    GLfloat l=-0.33f; GLfloat m=-0.49f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(l, m); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            l + (radius * cos(i *  twicePi / triangleAmount)),
			    m + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void tree3()
{
    glPushMatrix();
    glTranslated(0.2,0.0,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(-0.35,-0.98);
    glVertex2f(-0.30,-0.98);
    glVertex2f(-0.30,-0.60);
    glVertex2f(-0.35,-0.60);
    glEnd();

    int i;

	GLfloat x=-0.38f; GLfloat y=-0.63f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=-0.32f; GLfloat b=-0.65f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.27f; GLfloat d=-0.63f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-0.30f; GLfloat h=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat j=-0.36f; GLfloat k=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(j, k); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j + (radius * cos(i *  twicePi / triangleAmount)),
			    k + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    GLfloat l=-0.33f; GLfloat m=-0.49f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(l, m); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            l + (radius * cos(i *  twicePi / triangleAmount)),
			    m + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void tree4()
{
    glPushMatrix();
    glTranslated(0.3,0.2,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(-0.35,-0.98);
    glVertex2f(-0.30,-0.98);
    glVertex2f(-0.30,-0.60);
    glVertex2f(-0.35,-0.60);
    glEnd();

    int i;

	GLfloat x=-0.38f; GLfloat y=-0.63f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=-0.32f; GLfloat b=-0.65f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.27f; GLfloat d=-0.63f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-0.30f; GLfloat h=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat j=-0.36f; GLfloat k=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(j, k); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j + (radius * cos(i *  twicePi / triangleAmount)),
			    k + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    GLfloat l=-0.33f; GLfloat m=-0.49f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.2f, 0.6f, 0.2f);
		glVertex2f(l, m); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            l + (radius * cos(i *  twicePi / triangleAmount)),
			    m + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void tree5()
{
    glPushMatrix();
    glTranslated(0.4,0.1,0.0);
    glBegin(GL_QUADS);
    glColor3f(0.3f, 0.0f, 0.0f);
    glVertex2f(-0.35,-0.98);
    glVertex2f(-0.30,-0.98);
    glVertex2f(-0.30,-0.60);
    glVertex2f(-0.35,-0.60);
    glEnd();

    int i;

	GLfloat x=-0.38f; GLfloat y=-0.63f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat a=-0.32f; GLfloat b=-0.65f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-0.27f; GLfloat d=-0.63f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-0.30f; GLfloat h=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat j=-0.36f; GLfloat k=-0.56f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(j, k); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j + (radius * cos(i *  twicePi / triangleAmount)),
			    k + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    GLfloat l=-0.33f; GLfloat m=-0.49f;

	glBegin(GL_TRIANGLE_FAN);
	     glColor3f(0.0f, 0.6f, 0.2f);
		glVertex2f(l, m); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            l + (radius * cos(i *  twicePi / triangleAmount)),
			    m + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

GLfloat positionOfBalloon = 0.0f;
GLfloat speedOfBalloon = 0.001f;
void balloonAnimationUp(int value)
{
    if(positionOfBalloon <= 1.0f)
    {
        positionOfBalloon += speedOfBalloon;
        if(positionOfBalloon == 1.0f)
            {
                glutPostRedisplay();
                return;
            }
    }
    glutPostRedisplay();
    glutTimerFunc(1, balloonAnimationUp, 0);
}

void balloonAnimationDown(int value)
{
    if(positionOfBalloon >= 0.0f)
    {
        positionOfBalloon -= speedOfBalloon;
        if(positionOfBalloon == 0.0f)
        {
            glutPostRedisplay();
            return;
        }
    }
    glutPostRedisplay();
    glutTimerFunc(1, balloonAnimationDown, 0);
}


void SpecialInput(int key, int x, int y)
{
    switch(key)
    {
        case GLUT_KEY_UP:
            balloonAnimationUp(0);
        break;

        case GLUT_KEY_DOWN:
            balloonAnimationDown(0);
        break;
    }
}

void airballon()
{
    glPushMatrix();
    glTranslatef(0.0f, positionOfBalloon, 0.0f);
    //human inside balloon
     int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;

	GLfloat xx=0.5f; GLfloat yy=-.58f; GLfloat rrx =.04f; GLfloat rry =.05f;//hair
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(xx, yy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx + (rrx * cos(i *  twicePi / triangleAmount)),
			    yy + (rry * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    GLfloat x=0.5f; GLfloat y=-.6f; GLfloat rx =.035f; GLfloat ry =.055f;//head
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(197, 140, 133);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (rx * cos(i *  twicePi / triangleAmount)),
			    y + (ry * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	GLfloat x1=0.52f; GLfloat y1=-0.59f; GLfloat r1 =.01f; //eye white right
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (r1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (r1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx1=0.52f; GLfloat yy1=-0.595f; GLfloat rr1 =.005f;  // eye black right
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(xx1, yy1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx1 + (rr1 * cos(i *  twicePi / triangleAmount)),
			    yy1 + (rr1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x2=0.48f; GLfloat y2=-0.59f; GLfloat r2 =.01f;  // eye white left
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (r2 * cos(i *  twicePi / triangleAmount)),
			    y2 + (r2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx2=0.48f; GLfloat yy2=-0.595f; GLfloat rr2 =.005f;  // eye black right
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(xx2, yy2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx2 + (rr2 * cos(i *  twicePi / triangleAmount)),
			    yy2 + (rr2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_LINES); // lip left
	glColor3b(0,0,0);
	glVertex2f(0.49,-0.62);
	glVertex2f(0.50,-0.63);
	glEnd();

	glBegin(GL_LINES);  // lip right
	glColor3b(0,0,0);
	glVertex2f(0.50,-0.63);
	glVertex2f(0.51,-0.62);
	glEnd();

	glBegin(GL_QUADS);//neck
    glColor3ub(197, 140, 133);
    glVertex2f(0.52,-0.66);
    glVertex2f(0.52,-0.635);
    glVertex2f(0.48,-0.635);
    glVertex2f(0.48,-0.66);
    glEnd();

    glBegin(GL_QUADS);//body
    glColor3ub(236,100,50);
    glVertex2f(0.54,-0.78);
    glVertex2f(0.54,-0.66);
    glVertex2f(0.46,-0.66);
    glVertex2f(0.46,-0.78);
    glEnd();

    glBegin(GL_TRIANGLES);//neck
    glColor3ub(197, 140, 133);
    glVertex2f(0.52,-0.66);
    glVertex2f(0.48,-0.66);
    glVertex2f(0.50,-0.68);
    glEnd();

    glBegin(GL_QUADS);//sleeve right
    glColor3ub(236,100,50);
    glVertex2f(0.56,-0.74);
    glVertex2f(0.58,-0.73);
    glVertex2f(0.54,-0.66);
    glVertex2f(0.54,-0.71);
    glEnd();

    glBegin(GL_QUADS);// right hand upper
    glColor3ub(197, 140, 133);
    glVertex2f(0.57,-0.75);
    glVertex2f(0.59,-0.75);
    glVertex2f(0.58,-0.73);
    glVertex2f(0.56,-0.74);
    glEnd();

    glBegin(GL_QUADS);//right hand lower
    glColor3ub(197, 140, 133);
    glVertex2f(0.54,-0.78);
    glVertex2f(0.54,-0.80);
    glVertex2f(0.57,-0.75);
    glVertex2f(0.59,-0.75);
    glEnd();

    glBegin(GL_QUADS);//sleeve left
    glColor3ub(236,100,50);
    glVertex2f(0.42,-0.73);
    glVertex2f(0.44,-0.74);
    glVertex2f(0.46,-0.71);
    glVertex2f(0.46,-0.66);
    glEnd();

    glBegin(GL_QUADS);// left hand upper
    glColor3ub(197, 140, 133);
    glVertex2f(0.41,-0.75);
    glVertex2f(0.43,-0.75);
    glVertex2f(0.44,-0.74);
    glVertex2f(0.42,-0.73);
    glEnd();

    glBegin(GL_QUADS);// left hand lower
    glColor3ub(197, 140, 133);
    glVertex2f(0.46,-0.80);
    glVertex2f(0.46,-0.78);
    glVertex2f(0.43,-0.75);
    glVertex2f(0.41,-0.75);
    glEnd();

    glBegin(GL_QUADS);//belt
    glColor3ub(0,0,0);
    glVertex2f(0.54,-0.80);
    glVertex2f(0.54,-0.78);
    glVertex2f(0.46,-0.78);
    glVertex2f(0.46,-0.80);
    glEnd();


    // air balloon

    glBegin(GL_QUADS);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(0.4,-0.95);
    glVertex2f(0.6,-0.95);
    glVertex2f(0.6,-0.76);
    glVertex2f(0.4,-0.76);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(0.42,-0.8);
    glVertex2f(0.4,-0.52);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(0.58,-0.8);
    glVertex2f(0.6,-0.52);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.8f, 0.1f, 0.3f);
    glVertex2f(0.39,-0.52);
    glVertex2f(0.61,-0.52);
    glVertex2f(0.63,-0.4);
    glVertex2f(0.37,-0.4);
    glEnd();



    GLfloat xb= 0.5f; GLfloat yb=-0.35f; GLfloat radiusb =0.15f;

    glColor3f(0.8f, 0.1f, 0.3f);
    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(xb, yb);
        for(i = 0; i <= triangleAmount;i++) {
            glVertex2f(
                    xb + (radiusb * cos(i *  twicePi / triangleAmount)),
                yb + (radiusb * sin(i * twicePi / triangleAmount))
            );
        }
    glEnd();
    glPopMatrix();

    glBegin(GL_LINES);
    glColor3f(0.2f, 0.0f, 0.0f);
    glVertex2f(0.6,-0.8);
    glVertex2f(0.65,-0.88);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.64,-0.92);
    glVertex2f(0.65,-0.92);
    glVertex2f(0.65,-0.80);
    glVertex2f(0.64,-0.80);
    glEnd();
}


void human()
{
    glPushMatrix();
    glTranslated(-0.5,0.0,0.0);
    int i;
    int triangleAmount = 100;
	GLfloat twicePi = 2.0f * PI;

	GLfloat xx=0.8f; GLfloat yy=-.48f; GLfloat rr =.05f;//hair
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(xx, yy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx + (rr * cos(i *  twicePi / triangleAmount)),
			    yy + (rr * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

    GLfloat x=0.8f; GLfloat y=-.5f; GLfloat r =.04f;//head
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(240, 188, 180);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (r * cos(i *  twicePi / triangleAmount)),
			    y + (r * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();



	GLfloat x1=0.82f; GLfloat y1=-0.49f; GLfloat r1 =.01f; //eye white right
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(x1, y1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x1 + (r1 * cos(i *  twicePi / triangleAmount)),
			    y1 + (r1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx1=0.82f; GLfloat yy1=-0.495f; GLfloat rr1 =.005f;  // eye black right
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(xx1, yy1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx1 + (rr1 * cos(i *  twicePi / triangleAmount)),
			    yy1 + (rr1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat x2=0.78f; GLfloat y2=-0.49f; GLfloat r2 =.01f;  // eye white left
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(x2, y2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x2 + (r2 * cos(i *  twicePi / triangleAmount)),
			    y2 + (r2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xx2=0.78f; GLfloat yy2=-0.495f; GLfloat rr2 =.005f;  // eye black right
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(xx2, yy2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx2 + (rr2 * cos(i *  twicePi / triangleAmount)),
			    yy2 + (rr2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_LINES); // lip left
	glColor3b(0,0,0);
	glVertex2f(0.79,-0.52);
	glVertex2f(0.80,-0.53);
	glEnd();

	glBegin(GL_LINES);  // lip right
	glColor3b(0,0,0);
	glVertex2f(0.80,-0.53);
	glVertex2f(0.81,-0.52);
	glEnd();

	glBegin(GL_QUADS);//neck
    glColor3ub(236, 188, 180);
    glVertex2f(0.82,-0.56);
    glVertex2f(0.82,-0.535);
    glVertex2f(0.78,-0.535);
    glVertex2f(0.78,-0.56);
    glEnd();

    glBegin(GL_QUADS);//body
    glColor3ub(236,0,0);
    glVertex2f(0.84,-0.68);
    glVertex2f(0.84,-0.56);
    glVertex2f(0.76,-0.56);
    glVertex2f(0.76,-0.68);
    glEnd();

    glBegin(GL_TRIANGLES);//neck
    glColor3ub(236, 188, 180);
    glVertex2f(0.82,-0.56);
    glVertex2f(0.78,-0.56);
    glVertex2f(0.80,-0.58);
    glEnd();

    glBegin(GL_QUADS);//sleeve right
    glColor3ub(236, 0, 0);
    glVertex2f(0.86,-0.64);
    glVertex2f(0.88,-0.63);
    glVertex2f(0.84,-0.56);
    glVertex2f(0.84,-0.61);
    glEnd();

    glBegin(GL_QUADS);// right hand upper
    glColor3ub(236, 188, 180);
    glVertex2f(0.87,-0.65);
    glVertex2f(0.89,-0.65);
    glVertex2f(0.88,-0.63);
    glVertex2f(0.86,-0.64);
    glEnd();

    glBegin(GL_QUADS);//right hand lower
    glColor3ub(236, 188, 180);
    glVertex2f(0.84,-0.68);
    glVertex2f(0.84,-0.70);
    glVertex2f(0.87,-0.65);
    glVertex2f(0.89,-0.65);
    glEnd();

    glBegin(GL_QUADS);//sleeve left
    glColor3ub(236, 0, 0);
    glVertex2f(0.72,-0.63);
    glVertex2f(0.74,-0.64);
    glVertex2f(0.76,-0.61);
    glVertex2f(0.76,-0.56);
    glEnd();

    glBegin(GL_QUADS);// left hand upper
    glColor3ub(236, 188, 180);
    glVertex2f(0.71,-0.65);
    glVertex2f(0.73,-0.65);
    glVertex2f(0.74,-0.64);
    glVertex2f(0.72,-0.63);
    glEnd();

    glBegin(GL_QUADS);// left hand lower
    glColor3ub(236, 188, 180);
    glVertex2f(0.76,-0.70);
    glVertex2f(0.76,-0.68);
    glVertex2f(0.73,-0.65);
    glVertex2f(0.71,-0.65);
    glEnd();

    glBegin(GL_QUADS);//belt
    glColor3ub(0,0,0);
    glVertex2f(0.84,-0.70);
    glVertex2f(0.84,-0.68);
    glVertex2f(0.76,-0.68);
    glVertex2f(0.76,-0.70);
    glEnd();

    glBegin(GL_QUADS);//pant left
    glColor3ub(0,0, 255);
    glVertex2f(0.79,-0.80);
    glVertex2f(0.80,-0.70);
    glVertex2f(0.76,-0.70);
    glVertex2f(0.76,-0.80);
    glEnd();

    glBegin(GL_QUADS);//pant right
    glColor3ub(0,0, 255);
    glVertex2f(0.81,-0.80);
    glVertex2f(0.80,-0.70);
    glVertex2f(0.84,-0.70);
    glVertex2f(0.84,-0.80);
    glEnd();

    glBegin(GL_QUADS);//leg left
    glColor3ub(236, 188, 180);
    glVertex2f(0.76,-0.90);
    glVertex2f(0.76,-0.80);
    glVertex2f(0.79,-0.80);
    glVertex2f(0.79,-0.90);
    glEnd();

    glBegin(GL_QUADS);//leg right
    glVertex2f(0.81,-0.90);
    glVertex2f(0.81,-0.80);
    glVertex2f(0.84,-0.80);
    glVertex2f(0.84,-0.90);
    glEnd();

	GLfloat xls=0.775f; GLfloat yls=-0.89f; GLfloat rls =0.02f;//left shoe
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(xls, yls); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xls + (rls * cos(i *  twicePi / triangleAmount)),
			    yls + (rls * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat xrs=0.825f; GLfloat yrs=-0.89f; GLfloat rrs =0.02f;//right shoe
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0,0,0);
		glVertex2f(xrs, yrs); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xrs + (rrs * cos(i *  twicePi / triangleAmount)),
			    yrs + (rrs * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	glPopMatrix();
}

void well()
{
    ///well
    glPushMatrix();
    glTranslated(0.03,-0.1,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(178,34,34);
    glVertex2f(0.9f,-0.35f);
    glVertex2f(0.9f,-0.55f);
    glVertex2f(0.85f,-0.575f);
    glVertex2f(0.8f,-0.59f);
    glVertex2f(0.7f,-0.59f);
    glVertex2f(0.65f,-0.575f);
    glVertex2f(0.6f,-0.55f);
    glVertex2f(0.6f,-0.35f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(38, 154, 214);
    glVertex2f(0.9f,-0.35f);
    glVertex2f(0.85f,-0.375f);
    glVertex2f(0.8f,-0.38f);
    glVertex2f(0.7f,-0.38f);
    glVertex2f(0.65f,-0.375f);
    glVertex2f(0.6f,-0.35f);
    glVertex2f(0.65f,-0.33f);
    glVertex2f(0.7f,-0.325f);
     glVertex2f(0.8f,-0.325f);
     glVertex2f(0.85f,-0.33f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(204, 51, 0);
     glVertex2f(0.9f,-0.35f);
    glVertex2f(0.85f,-0.33f);//
    glVertex2f(0.85f,-0.33f);
    glVertex2f(0.8f,-0.325f);//
    glVertex2f(0.8f,-0.325f);
    glVertex2f(0.7f,-0.325f);//
    glVertex2f(0.7f,-0.325f);
    glVertex2f(0.65f,-0.33f);//
     glVertex2f(0.65f,-0.33f);
     glVertex2f(0.6f,-0.35f);
    glEnd();

    ///bucket
    glTranslated(0.35,-0.08,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(194, 194, 163);
    glVertex2f(0.59f,-0.43f);
    glVertex2f(0.57f,-0.5f);
    glVertex2f(0.52f,-0.5f);
    glVertex2f(0.5f,-0.43f);
    glVertex2f(0.52f,-0.42f);
    glVertex2f(0.57f,-0.42f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(38, 154, 214);
    glVertex2f(0.585f,-0.43f);
    glVertex2f(0.568f,-0.44f);
    glVertex2f(0.528f,-0.44f);
    glVertex2f(0.505f,-0.43f);
    glVertex2f(0.528f,-0.425f);
    glVertex2f(0.57f,-0.425f);
    glEnd();

    glLineWidth(3);
     glBegin(GL_LINES);
    glColor3ub(194, 194, 163);
    glVertex2f(0.59f,-0.43f);
    glVertex2f(0.57f,-0.39f);//
    glVertex2f(0.57f,-0.39f);
    glVertex2f(0.55f,-0.39f);//
    glVertex2f(0.55f,-0.39f);
    glVertex2f(0.52f,-0.39f);//
    glVertex2f(0.52f,-0.39f);
    glVertex2f(0.5f,-0.43f);//
    glEnd();

    ///rope
    glLineWidth(2.5);
     glBegin(GL_LINES);
    glColor3ub(230, 172, 0);
    glVertex2f(0.545f,-0.385f);
    glVertex2f(0.57f,-0.45f);
    glVertex2f(0.57f,-0.45f);
    glVertex2f(0.575f,-0.5f);
    glVertex2f(0.575f,-0.5f);
    glVertex2f(0.58f,-0.53f);
    glVertex2f(0.58f,-0.53f);
    glVertex2f(0.57f,-0.55f);
    glVertex2f(0.57f,-0.55f);
    glVertex2f(0.48f,-0.53f);
    glEnd();
    glPopMatrix();
}


void display()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
   daysky();
   sun();
   cloud1();
   cloud2();
   cloud3();
   bird1();
   bird2();
   bird3();
   bird4();
   hill();
   small_tree();
   small_tree2();
   small_tree3();
   small_tree4();
   small_tree5();
   small_tree6();
   small_tree7();
   small_tree8();
   left_side_house();
   right_side_house();
   river();
   boat();
   boat2();
   road();
   car();
   park();
   well();
   building1();
   building2();
   building3();
   bigtree();
   tree2();
   tree();
   tree3();
   tree4();
   tree5();
   grass1();
   grass2();
   grass3();
   grass4();
   grass5();
   human();
   airballon();
   glFlush();
}

void display2()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
   nightsky();
   stars();
   moon();
   cloud1();
   cloud2();
   cloud3();
   hill();
   small_tree();
   small_tree2();
   small_tree3();
   small_tree4();
   small_tree5();
   small_tree6();
   small_tree7();
   small_tree8();
   left_side_house();
   right_side_house();
   river();
   boat();
   road();
   car();
   park();
   well();
   building1();
   building2();
   building3();
   bigtree();
   tree2();
   tree();
   tree3();
   tree4();
   tree5();
   grass1();
   grass2();
   grass3();
   grass4();
   grass5();
   human();
   airballon();
   glFlush();
}

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
        case 'd':
            glutDisplayFunc(display);
        break;
        case 'n':
            glutDisplayFunc(display2);
        break;
    }
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1500, 700);
   glutInitWindowPosition(20, 50);
   glutCreateWindow("City-Village scenario");
   glutDisplayFunc(display);
   glutTimerFunc(40, cloudAnimation1, 0);
   glutTimerFunc(40, cloudAnimation2, 0);
   glutTimerFunc(40, cloudAnimation3, 0);
   glutTimerFunc(40, boatAnimation1, 0);
   glutTimerFunc(40, boatAnimation2, 0);
   glutTimerFunc(40, boatAnimation3, 0);
   glutTimerFunc(20, carAnimation1, 0);
   glutTimerFunc(20, carAnimation2, 0);
   glutTimerFunc(20, birdAnimation1, 0);
   glutTimerFunc(20, birdAnimation2, 0);
   glutTimerFunc(20, birdAnimation3, 0);
   glutTimerFunc(20, birdAnimation4, 0);
   glutSpecialFunc(SpecialInput);
   glutKeyboardFunc(handleKeypress);
   init();
   glutMainLoop();
   return 0;
}
