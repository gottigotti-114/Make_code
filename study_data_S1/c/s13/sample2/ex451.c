/***************************************
ex45.c	足し算ドリル 
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10

typedef struct item {
	int num1;	/*被加数*/
	int num2;	/*加数*/
	int sum;		/*和*/
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
