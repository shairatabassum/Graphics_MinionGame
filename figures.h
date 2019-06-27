#ifndef FIGURES_H_INCLUDED
#define FIGURES_H_INCLUDED

float load = -45.0;
int score = 0;

static float tx = 0.0;  ///minion position x
static float ty = 0.0;  ///minion position y
static float sx = 0.6;  ///minion scale x
static float sy = 0.6;  ///minion scale y

static float cx1 = 80.0;    ///cloud1 x
int dcloud1 = -1;
static float cx2 = -100.0;   ///cloud2 x
int dcloud2 = 1;

float bx = -50.0;   ///banana position x
float by = -50.0;   ///banana position y
float bsx=0.8;      ///banana scale x
float bsy=0.8;      ///banana scale y

static float speed = 0.03;       /// ghost common speed
static float e1x=-110.0;    /// left ghost position x
static float e3y=-80.0, e3x;           /// bottom ghost position x and y
static float e6y=27.0, e6x;
static float e2x=110.0;       /// right ghost position x
static float e1y, e2y;          /// ghost position y
static float e1sx, e1sy, e2sx, e2sy, e3sx, e3sy, e6sx, e6sy;    /// ghost scale x and y
static int newE1 = 0, newE2 = 0, newE3 = 0, newE6 = 0;    ///appear new ghost 0/1

int startgame = 0;
int stop = 0;

int endgame = 0;

static int g_counter = 0;

void circle(float radius_x, float radius_y)
{
	int i = 0;
	float angle = 0.0;

	glBegin(GL_POLYGON);

		for(i = 0; i < 100; i++)
		{
			angle = 2 * PI * i / 100;
			glVertex3f (cos(angle) * radius_x, sin(angle) * radius_y, 0);
		}

	glEnd();
}

void halfcircle(float radius_x, float radius_y)
{
    float twoPI = 2 * PI;

    glBegin(GL_TRIANGLE_FAN);

    for (float i = PI; i <= twoPI; i += 0.001)
        glVertex2f((sin(i)*radius_x), (cos(i)*radius_y));

    glEnd();
}

