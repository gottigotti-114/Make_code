/********************************
ex42.c 配列のシーケンシャルサーチ
*******************************/
#include <stdio.h>
#define NUM 5

int * sSearch ( int *p, int n, int x);

int main (void )
{
	int date[10] = {50,30,80,20,60};
	int *p;
	int target;

	printf(">>");
	scanf("%d",&target);

	p = sSearch(date,NUM,target);

	if(p != NULL) printf("%d\n",*p);
	else			  printf("NG\n");

	return 0;
}
/******************************
int * sSearch ( int *p, int n, int x);
*****************************/
int * sSearch ( int *p, int n, int x)
{
	int i;

	for(i=0; i<n; i++)
		if(*(p+i)==x)	return p+i;
	
	return NULL;
}