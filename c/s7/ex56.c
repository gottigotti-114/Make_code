/*****************************
ex56.c
******************************/
#include <stdio.h>

int main ( void )
{
	char pat[5][5] = {
		{'*','*','*','*','*'},
		{'*',' ',' ',' ',' '},
		{'*','*','*',' ',' '},
		{'*',' ',' ',' ',' '},
		{'*',' ',' ',' ',' '}

	};
	char after[5][5];
	int i,j;

	//��̐}�`�`��
	printf("\n[BEFORE]\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c",pat[i][j]);
		}
		printf("\n");
	}

	//�㉺���]
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			after[4-i][j]=pat[i][j];
		}
	}

	//���ʂ̕\��
	printf("\n[AFTER]\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c",after[i][j]);
		}
		printf("\n");
	}

	return 0;
}