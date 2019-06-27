#ifndef ENEMY_H_INCLUDED
#define ENEMY_H_INCLUDED

void drawenemy(void)
{
    glPushMatrix();
        ///headup:
        glPushMatrix();
        glColor3f(0.4, 0.2, 0.5);
        glTranslatef(0.0,0.0,0.0);
        circle(5,5);
        glPopMatrix();

        ///headmiddle:
        glColor3f(0.4, 0.2, 0.5);
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
        glColor3f(1.0, 0.0, 0.0);
        glTranslatef(0,0,0);
        circle(2.5,2.5);
        glPopMatrix();
        ///headEyeBlackCenter:
        glPushMatrix();
        glColor3f(0.4, 0.0, 0.0);
        glTranslatef(0,0,0);
        circle(1,1);
        glPopMatrix();

        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,0,0);
        glRotatef(-90,0,0,1);
        halfcircle(3,3);
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
        glTranslatef(0,-3.8,0);
        glBegin(GL_POLYGON);
        glVertex2f(1, 0.1);
        glVertex2f(1, -0.2);
        glVertex2f(-1, -0.2);
        glVertex2f(-1, 0.1);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glColor3f(0.0, 0.0, 0.0);
        glTranslatef(0,-4,0);
        glBegin(GL_POLYGON);
        glVertex2f(2, 0.1);
        glVertex2f(2, -0.2);
        glVertex2f(-2, -0.2);
        glVertex2f(-2, 0.1);
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
        glColor3f(0.1, 0.0, 0.0);
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
        glColor3f(0.4, 0.2, 0.5);
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
        glColor3f(0.4, 0.2, 0.5);
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
        glColor3f(0.4, 0.2, 0.5);
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
        glColor3f(0.4, 0.2, 0.5);
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
        glColor3f(0.4, 0.2, 0.5);
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
        glColor3f(0.4, 0.2, 0.5);
        glTranslatef(5,-7.5,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.5, 2);
        glVertex2f(0.5, -2);
        glVertex2f(-0.5, -2);
        glVertex2f(-0.5, 2);
        glEnd();
        glPopMatrix();
}

float enemyscaling(float pos)
{
    float e = 1.0;
    if(pos>= 21 && pos <= 25) { e=0.4; }
    else if(pos>= 16 && pos <= 20) { e=0.5; }
    else if(pos>= 11 && pos <= 15) { e=0.6; }
    else if(pos>= 6 && pos <= 10) { e=0.7; }
    else if(pos>= 1 && pos <= 5) { e=0.8; }
    else if(pos>= -96 && pos <= 0) { e=0.9; }
    else if(pos>= -91 && pos <= 95) { e=1.0; }
    else if(pos>= -86 && pos <= 90) { e=1.1; }
    else if(pos>= -81 && pos <= 89) { e=1.2; }
    else if(pos>= -76 && pos <= 80) { e=1.3; }
    else if(pos>= -70 && pos <= 75) { e=1.4; }
    return e;
}

void Enemy1(void) {
    if(startgame==0)
        return;
    if(load <= 45.0)
        return;
    glPushMatrix();

    if(newE1 == 0)
    {
        newE1 = 1;
        e1y = rand() % (23 - (-70) + 1) + (-70);    ///random position of ghost
        ///ghost scaling
        e1sx = enemyscaling(e1y);
        e1sy = enemyscaling(e1y);
    }

    if(stop==1)
        e1x = e1x;
    else if(e1x<=110.0)
        e1x += speed;
    else
    {
        e1x = -110.0;
        newE1 = 0;
    }

    ///collison logic
    if((e1x >= tx-6 && e1x <= tx+6) && (e1y >= ty-8 && e1y <= ty+8))
    {
        PlaySound("Ghost_collison.wav", NULL, SND_FILENAME| SND_ASYNC);
        e1x = -110.0;
        e3y = -80.0;
        e2x = 110.0;
        e6y = 27.0;
        speed = 0.03;
        endgame = 1;
    }

    ///MOVE
    glPushMatrix();
    glTranslatef(e1x,e1y,0);
    glScalef(e1sx,e1sy,0);
        drawenemy(); ///draw enemy
    glPopMatrix();
    glPopMatrix();
}

