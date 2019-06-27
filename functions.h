#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include "figures.h"
#include "enemy.h"

void timer(int value) {
    if(stop == 1)
        return;
    if(load <= 45.0)
        g_counter = -1;
    if(stop == 0) {
        g_counter += 1;
        glutPostRedisplay();
        glutTimerFunc(1000, timer, g_counter);
    }
    if(g_counter%20 == 0)
    {
        speed += 0.03;
    }
}

void timertext()
{
    char text[32] = "TIME: 0";
    //text[0]='T'; text[1]='I'; text[2]='M'; text[3]='E'; text[4]=':'; text[5]=' '; text[6]=' ';
    int strt=7;
    if(g_counter<10)
        strt--;
    int tmp=g_counter;
    while(tmp)
    {
        text[strt--]=(tmp%10)+'0';
        tmp/=10;
    }
    glColor3f(0, 0, 0);
    glRasterPos3f( -99 , 95 , 0.0);
    for(int i = 0; text[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
}

void scoretext()
{
    char text[32] = "SCORE: 0";
    //text[0]='S'; text[1]='C'; text[2]='O'; text[3]='R'; text[4]='E'; text[5]=':'; text[6]=' '; text[7]=' '; text[8]=' ';
    int strt=8;
    if(score<10)
        strt--;
    int tmp=score;
    while(tmp)
    {
        text[strt--]=(tmp%10)+'0';
        tmp/=10;
    }
    glColor3f(0, 0, 0);
    glRasterPos3f( -99 , 89 , 0.0);
    for(int i = 0; text[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, text[i]);
}

void introtext()
{
    char text1[50] = "Welcome to Minion Game";
    char text2[50] = "Press `s' to start the game";
    glColor3f(0, 0, 0);
    glRasterPos3f( -35 , -15 , 0.0);
    for(int i = 0; text1[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text1[i]);
    glRasterPos3f( -34.7 , -25 , 0.0);
    for(int i = 0; text2[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text2[i]);
}


void topLetters(void){
    //M:
    //glPushMatrix();
    float ltx1 = -40.0+5.0;
    float lty1 = 135+0.0;
    float ltx2 = -53.0+4.0;
    float lty2 = 235+2.0;
    float ltx3 = -53.0+10.0;
    float lty3 = 235+2.0;
    //N1:
    float ltx4 = 25.0+10.0-1;
    float lty4 = 135.0+0.0;
    float ltx5 = 45.0+2.0-2;
    float lty5 = 238.0-5.0;
    //I:
    float ltx6 = 50.0+0.0;
    float lty6 = 135.0+0.0;
    //O:
    float ltx7 = 68.0+0.0;
    float lty7 = 130.0+0.0;
    //N2:
    float ltx8 = 85.0;
    float lty8 = 135.0;
    float ltx9 = 148.0+15.0;
    float lty9 = 238.0-5.0;
    float ltx10 = 85.0+17.0;
    float lty10 = 135.0;
    //LetterM:
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.7,0.7,0.0);
    glTranslatef(ltx1,lty1-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5,9.5);
    glVertex2f(5,-9.5);
    glVertex2f(-5,-9.5);
    glVertex2f(-5,9.5);
    glEnd();
    glPopMatrix();
    glPushMatrix();

    glScalef(0.4,0.4,0.0);
    glTranslatef(ltx2,lty2-5,0);
    glRotated(45,0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(5,9.5);
    glVertex2f(5,-9.5);
    glVertex2f(-5,-9.5);
    glVertex2f(-5,9.5);
    glEnd();
    glPopMatrix();

    glScalef(0.4,0.4,0.0);
    glTranslatef(ltx3,lty3-5,0);
    glRotated(-45,0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(5,9.5);
    glVertex2f(5,-9.5);
    glVertex2f(-5,-9.5);
    glVertex2f(-5,9.5);
    glEnd();
    glPopMatrix(); ///????????????????
    //LetterMdone:

    //LetterN1:
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.7,0.7,0.0);
    glTranslatef(ltx4,lty4-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5,9.5);
    glVertex2f(5,-9.5);
    glVertex2f(-5,-9.5);
    glVertex2f(-5,9.5);
    glEnd();
    glPopMatrix();
    glPushMatrix();

    glScalef(0.4,0.4,0.0);
    glTranslatef(ltx5,lty5-5,0);
    glRotated(40,0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(5,15);
    glVertex2f(5,-15);
    glVertex2f(-5,-15);
    glVertex2f(-5,15);
    glEnd();
    glPopMatrix();
    //LetterNdone

    //LetterI:
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.7,0.7,0.0);
    glTranslatef(ltx6,lty6-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5,9.5);
    glVertex2f(5,-9.5);
    glVertex2f(-5,-9.5);
    glVertex2f(-5,9.5);
    glEnd();
    glPopMatrix();
    glPushMatrix(); ///??????????
    //LetterIdone

    //LetterO:
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(ltx7,lty7,0);
    circle(7.5,10);
    glPopMatrix();
    //LetterOdone

    //LetterN2:
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.7,0.7,0.0);
    glTranslatef(ltx8,lty8-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5,9.5);
    glVertex2f(5,-9.5);
    glVertex2f(-5,-9.5);
    glVertex2f(-5,9.5);
    glEnd();
    glPopMatrix();
    glPushMatrix();

    glScalef(0.4,0.4,0.0);
    glTranslatef(ltx9,lty9-5,0);
    glRotated(40,0,0,1);
    glBegin(GL_POLYGON);
    glVertex2f(5,15);
    glVertex2f(5,-15);
    glVertex2f(-5,-15);
    glVertex2f(-5,15);
    glEnd();
    glPopMatrix();

    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.7,0.7,0.0);
    glTranslatef(ltx10,lty10-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5,9.5);
    glVertex2f(5,-9.5);
    glVertex2f(-5,-9.5);
    glVertex2f(-5,9.5);
    glEnd();
    glPopMatrix();
    //letterN2done
    //glPopMatrix();
}
void topMinions(void){
    glPushMatrix();
    float tx1 = 0.0;
    float ty1 = 135.0;
    float tx2 = -15.0;
    float ty2 = 135.0;
    float tx3 = 15.0;
    float ty3 = 135.0;
    //FrontOne:
    //headup:
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1,ty1,0);
    circle(5,5);
    glPopMatrix();

    //headmiddle:
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1,ty1-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5, 5);
    glVertex2f(5, -1);
    glVertex2f(-5, -1);
    glVertex2f(-5, 5);
    glEnd();
    glPopMatrix();
    //headEyeBlack:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1,ty1,0);
    circle(3,3);
    glPopMatrix();
    //headEyeWhite:
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1,ty1,0);
    circle(2.5,2.5);
    glPopMatrix();
    //headEyeBlackCenter:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1,ty1,0);
    circle(1,1);
    glPopMatrix();
    //headEyeBandLeft:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1-4,ty1,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.5, 0.5);
    glVertex2f(1.5, -0.5);
    glVertex2f(-1, -0.5);
    glVertex2f(-1, 0.5);
    glEnd();
    glPopMatrix();
    //headLip:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1,ty1-4,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 0.1);
    glVertex2f(1, -0.2);
    glVertex2f(-1, -0.2);
    glVertex2f(-1, 0.1);
    glEnd();
    glPopMatrix();
    //headEyeBandRight:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1+4,ty1,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.5, 0.5);
    glVertex2f(1.5, -0.5);
    glVertex2f(-1, -0.5);
    glVertex2f(-1, 0.5);
    glEnd();
    glPopMatrix();
    //body:
    glPushMatrix();
    glColor3f(0.0, 0.0, 1.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1,ty1-10,0);
    glBegin(GL_POLYGON);
    glVertex2f(5, 5);
    glVertex2f(5, -1);
    glVertex2f(-5, -1);
    glVertex2f(-5, 5);
    glEnd();
    glPopMatrix();
    //bodyLeft:
    glPushMatrix();
    glColor3f(1.0, 0.8, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1-4,ty1-6.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glVertex2f(-1, 1);
    glEnd();
    glPopMatrix();
    //bodyRight:
    glPushMatrix();
    glColor3f(1.0, 0.8, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1+4,ty1-6.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glVertex2f(-1, 1);
    glEnd();
    glPopMatrix();
    //bodyLegLeft:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.7);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1-1.1,ty1-12,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glVertex2f(-1, 1);
    glEnd();
    glPopMatrix();
    //bodyLegRight:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.7);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1+1.1,ty1-12,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glVertex2f(-1, 1);
    glEnd();
    glPopMatrix();
    //bodyLegLeftShoe:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1-1.1,ty1-13.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.5, 0.5);
    glVertex2f(0.5, -0.5);
    glVertex2f(-1.5, -0.5);
    glVertex2f(-1.5, 0.5);
    glEnd();
    glPopMatrix();
    //bodyLegRightShoe:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1+1.1,ty1-13.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.5, 0.5);
    glVertex2f(1.5, -0.5);
    glVertex2f(-0.5, -0.5);
    glVertex2f(-0.5, 0.5);
    glEnd();
    glPopMatrix();
    //bodyHandLeft:
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1-5,ty1-7.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.5, 2);
    glVertex2f(0.5, -2);
    glVertex2f(-0.5, -2);
    glVertex2f(-0.5, 2);
    glEnd();
    glPopMatrix();
    //bodyHandRight:
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx1+5,ty1-7.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.5, 2);
    glVertex2f(0.5, -2);
    glVertex2f(-0.5, -2);
    glVertex2f(-0.5, 2);
    glEnd();
    glPopMatrix();
    //FrontOneDone:

    //LeftOne:
    //headup:
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2,ty2,0);
    circle(5,5);
    glPopMatrix();

    //headmiddle:
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2,ty2-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5, 5);
    glVertex2f(5, -1);
    glVertex2f(-5, -1);
    glVertex2f(-5, 5);
    glEnd();
    glPopMatrix();
    //headEyeBandBack:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2,ty2,0);
    glBegin(GL_POLYGON);
    glVertex2f(5, 0.5);
    glVertex2f(5, -0.5);
    glVertex2f(-5, -0.5);
    glVertex2f(-5, 0.5);
    glEnd();
    glPopMatrix();
    //bodyEye:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2-5,ty2,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 2);
    glVertex2f(1, -2);
    glVertex2f(-1, -2);
    glVertex2f(-1, 2);
    glEnd();
    glPopMatrix();
    //body:
    glPushMatrix();
    glColor3f(0.0, 0.0, 1.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2,ty2-10,0);
    glBegin(GL_POLYGON);
    glVertex2f(5, 5);
    glVertex2f(5, -1);
    glVertex2f(-5, -1);
    glVertex2f(-5, 5);
    glEnd();
    glPopMatrix();
    //bodyMiddle:
    glPushMatrix();
    glColor3f(1.0, 0.8, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2,ty2-6.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.8, 1);
    glVertex2f(1.8, -1);
    glVertex2f(-1.8, -1);
    glVertex2f(-1.8, 1);
    glEnd();
    glPopMatrix();
    //bodyLeg:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.7);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2,ty2-12,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glVertex2f(-1, 1);
    glEnd();
    glPopMatrix();
    //bodyLegLeftShoe:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2,ty2-13.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.7, 0.5);
    glVertex2f(0.7, -0.5);
    glVertex2f(-1.7, -0.5);
    glVertex2f(-1.7, 0.5);
    glEnd();
    glPopMatrix();
    //bodyHand:
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx2,ty2-7.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.5, 2);
    glVertex2f(0.5, -2);
    glVertex2f(-0.5, -2);
    glVertex2f(-0.5, 2);
    glEnd();
    glPopMatrix();
    //LeftOneDone:

    //RightOne:
    //headup:
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3,ty3,0);
    circle(5,5);
    glPopMatrix();

    //headmiddle:
    glColor3f(1.0, 1.0, 0.0);
    glPushMatrix();
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3,ty3-5,0);
    glBegin(GL_POLYGON);
    glVertex2f(5, 5);
    glVertex2f(5, -1);
    glVertex2f(-5, -1);
    glVertex2f(-5, 5);
    glEnd();
    glPopMatrix();
    //headEyeBandBack:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3,ty3,0);
    glBegin(GL_POLYGON);
    glVertex2f(5, 0.5);
    glVertex2f(5, -0.5);
    glVertex2f(-5, -0.5);
    glVertex2f(-5, 0.5);
    glEnd();
    glPopMatrix();
    //bodyEye:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3+5,ty3,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 2);
    glVertex2f(1, -2);
    glVertex2f(-1, -2);
    glVertex2f(-1, 2);
    glEnd();
    glPopMatrix();
    //body:
    glPushMatrix();
    glColor3f(0.0, 0.0, 1.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3,ty3-10,0);
    glBegin(GL_POLYGON);
    glVertex2f(5, 5);
    glVertex2f(5, -1);
    glVertex2f(-5, -1);
    glVertex2f(-5, 5);
    glEnd();
    glPopMatrix();
    //bodyMiddle:
    glPushMatrix();
    glColor3f(1.0, 0.8, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3,ty3-6.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.8, 1);
    glVertex2f(1.8, -1);
    glVertex2f(-1.8, -1);
    glVertex2f(-1.8, 1);
    glEnd();
    glPopMatrix();
    //bodyLeg:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.7);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3,ty3-12,0);
    glBegin(GL_POLYGON);
    glVertex2f(1, 1);
    glVertex2f(1, -1);
    glVertex2f(-1, -1);
    glVertex2f(-1, 1);
    glEnd();
    glPopMatrix();
    //bodyLegRightShoe:
    glPushMatrix();
    glColor3f(0.0, 0.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3,ty3-13.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(1.7, 0.5);
    glVertex2f(1.7, -0.5);
    glVertex2f(-0.7, -0.5);
    glVertex2f(-0.7, 0.5);
    glEnd();
    glPopMatrix();
    //bodyHand:
    glPushMatrix();
    glColor3f(1.0, 1.0, 0.0);
    glScalef(0.7,0.7,0.0);
    glTranslatef(tx3,ty3-7.5,0);
    glBegin(GL_POLYGON);
    glVertex2f(0.5, 2);
    glVertex2f(0.5, -2);
    glVertex2f(-0.5, -2);
    glVertex2f(-0.5, 2);
    glEnd();
    glPopMatrix();
    //RightOneDone:

    glPopMatrix();
}

