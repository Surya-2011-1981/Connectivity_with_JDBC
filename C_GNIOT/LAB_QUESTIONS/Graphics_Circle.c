#include <graphics.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Set background color and clear the screen
    setbkcolor(WHITE);
    cleardevice();

    // Draw a rectangle
    setcolor(BLUE);
    rectangle(100, 100, 300, 200); // Top-left (100,100), Bottom-right (300,200)

    // Draw a circle
    setcolor(RED);
    circle(200, 300, 50); // Center (200,300), Radius 50

    // Hold the output screen until a key is pressed
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}
