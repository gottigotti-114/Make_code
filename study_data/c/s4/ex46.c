/*
ex46.c ���K���
*/
#include <stdio.h>

int main ( void )
{
	int hh,mm,ss;

	printf("���Ԃ���͂��Ă�������(�L�q��F���� �� �b>>");

	scanf("%d%d%d",&hh,&mm,&ss);

	ss = hh * 3600 + mm * 60 + ss;

	printf("%d�b�ƂȂ�܂���",ss);

	return 0;
}