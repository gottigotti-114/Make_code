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
	for (cnt = 1;cnt<=n;cnt=cnt + 1){
		printf("%d",cnt);
	}

	return 0;
}