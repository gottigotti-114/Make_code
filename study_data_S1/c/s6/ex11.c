/*
ex11.c 線を引く
*/
#include <stdio.h>

int main ( void )
{
	int len;
	int cnt;

	//長さの入力
	printf("Input length >> ");
	scanf ("%d",&len);

	//線を引く
	cnt = 1;

	while ( cnt <= len)
	{
		printf("―");
		cnt = cnt + 1;
	}
	
	return 0;
}