void gameover(void)
{
    glClearColor(0.8,0.9,0.0,1.0); ///change this color -_-
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    glPushMatrix(); ///calling logo
        glTranslatef(-32,-90,0);
        glScalef(1.3,1.3,0);
        glPushMatrix();
        topLetters();
        topMinions();
        glPopMatrix();
    glPopMatrix();

    char text1[50] = "Game Over";
    glColor3f(0, 0, 0);
    glRasterPos3f( -15 , -5 , 0.0);
    for(int i = 0; text1[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text1[i]);

    char text[32] = "Your Score: 0";
    int strt=13;
    if(score<10)
        strt--;
    int tmp=score;
    while(tmp)
    {
        text[strt--]=(tmp%10)+'0';
        tmp/=10;
    }
    glColor3f(0,0,0);
    glRasterPos3f(-20,-15,0.0);
    for(int i=0; text[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);

    char text3[50] = "Press 'n' to try again.";
    glColor3f(0, 0, 0);
    glRasterPos3f( -26 , -25 , 0.0);
    for(int i = 0; text3[i] != '\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text3[i]);

    glPopMatrix();
    glFlush();
}

void drawbanana()
{
    if((bx >= tx-4 && bx <= tx+4) && (by >= ty-6 && by <= ty+4))
    {
        score++;
        bx = rand() % (95 - (-95) + 1) + (-95);
        by = rand() % (23 - (-70) + 1) + (-70);
        ///BANANA scaling
        if(by>=16 && by<=25) { bsx= 0.3; bsy = 0.3; }
        else if(by>=10 && by<=15) { bsx= 0.3; bsy = 0.3; }
        else if(by>=0 && by<=9) { bsx= 0.4; bsy = 0.4; }
        else if(by>=-10 && by<=-1) { bsx= 0.4; bsy = 0.4; }
        else if(by>=-20 && by<=-9) { bsx= 0.5; bsy = 0.5; }
        else if(by>=-30 && by<=-19) { bsx= 0.6; bsy = 0.6; }
        else if(by>=-40 && by<=-29) { bsx= 0.7; bsy = 0.7; }
        else if(by>=-50 && by<=-39) { bsx= 0.8; bsy = 0.8; }
        else if(by>=-60 && by<=-49) { bsx= 0.9; bsy = 0.9; }
        else if(by>=-70 && by<=-59) { bsx= 1.0; bsy = 1.0; }
        PlaySound("Banana_Eating.wav", NULL, SND_FILENAME| SND_ASYNC);
    }
    glPushMatrix();
        glTranslatef(bx,by,0.0);
        glRotatef(-35,0,0,1);
        glScalef(bsx,bsy,0);
        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            circle(4.5,5);
            circle(2.7,4.7);
            glColor3f(1.0,1.0,0.0);
            circle(2,4);
            glTranslatef(-2,0,0);
            glColor3f(0.0,0.0,0.0);
            circle(2,4);
        glPopMatrix();
        //glutPostRedisplay();
    glPopMatrix();
}

void displayBackground(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
        //PlayField:
        glPushMatrix();
        glColor3f(0.69, 0.99, 0.39);
        glBegin(GL_POLYGON);
        glVertex2f(100, 100);
        glVertex2f(100, -100);
        glVertex2f(-100, -100);
        glVertex2f(-100, 100);
        glEnd();

        ///TREE (small)
        tree3();

        ///BACK FIELD
        glPushMatrix();
            glTranslatef(0,-30,0);
            glRotatef(-5,0,0,1);
            glColor3f(0.5,0.99,0.0);
            circle(200,50);
        glPopMatrix();

        ///TREE (middle)
        tree2();

        ///MIDDLE FIELD
        glPushMatrix();
            glTranslatef(-50,-56,0);
            glRotatef(10,0,0,1);
            glColor3f(0.39,0.79,0.0);
            circle(200,53);
        glPopMatrix();

        ///TREE (large)
        tree1();

        ///FRONT FIELD
        glPushMatrix();
            glTranslatef(0,-90,0);
            glRotatef(-12,0,0,1);
            glColor3f(0.29,0.59,0.0);
            circle(200,50);
        glPopMatrix();

        glPopMatrix();
        //TopHEADER:
        glPushMatrix();
        glColor3f(0.8, 0.8, 0.9);
        glBegin(GL_POLYGON);
        glVertex2f(100, 100);
        glVertex2f(100, 88);
        glVertex2f(-100, 88);
        glVertex2f(-100, 100);
        glEnd();
        glPopMatrix();

        ///calling ghost
        if(g_counter>=5)
            Enemy1();
        if(g_counter>=20)
            Enemy2();
        if(g_counter>=40)
            Enemy3();
        if(g_counter>=60)
            Enemy6();

        //BackGround:
        glPushMatrix();
        glBegin(GL_POLYGON);
        glColor3f(0.5, 0.0, 0.8);
        glVertex2f(100, 25);
        glColor3f(0.0, 0.0, 1.0);
        glVertex2f(100, 83);
        glColor3f(0.5, 0.0, 0.8);
        glVertex2f(-100, 83);
        glColor3f(1.0, 1.0, 0.3);
        glVertex2f(-100, 25);
        glEnd();
        //Buildings:
        glBegin(GL_POLYGON);
        glColor3f(0.5, 0.6, 0.8);
        glVertex2f(95, 25);
        glVertex2f(95, 40);
        glVertex2f(85, 40);
        glVertex2f(85, 25);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.5, 0.4, 0.5);
        glVertex2f(-80, 25);
        glVertex2f(-80, 40);
        glVertex2f(-70, 40);
        glVertex2f(-70, 25);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.5, 0.6, 0.8);
        glVertex2f(60, 25);
        glVertex2f(60, 40);
        glVertex2f(50, 40);
        glVertex2f(50, 25);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.5, 0.6, 0.5);
        glVertex2f(55, 25);
        glVertex2f(55, 35);
        glVertex2f(45, 35);
        glVertex2f(45, 25);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.5, 0.4, 0.8);
        glVertex2f(-45, 25);
        glVertex2f(-45, 40);
        glVertex2f(-35, 40);
        glVertex2f(-35, 25);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.5, 0.6, 0.6);
        glVertex2f(-30, 25);
        glVertex2f(-30, 35);
        glVertex2f(-20, 35);
        glVertex2f(-20, 25);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.5, 0.6, 0.5);
        glVertex2f(-60, 25);
        glVertex2f(-60, 40);
        glVertex2f(-50, 40);
        glVertex2f(-50, 25);
        glEnd();
        glPopMatrix();
        //treeBesideBuildings:
        glPushMatrix();
        glTranslated(60,25,0);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(65,25,0);
        glScaled(0.7,0.7,1);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(98,25,0);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(-18,25,0);
        glScaled(0.7,0.7,1);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(-13,25,0);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(-8,25,0);
        glScaled(0.9,0.9,1);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(-68,25,0);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(-63,25,0);
        glScaled(0.7,0.7,1);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(-98,25,0);
        glScaled(0.7,0.7,1);
        smalltree();
        glPopMatrix();
        glPushMatrix();
        glTranslated(-93,25,0);
        glScaled(0.9,0.9,1);
        smalltree();
        glPopMatrix();
        ///cloud
        cloud1();
        cloud2();
        //Footer:
        glPushMatrix();
        glColor3f(0.8, 0.8, 0.9);
        glBegin(GL_POLYGON);
        glVertex2f(100, -90);
        glVertex2f(100, -100);
        glVertex2f(-100, -100);
        glVertex2f(-100, -90);
        glEnd();
        glPopMatrix();
        //TopGameLogo:
        topLetters();
        topMinions();
        //banana
        drawbanana();

        if(startgame==0)
            introtext();
        timertext();
        scoretext();
        //if(g_counter==30) /// change this logic /////////////////////////////////////////////////////////////////////
            //glutDisplayFunc(gameover); /// game over holee startgame == 0 hobe ////////////////////////////////////////////

        if(endgame == 1)
            glutDisplayFunc(gameover);

    glPopMatrix();
    //glFlush();
}
void displayFront(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    displayBackground();

    ///MOVE
    glPushMatrix();
    glTranslatef(tx,ty,0);
    glScalef(sx,sy,0);
        glPushMatrix();
        ///headup:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(0.0,0.0,0.0);
        circle(5,5);
        glPopMatrix();

        ///headmiddle:
        glColor3f(1.0, 1.0, 0.0);
        glPushMatrix();
        glTranslatef(0.0,-5,0.0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 5);
        glVertex2f(5, -1);
        glVertex2f(-5, -1);
        glVertex2f(-5, 5);
        glEnd();
        glPopMatrix();
        ///headEyeBlack:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,0,0);
        circle(3,3);
        glPopMatrix();
        ///headEyeWhite:
        glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glTranslatef(0,0,0);
        circle(2.5,2.5);
        glPopMatrix();
        ///headEyeBlackCenter:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,0,0);
        circle(1,1);
        glPopMatrix();
        ///headEyeBandLeft:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(-4,0.0,0);
        glBegin(GL_POLYGON);
        glVertex2f(1.5, 0.5);
        glVertex2f(1.5, -0.5);
        glVertex2f(-1, -0.5);
        glVertex2f(-1, 0.5);
        glEnd();
        glPopMatrix();
        ///headLip:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,-4,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 0.1);
        glVertex2f(1, -0.2);
        glVertex2f(-1, -0.2);
        glVertex2f(-1, 0.1);
        glEnd();
        glPopMatrix();
        ///headEyeBandRight:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(4,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(1.5, 0.5);
        glVertex2f(1.5, -0.5);
        glVertex2f(-1, -0.5);
        glVertex2f(-1, 0.5);
        glEnd();
        glPopMatrix();
        ///body:
        glPushMatrix();
        glColor3f(0.0, 0.0, 1.0);
        glTranslatef(0,-10,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 5);
        glVertex2f(5, -1);
        glVertex2f(-5, -1);
        glVertex2f(-5, 5);
        glEnd();
        glPopMatrix();
        ///bodyLeft:
        glPushMatrix();
        glColor3f(1.0, 0.8, 0.0);
        glTranslatef(-4,-6.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyRight:
        glPushMatrix();
        glColor3f(1.0, 0.8, 0.0);
        glTranslatef(4,-6.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyLegLeft:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.7);
        glTranslatef(-1.1,-12,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyLegRight:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.7);
        glTranslatef(1.1,-12,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyLegLeftShoe:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(-1.1,-13.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(-1.5, -0.5);
        glVertex2f(-1.5, 0.5);
        glEnd();
        glPopMatrix();
        ///bodyLegRightShoe:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(1.1,-13.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1.5, 0.5);
        glVertex2f(1.5, -0.5);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glEnd();
        glPopMatrix();
        ///bodyHandLeft:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(-5,-7.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 2);
        glVertex2f(0.5, -2);
        glVertex2f(-0.5, -2);
        glVertex2f(-0.5, 2);
        glEnd();
        glPopMatrix();
        ///bodyHandRight:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(5,-7.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 2);
        glVertex2f(0.5, -2);
        glVertex2f(-0.5, -2);
        glVertex2f(-0.5, 2);
        glEnd();
        glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glFlush();
}
void displayBack(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    displayBackground();

    ///MOVE
    glPushMatrix();
    glTranslatef(tx,ty,0);
    glScalef(sx,sy,0);
        ///headup:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(0,0,0);
        circle(5,5);
        glPopMatrix();

        ///headmiddle:
        glColor3f(1.0, 1.0, 0.0);
        glPushMatrix();
        glTranslatef(0,-5,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 5);
        glVertex2f(5, -1);
        glVertex2f(-5, -1);
        glVertex2f(-5, 5);
        glEnd();
        glPopMatrix();
        ///headEyeBandBack:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 0.5);
        glVertex2f(5, -0.5);
        glVertex2f(-5, -0.5);
        glVertex2f(-5, 0.5);
        glEnd();
        glPopMatrix();
        ///body:
        glPushMatrix();
        glColor3f(0.0, 0.0, 1.0);
        glTranslatef(0,-10,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 5);
        glVertex2f(5, -1);
        glVertex2f(-5, -1);
        glVertex2f(-5, 5);
        glEnd();
        glPopMatrix();
        ///bodyLeft:
        glPushMatrix();
        glColor3f(1.0, 0.8, 0.0);
        glTranslatef(-4,-6.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyRight:
        glPushMatrix();
        glColor3f(1.0, 0.8, 0.0);
        glTranslatef(4,-6.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyLegLeft:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.7);
        glTranslatef(-1.1,-12,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyLegRight:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.7);
        glTranslatef(1.1,-12,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyLegLeftShoe:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(-1.1,-13.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(-1.5, -0.5);
        glVertex2f(-1.5, 0.5);
        glEnd();
        glPopMatrix();
        ///bodyLegRightShoe:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(1.1,-13.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1.5, 0.5);
        glVertex2f(1.5, -0.5);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glEnd();
        glPopMatrix();
        ///bodyHandLeft:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(-5,-7.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 2);
        glVertex2f(0.5, -2);
        glVertex2f(-0.5, -2);
        glVertex2f(-0.5, 2);
        glEnd();
        glPopMatrix();
        ///bodyHandRight:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(5,-7.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 2);
        glVertex2f(0.5, -2);
        glVertex2f(-0.5, -2);
        glVertex2f(-0.5, 2);
        glEnd();
        glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    glFlush();
}
void displayRight(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    displayBackground();

    ///MOVE
    glPushMatrix();
    glTranslatef(tx,ty,0);
    glScalef(sx,sy,0);
        ///headup:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(0,0,0);
        circle(5,5);
        glPopMatrix();

        ///headmiddle:
        glColor3f(1.0, 1.0, 0.0);
        glPushMatrix();
        glTranslatef(0,-5,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 5);
        glVertex2f(5, -1);
        glVertex2f(-5, -1);
        glVertex2f(-5, 5);
        glEnd();
        glPopMatrix();
        ///headEyeBandBack:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 0.5);
        glVertex2f(5, -0.5);
        glVertex2f(-5, -0.5);
        glVertex2f(-5, 0.5);
        glEnd();
        glPopMatrix();
        ///bodyEye:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(5,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 2);
        glVertex2f(1, -2);
        glVertex2f(-1, -2);
        glVertex2f(-1, 2);
        glEnd();
        glPopMatrix();
        ///body:
        glPushMatrix();
        glColor3f(0.0, 0.0, 1.0);
        glTranslatef(0,-10,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 5);
        glVertex2f(5, -1);
        glVertex2f(-5, -1);
        glVertex2f(-5, 5);
        glEnd();
        glPopMatrix();
        ///bodyMiddle:
        glPushMatrix();
        glColor3f(1.0, 0.8, 0.0);
        glTranslatef(0,-6.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1.8, 1);
        glVertex2f(1.8, -1);
        glVertex2f(-1.8, -1);
        glVertex2f(-1.8, 1);
        glEnd();
        glPopMatrix();
        ///bodyLeg:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.7);
        glTranslatef(0,-12,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyLegRightShoe:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,-13.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1.7, 0.5);
        glVertex2f(1.7, -0.5);
        glVertex2f(-0.7, -0.5);
        glVertex2f(-0.7, 0.5);
        glEnd();
        glPopMatrix();
        ///bodyHand:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(0,-7.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 2);
        glVertex2f(0.5, -2);
        glVertex2f(-0.5, -2);
        glVertex2f(-0.5, 2);
        glEnd();
        glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    glFlush();
}
void displayLeft(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    displayBackground();

    ///MOVE
    glPushMatrix();
    glTranslatef(tx,ty,0);
    glScalef(sx,sy,0);
        ///headup:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(0,0,0);
        circle(5,5);
        glPopMatrix();

        ///headmiddle:
        glColor3f(1.0, 1.0, 0.0);
        glPushMatrix();
        glTranslatef(0,-5,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 5);
        glVertex2f(5, -1);
        glVertex2f(-5, -1);
        glVertex2f(-5, 5);
        glEnd();
        glPopMatrix();
        ///headEyeBandBack:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 0.5);
        glVertex2f(5, -0.5);
        glVertex2f(-5, -0.5);
        glVertex2f(-5, 0.5);
        glEnd();
        glPopMatrix();
        ///bodyEye:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(-5,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 2);
        glVertex2f(1, -2);
        glVertex2f(-1, -2);
        glVertex2f(-1, 2);
        glEnd();
        glPopMatrix();
        ///body:
        glPushMatrix();
        glColor3f(0.0, 0.0, 1.0);
        glTranslatef(0,-10,0);
        glBegin(GL_POLYGON);
        glVertex2f(5, 5);
        glVertex2f(5, -1);
        glVertex2f(-5, -1);
        glVertex2f(-5, 5);
        glEnd();
        glPopMatrix();
        ///bodyMiddle:
        glPushMatrix();
        glColor3f(1.0, 0.8, 0.0);
        glTranslatef(0,-6.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(1.8, 1);
        glVertex2f(1.8, -1);
        glVertex2f(-1.8, -1);
        glVertex2f(-1.8, 1);
        glEnd();
        glPopMatrix();
        ///bodyLeg:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.7);
        glTranslatef(0,-12,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 1);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
        ///bodyLegLeftShoe:
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,-13.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.7, 0.5);
        glVertex2f(0.7, -0.5);
        glVertex2f(-1.7, -0.5);
        glVertex2f(-1.7, 0.5);
        glEnd();
        glPopMatrix();
        ///bodyHand:
        glPushMatrix();
        glColor3f(1.0, 1.0, 0.0);
        glTranslatef(0,-7.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 2);
        glVertex2f(0.5, -2);
        glVertex2f(-0.5, -2);
        glVertex2f(-0.5, 2);
        glEnd();
        glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    glFlush();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    if(load <= 45.0)
        load += 0.092 ;
    if(load > 45.0)
        glutDisplayFunc(displayFront); ///calling the GAME PAGE
    glutPostRedisplay();
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(0,-3,0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-45,-68);
        glVertex2f(load,-68);
        glVertex2f(load,-74);
        glVertex2f(-45,-74);
    glEnd();

    ///COVER DESIGN (MINION EYES)
    glPushMatrix();
        glTranslatef(0,21,0);
        glScalef(0.8,0.8,0);
    ///left glass holder
    glPushMatrix();
        glTranslatef(0, 50, 0);
        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-200,6.5);
            glVertex2f(-33,6.5);
            glVertex2f(-33,-6.5);
            glVertex2f(-200,-6.5);
        glEnd();
    glPopMatrix();

    ///right glass holder
    glPushMatrix();
        glTranslatef(0, 50, 0);
        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(200,6.5);
            glVertex2f(33,6.5);
            glVertex2f(33,-6.5);
            glVertex2f(200,-6.5);
        glEnd();
    glPopMatrix();

    ///MINION RIGHT EYE
    glPushMatrix();
    glTranslatef(40,0,0);
    ///glass decoration
    glPushMatrix();
        glTranslatef(8,49.5,0);
        glColor3f(0.37, 0.37, 0.37);
        glBegin(GL_POLYGON);
            glVertex2f(38.5,8.5);
            glVertex2f(31,8.5);
            glVertex2f(31,-8.5);
            glVertex2f(38.5,-8.5);
        glEnd();
        glTranslatef(-15,0,0);
        glBegin(GL_POLYGON);
            glVertex2f(-38.5,8.5);
            glVertex2f(-31,8.5);
            glVertex2f(-31,-8.5);
            glVertex2f(-38.5,-8.5);
        glEnd();
    glPopMatrix();

    ///glass decoration circles
    glPushMatrix();
        glTranslatef(0,13,0);
        glColor3f(0.22,0.22,0.22);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0,87,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-40,50,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(40,50,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-34,70,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(34,70,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-20,82,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(20,82,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-34,30,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(34,30,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-21,18,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(21,18,0);
        circle(2,2);
    glPopMatrix();

    ///MINION EYE
    glPushMatrix();
        glTranslatef(0, 50, 0);
        glColor3f(0.37, 0.37, 0.37);
        circle(40,37);
        glColor3f(0.97, 0.97, 0.39);
        circle(29,26);
        glColor3f(1.0, 1.0, 1.0);
        circle(26,23);
        glPushMatrix();
            glColor3f(0.59, 0.29, 0.0);
            circle(10,9);
            glColor3f(0.0, 0.0, 0.0);
            circle(6,5);
        glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    /// RIGHT EYE
    glPushMatrix();
    glTranslatef(-40,0,0);
    ///glass decoration
    glPushMatrix();
        glTranslatef(8,49.5,0);
        glColor3f(0.37, 0.37, 0.37);
        glBegin(GL_POLYGON);
            glVertex2f(38.5,8.5);
            glVertex2f(31,8.5);
            glVertex2f(31,-8.5);
            glVertex2f(38.5,-8.5);
        glEnd();
        glTranslatef(-15,0,0);
        glBegin(GL_POLYGON);
            glVertex2f(-38.5,8.5);
            glVertex2f(-31,8.5);
            glVertex2f(-31,-8.5);
            glVertex2f(-38.5,-8.5);
        glEnd();
    glPopMatrix();

    ///glass decoration circles
    glPushMatrix();
        glTranslatef(0,13,0);
        glColor3f(0.22,0.22,0.22);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(0,87,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-40,50,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(40,50,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-34,70,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(34,70,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-20,82,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(20,82,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-34,30,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(34,30,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-21,18,0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(21,18,0);
        circle(2,2);
    glPopMatrix();

    ///MINION EYE
    glPushMatrix();
        glTranslatef(0, 50, 0);
        glColor3f(0.37, 0.37, 0.37);
        circle(40,37);
        glColor3f(0.97, 0.97, 0.39);
        circle(29,26);
        glColor3f(1.0, 1.0, 1.0);
        circle(26,23);
        glPushMatrix();
            glColor3f(0.59, 0.29, 0.0);
            circle(10,9);
            glColor3f(0.0, 0.0, 0.0);
            circle(6,5);
        glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    ///end of COVER DESIGN (MINION EYES)

    ///3 MINIONS
    glPushMatrix();
    glTranslatef(-5,10,0);
    ///MINION ONE
    glPushMatrix();
    glTranslatef(40,-19,0);
    glScalef(0.9,1.1,0);
    ///MINION body
    glPushMatrix();
        glColor3f(0.93, 0.90, 0.0);
        circle(20,15);
        glColor3f(0.0, 0.0, 0.65);
        glTranslatef(0,-25,0);
        circle(20,15);
        glPopMatrix();
        glPushMatrix();
        glColor3f(0.93, 0.90, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-20,0);
            glVertex2f(20,0);
            glVertex2f(20,-25);
            glVertex2f(-20,-25);
        glEnd();
    glPopMatrix();

    glPushMatrix();
        ///EYES
        glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(-20,1);
            glVertex2f(-8,1);
            glVertex2f(-8,-1);
            glVertex2f(-20,-1);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.0);
            glVertex2f(20,1);
            glVertex2f(8,1);
            glVertex2f(8,-1);
            glVertex2f(20,-1);
        glEnd();
        glColor3f(0.37, 0.37, 0.37);
        circle(8.5,7.5);
        glColor3f(1.0,1.0,1.0);
        circle(6.5,5.5);
        glPushMatrix();
            glTranslatef(-4,0,0);
            glColor3f(0.59, 0.29, 0.0);
            circle(3,2.5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-5,0,0);
            glColor3f(0.0, 0.0, 0.0);
            circle(1.5,1.5);
        glPopMatrix();
        glPushMatrix();
            glRotatef(-90,0,0,1);
            glColor3f(0.93, 0.90, 0.0);
            halfcircle(6,7);
        glPopMatrix();
        ///MOUTH (sad face)
        glPushMatrix();
            glTranslatef(0,-18,0);
            glRotatef(-90,0,0,1);
            glColor3f(0.0,0.0,0.0);
            halfcircle(6,8);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(0,-18.5,0);
            glRotatef(-90,0,0,1);
            glColor3f(0.93,0.90,0.0);
            halfcircle(6,8);
        glPopMatrix();
        glPushMatrix();
            glColor3f(0.93,0.90,0.0);
            glTranslatef(-15,-12,0);
            glBegin(GL_POLYGON);
                glVertex2f(24,-2);
                glVertex2f(6,-2);
                glVertex2f(6,-5);
                glVertex2f(24,-5);
            glEnd();
        glPopMatrix();
    glPopMatrix();
    ///DRESS
    glPushMatrix();
        glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.65);
            glVertex2f(-12,-17);
            glVertex2f(-12,-25);
            glVertex2f(12,-25);
            glVertex2f(12,-17);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(12,-17);
            glVertex2f(12,-20);
            glVertex2f(20,-12);
            glVertex2f(20,-9);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-12,-17);
            glVertex2f(-12,-20);
            glVertex2f(-20,-12);
            glVertex2f(-20,-9);
        glEnd();
    glPopMatrix();
    ///POCKET
    glPushMatrix();
        glTranslatef(0,-22,0);
        glRotatef(90,0,0,1);
        glColor3f(0.0,0.0,0.90);
        halfcircle(6,5);
    glPopMatrix();
    ///BUTTONS
    glPushMatrix();
        glColor3f(0.0,0.0,0.0);
        glTranslatef(-9,-20,0);
        circle(1.5,1.5);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(9,-20,0);
        circle(1.5,1.5);
    glPopMatrix();
    ///LEGS
    glPushMatrix();
        glColor3f(0.0, 0.0, 0.65);
        glTranslatef(-6,-39,0);
        circle(4,3);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(6,-39,0);
        circle(4,3);
    glPopMatrix();

    ///SHOES
    glPushMatrix();
        glColor3f(0.0,0.0,0.0);
        glScaled(0.7,0.7,0);
        glTranslatef(-18.5,-17,0);
        glBegin(GL_POLYGON);
            glVertex2f(14,-41);
            glVertex2f(5,-41);
            glVertex2f(-1,-46);
            glVertex2f(8,-46);
            glVertex2f(10,-44);
            glVertex2f(10,-46);
            glVertex2f(14,-46);
        glEnd();
    glPopMatrix();
    glPushMatrix();
        glColor3f(0.0,0.0,0.0);
        glScaled(0.7,0.7,0);
        glTranslatef(18.5,-17,0);
        glBegin(GL_POLYGON);
            glVertex2f(-14,-41);
            glVertex2f(-5,-41);
            glVertex2f(1,-46);
            glVertex2f(-8,-46);
            glVertex2f(-10,-44);
            glVertex2f(-10,-46);
            glVertex2f(-14,-46);
        glEnd();
    glPopMatrix();

    ///RIGHT HAND
    glPushMatrix();
        glTranslatef(-66,-13,0);
        glRotatef(65,0,0,1);
        glColor3f(0.93,0.90,0.0);
        glBegin(GL_POLYGON);
            glVertex2f(17,-42);
            glVertex2f(4,-42);
            glVertex2f(4,-45);
            glVertex2f(17,-45);
        glEnd();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-25,-28,0);
        glRotatef(60,0,0,1);
        glColor3f(0.0,0.0,0.0);
        circle(4,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-23,-26.5,0);
        glRotatef(60,0,0,1);
        circle(2,2.5);
    glPopMatrix();

    ///LEFT HAND
    glPushMatrix();
        glTranslatef(55,12,0);
        glRotatef(-30,0,0,1);
        glColor3f(0.93,0.90,0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-17,-42);
            glVertex2f(-4,-42);
            glVertex2f(-4,-45);
            glVertex2f(-17,-45);
        glEnd();
    glPopMatrix();
    glPushMatrix();
        glTranslatef(29,-20,0);
        glColor3f(0.0,0.0,0.0);
        circle(1.5,1.5);
    glPopMatrix();

    ///GUITAR
    glPushMatrix();
        glTranslatef(36,-3,0);
        ///top
        glPushMatrix();
            glColor3f(0.59,0.29,0.0);
            glRotatef(35,0,0,1);
            glTranslatef(-19,-9,0);
            glBegin(GL_POLYGON);
                glVertex2f(12,4);
                glVertex2f(19,7);
                glVertex2f(22,1.5);
                glVertex2f(15,-2);
            glEnd();
        glPopMatrix();
        ///fret board
        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glRotatef(35,0,0,1);
            glTranslatef(-22,-13,0);
            glBegin(GL_POLYGON);
                glVertex2f(0,0);
                glVertex2f(16,7);
                glVertex2f(18,3.5);
                glVertex2f(0,-4);
            glEnd();
        glPopMatrix();
        ///body
        glPushMatrix();
            glColor3f(0.59,0.29,0.0);
            glTranslatef(-9,-25,0);
            glRotatef(-17,0,0,1);
            circle(8,4);
        glPopMatrix();
        glPushMatrix();
            glColor3f(0.59,0.29,0.0);
            glTranslatef(-13,-32,0);
            glRotatef(-8,0,0,1);
            circle(10,7);
        glPopMatrix();
        ///hole
        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glTranslatef(-11,-27,0);
            glRotatef(-20,0,0,1);
            circle(3,2.5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(13.5,0.5,0);
            glRotatef(-26,0,0,1);
            glColor3f(0.0,0.0,0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-14,-43);
                glVertex2f(-7,-43);
                glVertex2f(-7,-45);
                glVertex2f(-14,-45);
            glEnd();
        glPopMatrix();
        ///wires
        glPushMatrix();
            glTranslatef(-13,-28,0);
            glRotatef(58,0,0,1);
            glColor3f(1.0,1.0,1.0);
            glBegin(GL_LINES);
                glVertex2d(-7,0);
                glVertex2d(27,0);
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-12,-28,0);
            glRotatef(58,0,0,1);
            glBegin(GL_LINES);
                glVertex2d(-7.5,0);
                glVertex2d(26.5,0);
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-11,-28,0);
            glRotatef(58,0,0,1);
            glColor3f(1.0,1.0,1.0);
            glBegin(GL_LINES);
                glVertex2d(-8,0);
                glVertex2d(26,0);
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-10,-28,0);
            glRotatef(58,0,0,1);
            glColor3f(1.0,1.0,1.0);
            glBegin(GL_LINES);
                glVertex2d(-8.5,0);
                glVertex2d(25.5,0);
            glEnd();
        glPopMatrix();
    glPopMatrix();
    ///LEFT HAND (holding guitar)
    glPushMatrix();
        glColor3f(0.0,0.0,0.0);
        glTranslatef(33,-22,0);
        circle(2,3);
    glPopMatrix();

    glPopMatrix();
    ///end of MINION ONE

    ///MINION TWO
    glPushMatrix();
    glTranslatef(-2,-10,0);
    glScalef(0.7,1.3,0);

    glPushMatrix();
        glRotatef(6,0,0,1);
        ///MINION body
        glPushMatrix();
            glColor3f(0.93, 0.90, 0.0);
            circle(20,15);
            glColor3f(0.0, 0.0, 0.65);
            glTranslatef(0,-25,0);
            circle(20,15);
            glPopMatrix();
            glPushMatrix();
            glColor3f(0.93, 0.90, 0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-20,0);
                glVertex2f(20,0);
                glVertex2f(20,-25);
                glVertex2f(-20,-25);
            glEnd();
        glPopMatrix();

        glPushMatrix();
            ///EYES
            glPushMatrix();
                glTranslatef(0,3,0);
                glBegin(GL_POLYGON);
                    glColor3f(0.0, 0.0, 0.0);
                    glVertex2f(-20,1);
                    glVertex2f(-8,1);
                    glVertex2f(-8,-1);
                    glVertex2f(-20,-1);
                glEnd();
                glBegin(GL_POLYGON);
                    glColor3f(0.0, 0.0, 0.0);
                    glVertex2f(20,1);
                    glVertex2f(8,1);
                    glVertex2f(8,-1);
                    glVertex2f(20,-1);
                glEnd();
                ///right eye
                glPushMatrix();
                    glTranslatef(-7,0,0);
                    glColor3f(0.37, 0.37, 0.37);
                    circle(7,6);
                    glColor3f(1.0,1.0,1.0);
                    circle(5.5,5);
                    glPushMatrix();
                        glTranslatef(-2,-2,0);
                        glColor3f(0.59, 0.29, 0.0);
                        circle(3,2.5);
                    glPopMatrix();
                    glPushMatrix();
                        glTranslatef(-3,-2.5,0);
                        glColor3f(0.0, 0.0, 0.0);
                        circle(1.5,1.5);
                    glPopMatrix();
                    glPushMatrix();
                        glRotatef(-90,0,0,1);
                        glColor3f(0.93, 0.90, 0.0);
                        halfcircle(5.5,5.5);
                    glPopMatrix();
                glPopMatrix();
                ///left eye
                glPushMatrix();
                    glTranslatef(7,0,0);
                    glColor3f(0.37, 0.37, 0.37);
                    circle(7,6);
                    glColor3f(1.0,1.0,1.0);
                    circle(5.5,5);
                    glPushMatrix();
                        glTranslatef(-2,-2,0);
                        glColor3f(0.59, 0.29, 0.0);
                        circle(3,2.5);
                    glPopMatrix();
                    glPushMatrix();
                        glTranslatef(-3,-2.5,0);
                        glColor3f(0.0, 0.0, 0.0);
                        circle(1.5,1.5);
                    glPopMatrix();
                    glPushMatrix();
                        glRotatef(-90,0,0,1);
                        glColor3f(0.93, 0.90, 0.0);
                        halfcircle(5.5,5.5);
                    glPopMatrix();
                glPopMatrix();
            glPopMatrix();
            ///MOUTH (laugh face with teeth)
            glPushMatrix();
                glPushMatrix();
                    glTranslatef(0,-10,0);
                    glRotatef(90,0,0,1);
                    glColor3f(0.0,0.0,0.0);
                    halfcircle(2.5,9.5);
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(-7,-10,0);
                    glRotatef(90,0,0,1);
                    glColor3f(1.0,1.0,1.0);
                    halfcircle(1,3);
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(-0.5,-10,0);
                    glRotatef(90,0,0,1);
                    glColor3f(1.0,1.0,1.0);
                    halfcircle(1,3);
                glPopMatrix();
                glPushMatrix();
                    glTranslatef(6,-10,0);
                    glRotatef(90,0,0,1);
                    glColor3f(1.0,1.0,1.0);
                    halfcircle(1,3);
                glPopMatrix();
            glPopMatrix();
        glPopMatrix();
        ///DRESS
        glPushMatrix();
            glBegin(GL_POLYGON);
                glColor3f(0.0, 0.0, 0.65);
                glVertex2f(-12,-17);
                glVertex2f(-12,-25);
                glVertex2f(12,-25);
                glVertex2f(12,-17);
            glEnd();
            glBegin(GL_POLYGON);
                glVertex2f(12,-17);
                glVertex2f(12,-20);
                glVertex2f(20,-12);
                glVertex2f(20,-9);
            glEnd();
            glBegin(GL_POLYGON);
                glVertex2f(-12,-17);
                glVertex2f(-12,-20);
                glVertex2f(-20,-12);
                glVertex2f(-20,-9);
            glEnd();
        glPopMatrix();
        ///POCKET
        glPushMatrix();
            glTranslatef(0,-22,0);
            glRotatef(90,0,0,1);
            glColor3f(0.0,0.0,0.90);
            halfcircle(6,5);
        glPopMatrix();
        ///BUTTONS
        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glTranslatef(-9,-20,0);
            circle(1.5,1.5);
            glPopMatrix();
            glPushMatrix();
            glTranslatef(9,-20,0);
            circle(1.5,1.5);
        glPopMatrix();

        ///RIGHT HAND
        glPushMatrix();
        glTranslatef(-66,-13,0);
        glRotatef(65,0,0,1);
        glColor3f(0.93,0.90,0.0);
        glBegin(GL_POLYGON);
            glVertex2f(17,-42);
            glVertex2f(4,-42);
            glVertex2f(4,-45);
            glVertex2f(17,-45);
        glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-25,-28,0);
            glRotatef(60,0,0,1);
            glColor3f(0.0,0.0,0.0);
            circle(4,2);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-23,-26.5,0);
            glRotatef(60,0,0,1);
            circle(2,2.5);
        glPopMatrix();

        ///LEFT HAND
        glPushMatrix();
            glTranslatef(61,2,0);
            glRotatef(-50,0,0,1);
            glColor3f(0.93,0.90,0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-14,-42);
                glVertex2f(-4,-42);
                glVertex2f(-4,-45);
                glVertex2f(-14,-45);
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(25,-23,0);
            circle(1.5,1.5);
        glPopMatrix();
        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glTranslatef(23,-24,0);
            circle(1.5,1.5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(17.5,-22.5,0);
            circle(2,1);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(18.5,-24,0);
            circle(6,1.5);
        glPopMatrix();
    glPopMatrix();

    ///LEGS
    glPushMatrix();
        glTranslatef(5,0,0);
        glPushMatrix();
            glColor3f(0.0, 0.0, 0.65);
            glTranslatef(-6,-39,0);
            circle(4,3);
            glPopMatrix();
            glPushMatrix();
            glTranslatef(6,-39,0);
            circle(4,3);
        glPopMatrix();
        ///SHOES
        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glScaled(0.7,0.7,0);
            glTranslatef(-18.5,-17,0);
            glBegin(GL_POLYGON);
                glVertex2f(14,-41);
                glVertex2f(5,-41);
                glVertex2f(-1,-46);
                glVertex2f(8,-46);
                glVertex2f(10,-44);
                glVertex2f(10,-46);
                glVertex2f(14,-46);
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glColor3f(0.0,0.0,0.0);
            glScaled(0.7,0.7,0);
            glTranslatef(18.5,-17,0);
            glBegin(GL_POLYGON);
                glVertex2f(-14,-41);
                glVertex2f(-5,-41);
                glVertex2f(1,-46);
                glVertex2f(-8,-46);
                glVertex2f(-10,-44);
                glVertex2f(-10,-46);
                glVertex2f(-14,-46);
            glEnd();
        glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    ///end of MINION TWO

    ///MINION THREE
    glPushMatrix();
    glTranslatef(-40,-29.5,0);
    glScalef(1.0,0.85,0);

    glPushMatrix();
    glRotatef(5,0,0,1);
    ///MINION body
    glPushMatrix();
        glColor3f(0.93, 0.90, 0.0);
        circle(20,15);
        glColor3f(0.0, 0.0, 0.65);
        glTranslatef(-0.5,-25,0);
        glRotatef(-20,0,0,1);
        circle(20,15);
    glPopMatrix();
    glPushMatrix();
        glColor3f(0.93, 0.90, 0.0);
        glBegin(GL_POLYGON);
            glVertex2f(-20,0);
            glVertex2f(20,0);
            glVertex2f(20,-25);
            glVertex2f(-20,-25);
        glEnd();
    glPopMatrix();

    glPushMatrix();
        ///glass handlers
        glPushMatrix();
            glRotatef(10,0,0,1);
            glTranslatef(0,5,0);
            glBegin(GL_POLYGON);
                glColor3f(0.0, 0.0, 0.0);
                glVertex2f(-19,1);
                glVertex2f(-8,1);
                glVertex2f(-8,-1);
                glVertex2f(-20,-1);
            glEnd();
        glPopMatrix();
        ///EYES 1
        glPushMatrix();
        glRotatef(10,0,0,1);
        glScalef(0.9,0.9,0);
        glTranslatef(2,6,0);
        glPushMatrix();
            glTranslatef(-8,0,0);
            glColor3f(0.37, 0.37, 0.37);
            circle(8,7);
            glColor3f(1.0,1.0,1.0);
            circle(6.5,5.5);
            glPushMatrix();
                glColor3f(0.59, 0.29, 0.0);
                circle(3,2.5);
            glPopMatrix();
            glPushMatrix();
                glColor3f(0.0, 0.0, 0.0);
                circle(1.5,1.5);
            glPopMatrix();
        glPopMatrix();
        ///EYE 2
        glPushMatrix();
            glTranslatef(8,0,0);
            glColor3f(0.37, 0.37, 0.37);
            circle(8,7);
            glColor3f(1.0,1.0,1.0);
            circle(6.5,5.5);
            glPushMatrix();
                glColor3f(0.59, 0.29, 0.0);
                circle(3,2.5);
            glPopMatrix();
            glPushMatrix();
                glColor3f(0.0, 0.0, 0.0);
                circle(1.5,1.5);
            glPopMatrix();
        glPopMatrix();
        glPopMatrix();
        ///MOUTH (happy face)
        glPushMatrix();
            glRotatef(12,0,0,1);
            glTranslatef(0,5,0);
            glPushMatrix();
                glTranslatef(0,-8,0);
                glRotatef(90,0,0,1);
                glColor3f(0.0,0.0,0.0);
                halfcircle(6,8);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(0,-7,0);
                glRotatef(90,0,0,1);
                glColor3f(0.93,0.90,0.0);
                halfcircle(6,8);
            glPopMatrix();
            glPushMatrix();
                glColor3f(0.93,0.90,0.0);
                glTranslatef(-15,-6,0);
                glBegin(GL_POLYGON);
                    glVertex2f(24,-2);
                    glVertex2f(6,-2);
                    glVertex2f(6,-5);
                    glVertex2f(24,-5);
                glEnd();
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
    ///DRESS
    glPushMatrix();
        glBegin(GL_POLYGON);
            glColor3f(0.0, 0.0, 0.65);
            glVertex2f(-12,-17);
            glVertex2f(-12,-25);
            glVertex2f(12,-25);
            glVertex2f(12,-17);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(12,-17);
            glVertex2f(12,-20);
            glVertex2f(20,-12);
            glVertex2f(20,-9);
        glEnd();
        glBegin(GL_POLYGON);
            glVertex2f(-12,-17);
            glVertex2f(-12,-20);
            glVertex2f(-20,-12);
            glVertex2f(-20,-9);
        glEnd();
    glPopMatrix();
    ///POCKET
    glPushMatrix();
        glTranslatef(0,-22,0);
        glRotatef(90,0,0,1);
        glColor3f(0.0,0.0,0.90);
        halfcircle(6,5);
    glPopMatrix();
    ///BUTTONS
    glPushMatrix();
        glColor3f(0.0,0.0,0.0);
        glTranslatef(-9,-20,0);
        circle(1.5,1.5);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(9,-20,0);
        circle(1.5,1.5);
    glPopMatrix();

    ///LEFT HAND
    glPushMatrix();
        glPushMatrix();
            glTranslatef(64.5,-8,0);
            glRotatef(-65,0,0,1);
            glColor3f(0.93,0.90,0.0);
            glBegin(GL_POLYGON);
                glVertex2f(-14,-42);
                glVertex2f(-4,-42);
                glVertex2f(-4,-45);
                glVertex2f(-14,-45);
            glEnd();
        glPopMatrix();
        glPushMatrix();
            glTranslatef(23.5,-23,0);
            circle(1.5,1.5);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-10,-27,0);
            glRotatef(50,0,0,1);
            glPushMatrix();
                glColor3f(0.0,0.0,0.0);
                glTranslatef(23,-24,0);
                circle(1.5,1.5);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(17.5,-22.5,0);
                circle(2,1);
            glPopMatrix();
            glPushMatrix();
                glTranslatef(18.5,-24,0);
                circle(6,1.5);
            glPopMatrix();
        glPopMatrix();
    glPopMatrix();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5,0,0);
    ///LEGS
    glPushMatrix();
        glColor3f(0.0, 0.0, 0.65);
        glTranslatef(-6,-39,0);
        circle(4,3);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(6,-39,0);
        circle(4,3);
    glPopMatrix();

    ///SHOES
    glPushMatrix();
        glColor3f(0.0,0.0,0.0);
        glScaled(0.7,0.7,0);
        glTranslatef(-18.5,-17,0);
        glBegin(GL_POLYGON);
            glVertex2f(14,-41);
            glVertex2f(5,-41);
            glVertex2f(-1,-46);
            glVertex2f(8,-46);
            glVertex2f(10,-44);
            glVertex2f(10,-46);
            glVertex2f(14,-46);
        glEnd();
    glPopMatrix();
    glPushMatrix();
        glColor3f(0.0,0.0,0.0);
        glScaled(0.7,0.7,0);
        glTranslatef(18.5,-17,0);
        glBegin(GL_POLYGON);
            glVertex2f(-14,-41);
            glVertex2f(-5,-41);
            glVertex2f(1,-46);
            glVertex2f(-8,-46);
            glVertex2f(-10,-44);
            glVertex2f(-10,-46);
            glVertex2f(-14,-46);
        glEnd();
    glPopMatrix();
    glPopMatrix();

    ///RIGHT HAND
    glPushMatrix();
        glTranslatef(-13,20,0);
        glColor3f(0.93,0.90,0);
        glBegin(GL_POLYGON);
            glVertex2f(-14,-41);
            glVertex2f(-10,-41);
            glVertex2f(-10,-46);
            glVertex2f(-14,-46);
        glEnd();
    glPopMatrix();

    ///TEDDY HEAD
    glPushMatrix();
        glRotatef(20,0,0,1);
        glTranslatef(-28,-6,0);
        glColor3f(0.59,0.29,0.0);
        circle(8,6);
    glPopMatrix();
    ///TEDDY BODY
    glPushMatrix();
        glTranslatef(-18,-24,0);
        glRotatef(-40,0,0,1);
        glColor3f(0.59,0.29,0.0);
        circle(8,6);
    glPopMatrix();
    ///TEDDY LEGS
    glPushMatrix();
        glTranslatef(-10,-28,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.59,0.29,0.0);
        circle(3,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-15,-32,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.59,0.29,0.0);
        circle(3,2);
    glPopMatrix();
    ///TEDDY EARS
    glPushMatrix();
        glTranslatef(-32,-17,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.59,0.29,0.0);
        circle(2,2);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-21.5,-9.5,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.59,0.29,0.0);
        circle(2,2);
    glPopMatrix();
    ///TEDDY FACE
    glPushMatrix();
        glTranslatef(-21.5,-11,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.78,0.32,0.0);
        circle(1.5,1.5);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-21.5,-11,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.0,0.0,0.0);
        circle(1,1);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-24.5,-13,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.78,0.32,0.0);
        circle(1.5,1.5);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-24.5,-13,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.0,0.0,0.0);
        circle(1,1);
    glPopMatrix();
    glPushMatrix();
        glTranslatef(-20.5,-15,0);
        glRotatef(-60,0,0,1);
        glColor3f(0.0,0.0,0.0);
        circle(1,1);
    glPopMatrix();

    ///RIGHT HAND (holding teddy)
    glPushMatrix();
        glTranslatef(-33,9,0);
        glRotatef(55,0,0,1);
        glPushMatrix();
            glTranslatef(-25,-28,0);
            glRotatef(60,0,0,1);
            glColor3f(0.0,0.0,0.0);
            circle(4,2);
        glPopMatrix();
        glPushMatrix();
            glTranslatef(-23,-26.5,0);
            glRotatef(60,0,0,1);
            circle(2,2.5);
        glPopMatrix();
    glPopMatrix();

    glPopMatrix();
    ///end of MINION THREE

    glPopMatrix();
    ///end of 3 MINIONS

    glPopMatrix();
	glFlush();
}

#endif // FUNCTIONS_H_INCLUDED