void cloud1(void)
{
    if(stop==1)
        cx1 = cx1;
    else if(cx1 >= -100.0 && dcloud1 == -1)
        cx1 -= 0.05;
    else if(cx1 <= 80.0 && dcloud1 == +1)
        cx1 += 0.05;
    if(cx1 <= -100.0)
        dcloud1 = 1;
    if(cx1 >= 80.0)
        dcloud1 = -1;
    glutPostRedisplay();
    glPushMatrix();

        glTranslatef(cx1,3,0);
        glPushMatrix();
            glTranslatef(2,68,0);
            glColor3f(0.93,0.93,0.93);
            circle(6,3);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(7,67.5,0);
            circle(6,6);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(15,72,0);
            circle(6,6);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(15,65,0);
            circle(5,5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(23,69,0);
            glRotatef(-45,0,0,1);
            circle(4,5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(24,65,0);
            circle(7,3);
        glPopMatrix();
    glPopMatrix();
}

void cloud2(void)
{
    if(stop == 1)
        cx2 = cx2;
    else if(cx2 >= -100.0 && dcloud2 == -1)
        cx2 -= 0.05;
    else if(cx2 <= 80.0 && dcloud2 == +1)
        cx2 += 0.05;
    if(cx2 <= -100.0)
        dcloud2 = 1;
    if(cx2 >= 80.0)
        dcloud2 = -1;
    glutPostRedisplay();
    glPushMatrix();
        glTranslatef(cx2,-6,0);
        glPushMatrix();
            glTranslatef(2,68,0);
            glColor3f(0.93,0.93,0.93);
            circle(6,3);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(7,67.5,0);
            circle(6,6);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(15,72,0);
            circle(6,6);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(15,65,0);
            circle(5,5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(23,69,0);
            glRotatef(-45,0,0,1);
            circle(4,5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(24,65,0);
            circle(7,3);
        glPopMatrix();
    glPopMatrix();
}

void smalltree(void)
{
    glBegin(GL_POLYGON);
        glColor3f(0.0,0.6,0.0);
        glVertex2f(1,0);
        glVertex2f(-1,0);
        glVertex2f(-3,1);
        glVertex2f(-2.5,3);
        glVertex2f(-2.5,5);
        glVertex2f(-2,7);
        glColor3f(0.0,0.35,0.0);
        glVertex2f(-1,9);
        glVertex2f(0,10);
        glVertex2f(1,9);
        glVertex2f(2,7);
        glVertex2f(2.5,5);
        glVertex2f(2.5,3);
        glVertex2f(3,1);
    glEnd();
}

void tree1(void)
{
    glPushMatrix();
    glColor3f(0.59,0.29,0.0);
    glTranslatef(80,-53,0);
    glPushMatrix();
    ///leaves
        glPushMatrix();
            glTranslatef(0,13,0);
            glColor3f(0.0,0.35,0.0);
            circle(5,5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-8,25,0);
            glColor3f(0.0,0.35,0.0);
            circle(6,6);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(7.5,18,0);
            glColor3f(0.0,0.45,0.0);
            circle(7,7);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-7,19,0);
            glColor3f(0.0,0.55,0.0);
            circle(7,7);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(6,27,0);
            glColor3f(0.0,0.65,0.0);
            circle(7,7);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-3,29,0);
            glColor3f(0.0,0.75,0.0);
            circle(8,7.5);
        glPopMatrix();
    ///trunk
    glColor3f(0.59,0.29,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-1.5, -10);
        glVertex2f(-1.5, 15);
        glVertex2f(1.5, 15);
        glVertex2f(1.5, -10);
    glEnd();
    ///branch 1
    glPushMatrix();
        glTranslatef(1,0,0);
        glBegin(GL_POLYGON);
            glVertex2f(-2, 14);
            glVertex2f(-11, 23);
            glVertex2f(0, 15);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 18);
            glVertex2f(-10, 17);
            glVertex2f(-5, 17);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 19);
            glVertex2f(-6, 24);
            glVertex2f(-5, 18);
        glEnd();
    glPopMatrix();
    ///branch 2
    glPushMatrix();
        glTranslatef(-11.5,5,0);
        glRotatef(-60,0,0,1);
        glScalef(1.4,1.0,0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-2, 14);
            glVertex2f(-11, 23);
            glVertex2f(0, 15);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 18);
            glVertex2f(-10, 17);
            glVertex2f(-5, 17);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 19);
            glVertex2f(-6, 24);
            glVertex2f(-5, 18);
        glEnd();
    glPopMatrix();
    ///branch 3
    glPushMatrix();
        glTranslatef(-14,16,0);
        glRotatef(-110,0,0,1);
        glBegin(GL_POLYGON);
            glVertex2f(-2, 14);
            glVertex2f(-11, 23);
            glVertex2f(0, 15);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 18);
            glVertex2f(-13, 15);
            glVertex2f(-5, 17);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 19);
            glVertex2f(-6, 24);
            glVertex2f(-5, 18);
        glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
}

void tree2(void)
{
    glPushMatrix();
    glColor3f(0.59,0.29,0.0);
    glTranslatef(-80,-5,0);
    glScalef(0.6,0.6,0);
    glPushMatrix();
    ///leaves
        glPushMatrix();
            glTranslatef(0,13,0);
            glColor3f(0.0,0.35,0.0);
            circle(5,5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-8,25,0);
            glColor3f(0.0,0.35,0.0);
            circle(6,6);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(7.5,18,0);
            glColor3f(0.0,0.45,0.0);
            circle(7,7);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-7,19,0);
            glColor3f(0.0,0.55,0.0);
            circle(7,7);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(6,27,0);
            glColor3f(0.0,0.65,0.0);
            circle(7,7);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-3,29,0);
            glColor3f(0.0,0.75,0.0);
            circle(8,7.5);
        glPopMatrix();
    ///trunk
    glColor3f(0.59,0.29,0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-1.5, -10);
        glVertex2f(-1.5, 15);
        glVertex2f(1.5, 15);
        glVertex2f(1.5, -10);
    glEnd();
    ///branch 1
    glPushMatrix();
        glTranslatef(1,0,0);
        glBegin(GL_POLYGON);
            glVertex2f(-2, 14);
            glVertex2f(-11, 23);
            glVertex2f(0, 15);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 18);
            glVertex2f(-10, 17);
            glVertex2f(-5, 17);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 19);
            glVertex2f(-6, 24);
            glVertex2f(-5, 18);
        glEnd();
    glPopMatrix();
    ///branch 2
    glPushMatrix();
        glTranslatef(-11.5,5,0);
        glRotatef(-60,0,0,1);
        glScalef(1.4,1.0,0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-2, 14);
            glVertex2f(-11, 23);
            glVertex2f(0, 15);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 18);
            glVertex2f(-10, 17);
            glVertex2f(-5, 17);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 19);
            glVertex2f(-6, 24);
            glVertex2f(-5, 18);
        glEnd();
    glPopMatrix();
    ///branch 3
    glPushMatrix();
        glTranslatef(-14,16,0);
        glRotatef(-110,0,0,1);
        glBegin(GL_POLYGON);
            glVertex2f(-2, 14);
            glVertex2f(-11, 23);
            glVertex2f(0, 15);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 18);
            glVertex2f(-13, 15);
            glVertex2f(-5, 17);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-6, 19);
            glVertex2f(-6, 24);
            glVertex2f(-5, 18);
        glEnd();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
}

