#include<stdio.h>
#include<dos.h>
void main()
{
	int i;

	textcolor(RED);
	textbackground(WHITE);
	for(i=1;i<=50;i++)
	{
		cprintf("  I LOVE YOU   \3");
		delay(200);
	}
}
