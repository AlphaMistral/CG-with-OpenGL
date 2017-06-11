//
//  main.cpp
//  CG with OpenGL
//
//  Created by 于京平 on 2017/6/11.
//  Copyright © 2017年 于京平. All rights reserved.
//

#include <iostream>
#include <GLUT/GLUT.h>

void LineSegment ()
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 0.4, 0.2);
    glBegin(GL_LINES);
    glVertex2i(180, 15);
    glVertex2i(10, 145);
    glEnd();
    glFlush();
}

int main(int argc, char ** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50, 100);
    glutInitWindowSize(400, 300);
    glutCreateWindow("A Mother Fucking Example!");
    
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 200.0, 0.0, 150.0);
    
    glutDisplayFunc(LineSegment);
    glutMainLoop();
    
    return 0;
    
}
