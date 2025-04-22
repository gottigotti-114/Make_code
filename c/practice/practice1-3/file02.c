#include <stdio.h>

int func( int suti );

int main ( void )
{
	int ans;
	ans = func(5);
	
	printf("%d",ans);
}
/*****************************/
int func( int suti )
{
	if(suti == 0)	return suti;
	else			return func(suti-1) + suti;
}