void Enemy2(void) {
    if(startgame==0)
        return;
    if(load <= 45.0)
        return;
    glPushMatrix();

    if(newE2 == 0)
    {
        newE2 = 1;
        e2y = rand() % (23 - (-70) + 1) + (-70);    ///random position of ghost
        ///ghost scaling
        e2sx = enemyscaling(e2y);
        e2sy = enemyscaling(e2y);
    }

    if(stop==1)
        e2x = e2x;
    else if(e2x>=-110.0)
        e2x -= speed;
    else
    {
        e2x = 110.0;
        newE2 = 0;
    }

    ///collison logic
    if((e2x >= tx-6 && e2x <= tx+6) && (e2y >= ty-8 && e2y <= ty+8))
    {
        PlaySound("Ghost_collison.wav", NULL, SND_FILENAME| SND_ASYNC);
        e1x = -110.0;
        e3y = -80.0;
        e2x = 110.0;
        e6y = 27.0;
        speed = 0.03;
        endgame = 1;
    }

    ///MOVE
    glPushMatrix();
    glTranslatef(e2x,e2y,0);
    glScalef(e2sx,e2sy,0);
        drawenemy(); ///draw enemy
    glPopMatrix();
    glPopMatrix();
}

void Enemy6(void) {
    if(startgame==0)
        return;
    if(load <= 45.0)
        return;
    glPushMatrix();

    if(newE6 == 0)
    {
        newE6 = 1;
        e6x = rand() % (90 - (-90) + 1) + (-90);    ///random position of ghost
        ///ghost scaling
        e6sx = 0.3;
        e6sy = 0.3;
    }

    if(stop==1)
        e6y = e6y;
    else if(e6y>=-110.0)
    {
        e6y -= 0.12;
        e6sx += 0.001;
        e6sy += 0.001;
    }
    else
    {
        e6y = 27.0;
        e6sx = 0.3;
        e6sy = 0.3;
        newE6 = 0;
    }

    ///collison logic
    if((e6x >= tx-6 && e6x <= tx+6) && (e6y >= ty-8 && e6y <= ty+8))
    {
        PlaySound("Ghost_collison.wav", NULL, SND_FILENAME| SND_ASYNC);
        e1x = -110.0;
        e3y = -80.0;
        e2x = 110.0;
        e6y = 27.0;
        speed = 0.03;
        endgame = 1;
    }

    ///MOVE
    glPushMatrix();
    glTranslatef(e6x,e6y,0);
    glScalef(e6sx,e6sy,0);
        drawenemy(); ///draw enemy
    glPopMatrix();
    glPopMatrix();
}

void Enemy3(void) {
    if(startgame==0)
        return;
    if(load <= 45.0)
        return;
    glPushMatrix();

    if(newE3 == 0)
    {
        newE3 = 1;
        e3x = rand() % (95 - (-95) + 1) + (-95);    ///random position of ghost
        ///ghost scaling
        e3sx = 1.2;
        e3sy = 1.2;
    }

    if(stop==1)
        e3y = e3y;
    else if(e3y<=25.0)
    {
        e3y += 0.12;
        e3sx -= 0.001;
        e3sy -= 0.001;
    }
    else
    {
        e3y = -80.0;
        e3sx = 1.2;
        e3sy = 1.2;
        newE3 = 0;
    }


    ///collison logic
    if((e3x >= tx-6 && e3x <= tx+6) && (e3y >= ty-8 && e3y <= ty+8))
    {
        PlaySound("Ghost_collison.wav", NULL, SND_FILENAME| SND_ASYNC);
        e1x = -110.0;
        e3y = -80.0;
        e2x = 110.0;
        e6y = 27.0;
        speed = 0.03;
        endgame = 1;
    }

    ///MOVE
    glPushMatrix();
    glTranslatef(e3x,e3y,0);
    glScalef(e3sx,e3sy,0);
        drawenemy(); ///draw enemy
    glPopMatrix();
    glPopMatrix();
}

#endif // ENEMY_H_INCLUDED
