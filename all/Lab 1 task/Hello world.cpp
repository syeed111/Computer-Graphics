// C++ program to print
// message as colored characters
#include<stdio.h>
#include<graphics.h>
#include<dos.h>


void printMsg()
{

	int gdriver = DETECT,gmode,i;

	// initialize graphics mode
	initgraph(&gdriver,&gmode,"");

	for (i=3; i<7; i++)
	{
		// setcolor of cursor
		setcolor(i);

		// set text style as
		// settextstyle(font, orientation, size)
		settextstyle(i,0,i);

		// print text at coordinate x,y;
		outtextxy(100,20*i,"Hello World");

		delay(500);
	}
	delay(2000);
}
int main()
{
	printMsg();

}
