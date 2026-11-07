/*
 * CGM Lab Assignment 1 - Basic Shapes
 * Draws a line, circle, rectangle and triangle in a single program.
 *
 * Library : OpenGL + GLUT (freeglut)
 * Language: C++
 *
 * Compile (Linux)  : g++ basic_shapes_opengl.cpp -o shapes -lGL -lGLU -lglut
 * Compile (Windows): g++ basic_shapes_opengl.cpp -o shapes -lfreeglut -lopengl32 -lglu32
 * Compile (macOS)  : g++ basic_shapes_opengl.cpp -o shapes -framework OpenGL -framework GLUT
 */

#include <GL/glut.h>      // on macOS use <GLUT/glut.h>
#include <cmath>

const float PI = 3.14159265f;

// 1. Straight line
void drawLine()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINES);
        glVertex2f(50, 550);
        glVertex2f(250, 550);
    glEnd();
}

// 2. Circle (approximated with many small segments)
void drawCircle(float cx, float cy, float r)
{
    glColor3f(1.0f, 1.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
        for (int i = 0; i < 100; i++) {
            float angle = 2.0f * PI * i / 100;
            glVertex2f(cx + r * cos(angle), cy + r * sin(angle));
        }
    glEnd();
}

// 3. Rectangle
void drawRectangle()
{
    glColor3f(0.0f, 1.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(50, 300);
        glVertex2f(250, 300);
        glVertex2f(250, 400);
        glVertex2f(50, 400);
    glEnd();
}

// 4. Triangle
void drawTriangle()
{
    glColor3f(0.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_LOOP);
        glVertex2f(400, 400);   // apex
        glVertex2f(340, 300);   // bottom-left
        glVertex2f(460, 300);   // bottom-right
    glEnd();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    drawLine();
    drawCircle(400, 520, 40);
    drawRectangle();
    drawTriangle();

    glFlush();
}

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glLineWidth(2.0f);
    gluOrtho2D(0, 600, 0, 600);   // 2D coordinate system: x 0-600, y 0-600
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("CGM Lab Assignment 1 - Basic Shapes");

    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
