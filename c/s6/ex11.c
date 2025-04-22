/*
ex11.c ü‚ğˆø‚­
*/
#include <stdio.h>

int main ( void )
{
	int len;
	int cnt;

	//’·‚³‚Ì“ü—Í
	printf("Input length >> ");
	scanf ("%d",&len);

	//ü‚ğˆø‚­
	cnt = 1;

	while ( cnt <= len)
	{
		printf("\");
		cnt = cnt + 1;
	}
	
	return 0;
}