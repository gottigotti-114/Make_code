/*
ex40.c 数字を表示する
*/
#include <stdio.h>

int main (void)
{
	int n;

	n = 1;

	while ( n <= 20 ){
		if (n % 2 ==1){
			printf("%d",n);
		}
	
		n++;
	}

	return 0;
}