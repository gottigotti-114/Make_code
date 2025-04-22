/*****************************
ex57.c
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
	int ans;

	//��̐}�`�`��
	printf("\n[BEFORE]\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c",pat[i][j]);
		}
		printf("\n");
	}

	//��]���@�̎擾
	printf("\n��]���@���w�肵�Ă�������\n");
	printf("(�㉺���]�F�P,���E���]�F�Q,�E90�x��]�F�R,��90�x��]�F�S)>> ");
	scanf("%d",&ans);

	//��]
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			switch(ans){
				case 1: after[i][j]=pat[4-i][j];
				break;

				case 2: after[i][j]=pat[i][4-j];
				break;

				case 3: after[i][j]=pat[4-j][i];
				break;

				case 4: after[i][j]=pat[j][4-i];
				break;

				default: after[i][j]=pat[i][j];
				break;
			}
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