void tree3(void)
{
    glPushMatrix();
        glColor3f(0.59,0.29,0.0);
        glTranslatef(53,14,0);
        glScalef(0.3,0.3,0);
        glPushMatrix();
            ///leaves
                glPushMatrix();
                    glTranslatef(0,13,0);
                    glColor3f(0.0,0.35,0.0);
                    circle(5,5);
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(-8,25,0);
                    glColor3f(0.0,0.35,0.0);
                    circle(6,6);
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(7.5,18,0);
                    glColor3f(0.0,0.45,0.0);
                    circle(7,7);
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(-7,19,0);
                    glColor3f(0.0,0.55,0.0);
                    circle(7,7);
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(6,27,0);
                    glColor3f(0.0,0.65,0.0);
                    circle(7,7);
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(-3,29,0);
                    glColor3f(0.0,0.75,0.0);
                    circle(8,7.5);
                glPopMatrix();

                ///trunk
                glColor3f(0.59,0.29,0.0);
                glBegin(GL_POLYGON);
                    glVertex2f(-1.5, -10);
                    glVertex2f(-1.5, 15);
                    glVertex2f(1.5, 15);
                    glVertex2f(1.5, -10);
                glEnd();
                ///branch 1
                glPushMatrix();
                    glTranslatef(1,0,0);
                    glBegin(GL_POLYGON);
                        glVertex2f(-2, 14);
                        glVertex2f(-11, 23);
                        glVertex2f(0, 15);
                    glEnd();
                    glBegin(GL_POLYGON);
                        glVertex2f(-6, 18);
                        glVertex2f(-10, 17);
                        glVertex2f(-5, 17);
                    glEnd();
                    glBegin(GL_POLYGON);
                        glVertex2f(-6, 19);
                        glVertex2f(-6, 24);
                        glVertex2f(-5, 18);
                    glEnd();
                glPopMatrix();
                ///branch 2
                glPushMatrix();
                    glTranslatef(-11.5,5,0);
                    glRotatef(-60,0,0,1);
                    glScalef(1.4,1.0,0.0);
                    glBegin(GL_POLYGON);
                        glVertex2f(-2, 14);
                        glVertex2f(-11, 23);
                        glVertex2f(0, 15);
                    glEnd();
                    glBegin(GL_POLYGON);
                        glVertex2f(-6, 18);
                        glVertex2f(-10, 17);
                        glVertex2f(-5, 17);
                    glEnd();
                    glBegin(GL_POLYGON);
                        glVertex2f(-6, 19);
                        glVertex2f(-6, 24);
                        glVertex2f(-5, 18);
                    glEnd();
                glPopMatrix();
                ///branch 3
                glPushMatrix();
                    glTranslatef(-14,16,0);
                    glRotatef(-110,0,0,1);
                    glBegin(GL_POLYGON);
                        glVertex2f(-2, 14);
                        glVertex2f(-11, 23);
                        glVertex2f(0, 15);
                    glEnd();
                    glBegin(GL_POLYGON);
                        glVertex2f(-6, 18);
                        glVertex2f(-13, 15);
                        glVertex2f(-5, 17);
                    glEnd();
                    glBegin(GL_POLYGON);
                        glVertex2f(-6, 19);
                        glVertex2f(-6, 24);
                        glVertex2f(-5, 18);
                    glEnd();
                glPopMatrix();
        glPopMatrix();
    glPopMatrix();
}


#endif // FIGURES_H_INCLUDED
