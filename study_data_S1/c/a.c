/*
a.c ©—R‘‚«
*/
#include <stdio.h>

int main (void)
{
	int a,cnt;

	printf("InputNumber>>");
	scanf("%d",&a);

	for (cnt=1;a >= cnt;cnt++){
		printf("",cnt);
	}

	return 0;
}