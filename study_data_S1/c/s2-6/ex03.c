/******************************
ex03.c ÉLÉÖÅ[
*******************************/
#include <stdio.h>
#define NUM 5

int que[NUM];
int enqueIndex;
int dequeIndex;

void enQue ( char x );
char deQue ( void );

int main ( void )
{
	enqueIndex = dequeIndex = 0;

	enQue ( 'A' );
	enQue ( 'B' );
	printf("%c\n",deQue());
	enQue ( 'C' );
	printf("%c\n",deQue());
	enQue ( 'D' );
	printf("%c\n",deQue());
	printf("%c\n",deQue());

	return 0;
}

/*****************************/

void enQue ( char x )
{
	que[enqueIndex] = x;
	enqueIndex++;
	return;
}

/*******************************/

char deQue ( void )
{
	char value;

	value = que[dequeIndex];
	dequeIndex++;

	return value;
}

