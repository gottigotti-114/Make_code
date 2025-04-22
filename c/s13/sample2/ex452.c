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




/***************************************************/
time_t doDrill ( ITEM *p, int n, int *s )
{
	time_t start,end;
	int cnt = 0;
	int ans;
	int i;

	//ˆ¤‚µŠÔ‚Ìæ“¾
	start = time(0);

	//ƒhƒŠƒ‹‚ÌÀ{
	for(i=0; i<n; i++){
		printf("[%2d] %2d + %2d =",
					i+1,(p+i)->num1,(p+i)->num2);
		scanf("%d",&ans);

		if(ans==(p+i)->sum)	cnt++;

	}

	//³‰ğ”‚ğ”½‰f‚·‚é
	*s = cnt;

	//I—¹ŠÔ‚Ìæ“¾
	end = time(0);

	return end - start;

}