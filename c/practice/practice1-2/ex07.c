/*******************************
—ûK
******************************/
#include <stdio.h>

int main ( void ){
	int a,b;

	a=0;
	while(a<5){
		printf("%d",a);
		a++;
	}

	b=0;
	while((b++)<5){
		printf("%d",b);
	}

	return 0;
}