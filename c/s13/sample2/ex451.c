/***************************************
ex45.c	‘«‚µZƒhƒŠƒ‹ 
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10

typedef struct item {
	int num1;	/*”í‰Á”*/
	int num2;	/*‰Á”*/
	int sum;		/*˜a*/
} ITEM;

void mkDrill ( ITEM *p, int n );
time_t doDrill ( ITEM *p, int n, int *s );



/************************************************/
void mkDrill ( ITEM *p, int n )
{
	int i;

	srand(time(0));

	for(i=0; i<n; i++){
		(p+i)->num1 = rand() % 100 + 1;
		(p+i)->num2 = rand() % 100 + 1;
		(p+i)->sum = (p+i)->num1 + (p+i)->num2;
	}
	return;
}

/***************************************************/
