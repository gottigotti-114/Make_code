/******************************
ex24.c �z��̏I����\���}�[�N��t����
*****************************/
#include <stdio.h>
#define NUM 5
#define END -1

void showItem ( int *p );

int main ( void )
{
	int x[NUM] = {1,2,3,END};

	showItem ( x );

	return 0;
}

/************************************/
void showItem( int *p )
{
	int i;
	for(i=0; *(p+i) != END; i++){
		printf("%d ",*(p+i));


	}
	return;
}
