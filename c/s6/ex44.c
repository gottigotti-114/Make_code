/****************************************
ex44.c ��̕\���@�ʃo�[�W����
****************************************/

#include <stdio.h>

int main ( void )
{
	int n;

	for( n=1;n<=20;n++){
		if (n % 2 == 0){
			continue;
		}
		printf("%d\n",n);
	}

	return 0;
}