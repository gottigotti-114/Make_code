/****************************
ex19.c ü•ª‚Ì‘€ì
*****************************/
#include <stdio.h>

struct point {
	int x;
	int y;
	char atrv;
};

struct segument {
	int no;
	struct point start;
	struct point end;
	char line_atrv;
};

int main ( void )
{
	struct segument date = {
		10,{100,200,0x0f},{300,500,0x0f},0x7f
	};

	printf("%d ( %d %d %02x ) (%d %d %02x ) %02x\n",date.no,date.start.x,date.start.y,date.start.atrv,date.end.x,date.end.y,date.end.atrv,date.line_atrv);
	
	return 0;
}