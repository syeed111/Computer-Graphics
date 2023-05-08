#include <graphics.h>
#include <conio.h>



main()
{
    int gd = DETECT, gm;

    //init graphics
    initgraph(&gd, &gm, (char*) "");

    setcolor(GREEN);
     settextstyle(SANS_SERIF_FONT,0,5);
    outtextxy(60, 10, "Hello");

    setcolor(RED);
    settextstyle(SANS_SERIF_FONT,0,5);
    outtextxy(180, 10, " World");

    line(400,50,400,470);
    circle(300,130,50);
    rectangle(220-30,70, 400,210);



    getch();
    closegraph();
    return 0;
}

