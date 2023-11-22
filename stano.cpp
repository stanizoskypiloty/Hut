#ifdef APPLE_CC
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void drawHut() {
  
  glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex3f(-0.4, -0.6, 0.5);

    glColor3f(0.0, 1.0, 0.0); 
    glVertex3f(0.4, -0.6, 0);

    glColor3f(0.0, 0.0, 1.0); 
    glVertex3f(0.4, 0.2, 0);

    glColor3f(1.0, 1.0, 1.0); 
    glVertex3f(-0.4, 0.2, 0.5);
  glEnd();

  
  glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0); 
    glVertex3f(-0.4, 0.2, 0.5);

    glColor3f(0.0, 1.0, 0.0); 
    glVertex3f(0, 1.0, 0);

    glColor3f(0.0, 0.0, 1.0); 
    glVertex3f(0.4, 0.2, 0.5);
  glEnd();
}

void display() {
  
  glClear(GL_COLOR_BUFFER_BIT);
  drawHut();

  glFlush();
}

int main(int argc, char** argv) {
  
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowPosition(80, 80);
  glutInitWindowSize(400, 300);
  glutCreateWindow("A Simple Colored Hut");

  glutDisplayFunc(display);

  glutMainLoop();
  return 0;
}
