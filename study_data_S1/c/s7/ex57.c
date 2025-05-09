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

	//基の図形描画
	printf("\n[BEFORE]\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c",pat[i][j]);
		}
		printf("\n");
	}

	//回転方法の取得
	printf("\n回転方法を指定してください\n");
	printf("(上下反転：１,左右反転：２,右90度回転：３,左90度回転：４)>> ");
	scanf("%d",&ans);

	//回転
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