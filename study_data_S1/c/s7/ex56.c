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

	//基の図形描画
	printf("\n[BEFORE]\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c",pat[i][j]);
		}
		printf("\n");
	}

	//上下反転
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			after[4-i][j]=pat[i][j];
		}
	}

	//結果の表示
	printf("\n[AFTER]\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c",after[i][j]);
		}
		printf("\n");
	}

	return 0;
}