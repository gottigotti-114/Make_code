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


time_t doDrill ( ITEM *p, int n, int *s )
{
	int ans;
	time_t stime;
	time_t etime;
	int i;

	stime = time (0);

	*s = 0;
	for(i = 0; i < n; i++){
		
		printf("%d問目| %d + %d = ",i +1,p[i].num1,p[i].num2);
		scanf("%d",&ans);
		printf("\n");

		if(p[i].sum == ans)
			(*s)++;

	}

	etime = time (0);



	return etime - stime ;
}