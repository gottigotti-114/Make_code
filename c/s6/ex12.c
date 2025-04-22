/*
ex12.c ”š‚ğ•\¦‚·‚é
*/
#include <stdio.h>

int main ( void )
{
	int n;
	int cnt;

	//”’l‚Ì“ü—Í
	printf("Input number >> ");
	scanf ("%d",&n);

	//ü‚ğˆø‚­
	cnt = 1;

	while ( cnt <= n)
	{
		printf("%d",cnt);
		cnt = cnt + 1;
	}
	
	return 0;
}