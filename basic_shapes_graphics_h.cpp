/*
 * CGM Lab Assignment 1 - Basic Shapes
 * Draws a line, circle, rectangle and triangle in a single program.
 *
 * Library : graphics.h (Turbo C++ / WinBGIm with Code::Blocks / Dev-C++)
 * Language: C++
 */

#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");   // for Turbo C++ put BGI path here, e.g. "C:\\TC\\BGI"

    setbkcolor(BLACK);
    cleardevice();

    // 1. Straight line
    setcolor(WHITE);
    line(50, 50, 250, 50);
    outtextxy(100, 60, (char *)"Line");

    // 2. Circle
    setcolor(YELLOW);
    circle(400, 80, 40);               // centre (400, 80), radius 40
    outtextxy(380, 130, (char *)"Circle");

    // 3. Rectangle
    setcolor(GREEN);
    rectangle(50, 180, 250, 280);      // left, top, right, bottom
    outtextxy(120, 290, (char *)"Rectangle");

    // 4. Triangle (three lines joining three points)
    setcolor(CYAN);
    line(400, 180, 340, 280);          // apex  -> bottom-left
    line(340, 280, 460, 280);          // bottom-left -> bottom-right
    line(460, 280, 400, 180);          // bottom-right -> apex
    outtextxy(375, 290, (char *)"Triangle");

    getch();
    closegraph();
    return 0;
}
