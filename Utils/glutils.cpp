#include "glutils.h"
#include "qgl.h"

GLUtils::GLUtils()
{
}

void GLUtils::GLDrawLine(int ax, int ay, int az, int bx, int by, int bz, int width, int r, int g, int b, int a )
{
    glDisable(GL_TEXTURE_2D);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glLineWidth(width);
    glBegin(GL_LINES);
    glColor4ub( r, g, b, a);
    glVertex3i( ax, ay, az);
    glVertex3i( bx, by, bz);
    glEnd();

    glDisable(GL_BLEND);
    glEnable(GL_TEXTURE_2D);
}
