/*
ex40.c ������\������
*/
#include <stdio.h>

int main (void)
{
	int n;
	int cnt;

	//���l�̓���
	printf("Input number>>");
	scanf("%d",&n);

	//���l��\������
	cnt = 1;

	do{
		printf("%d",cnt);
		cnt = cnt + 1;
	}while(cnt <= n);

	return 0;
}