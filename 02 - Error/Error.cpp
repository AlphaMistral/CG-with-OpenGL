//
//  main.cpp
//  02 - Error
//
//  Created by 于京平 on 2017/6/11.
//  Copyright © 2017年 于京平. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <GLUT/GLUT.h>

int main ()
{
    GLenum code;
    const GLubyte *string;
    code = glGetError();
    if (code != GL_NO_ERROR)
    {
        string = gluErrorString(code);
        fprintf(stderr, "OpenGL Error: %s\n", string);
    }
    return 0;
}
