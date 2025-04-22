/******************************
ポインタ練習用
*****************************/
#include <stdio.h>

int main ( void )
{
	int *a;
	int suti[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;

	a = suti;
	printf("%d\n%d\n",a,*a);

	for(i=0; i<10; i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	for(i=0; i<10; i++){
		printf("%d ",*(a+i));
	}
	printf("\n");

	for(i=0; i<10; i++){
		printf("%d ",a+i);
	}
	printf("\n");


}