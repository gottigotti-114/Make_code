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

	//Šî‚Ì}Œ`•`‰æ
	printf("\n[BEFORE]\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c",pat[i][j]);
		}
		printf("\n");
	}

	//‰ñ“]•û–@‚Ìæ“¾
	printf("\n‰ñ“]•û–@‚ğw’è‚µ‚Ä‚­‚¾‚³‚¢\n");
	printf("(ã‰º”½“]F‚P,¶‰E”½“]F‚Q,‰E90“x‰ñ“]F‚R,¶90“x‰ñ“]F‚S)>> ");
	scanf("%d",&ans);

	//‰ñ“]
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

	//Œ‹‰Ê‚Ì•\¦
	printf("\n[AFTER]\n");
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%c",after[i][j]);
		}
		printf("\n");
	}

	return 0;
}