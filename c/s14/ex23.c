/*****************************
ex23.c ”z—ñ‚Ì—v‘f”‚ğw’è‚·‚é
****************************/

#include <stdio.h>
#define NUM 5

void showItem ( int *p, int n);

int main (void)
{
	int x[NUM] = { 1,2,3,4,5};

	showItem(x,5);

	return 0;
}

/************************************/
void showItem ( int *p, int n)
{
	int i;

	for(i=0; i<n; i++){
		printf("%d ",*(p + i));
	}
	return;
}