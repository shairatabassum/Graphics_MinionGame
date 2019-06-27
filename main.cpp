#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
#define PI 3.1416

#include "functions.h"

void drawCrescentLine(float step,float scale,float fullness) {
   float angle=0.0f;
   while (angle<M_PI) {
      glVertex2f(scale*sinf(angle),scale*cosf(angle));
      angle+=step;
   }
   while (angle<(2.0f*M_PI)) {
      glVertex2f(fullness*scale*sinf(angle),scale*cosf(angle));
      angle+=step;
   }
   glVertex2f(0.0f,scale);
}

void init(void) {
	glClearColor (0.97, 0.97, 0.39, 1.0);
	//glClearColor(1.0,1.0,1.0,1.0);
	glOrtho(-100, 100, -100, 100, -100, 100);
}

void spe_key(int key, int x, int y) {
    if(load <= 45.0)
        return;
    if(startgame==0)
        return;
    if(stop == 1)
        return;
    if(endgame == 1)
        return;
    switch (key)
    {

    case GLUT_KEY_LEFT:
        if(tx <= -95)
            return;
        tx -= 1;
        glutDisplayFunc(displayLeft);
        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        if(tx >= 95)
            return;
        tx += 1;
        glutDisplayFunc(displayRight);
        glutPostRedisplay();
        break;

    case GLUT_KEY_DOWN:
            if(ty <= -70)
                return;
            ty -= 1;
            sx += 0.01;
            sy += 0.01;
            glutDisplayFunc(displayFront);
            glutPostRedisplay();
            break;

    case GLUT_KEY_UP:
            if(ty >= 25)
                return;
            ty += 1;
            sx -= 0.01;
            sy -= 0.01;
            glutDisplayFunc(displayBack);
            glutPostRedisplay();
            break;
    default:
        break;
    }
}

void normal_key(unsigned char key, int x, int y)
{
    if(load <= 45.0)
        return;
   /* if(g_counter > 30)
        return;*/
	switch (key) {
        case 'n':
            if(startgame==0)
                return;
            if(stop == 1)
                return;
            startgame = 1;
            endgame = 0;
            g_counter = 0;
            score = 0;
            glutDisplayFunc(display); ///calling the GAME PAGE
            glutPostRedisplay();
            break;
        case 's':
            if(endgame == 1)
                return;
            if(startgame == 1)
                return; //s won't work if game is already started
            startgame = 1; //start the game and timer
            glutTimerFunc(1000, timer, g_counter);
            break;
	    case 'p':
	        if(endgame == 1)
                return;
	        if(startgame == 0) //p won't work if game is not started yet
                return;
            if(stop == 0)
                stop = 1; //pause the game
            else if(stop == 1)
                stop = 0; //unpause the game
            glutTimerFunc(1000, timer, g_counter);
            break;
	    default:
			break;
	}

}

int main()
{
    PlaySound("BananaSong.wav", NULL, SND_FILENAME| SND_ASYNC);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (700, 800);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Graphics Lab Project");
	init();
	glutDisplayFunc(display);
	glutSpecialFunc(spe_key);
	glutKeyboardFunc(normal_key);
	//glutTimerFunc(1000, timer, g_counter);
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}
