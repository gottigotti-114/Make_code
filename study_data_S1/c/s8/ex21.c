/*****************************
ex21.c 文字数を数える
*****************************/
#include <stdio.h>

int main (void)
{
	char subject[5][10] = {
		"Japanese",
		"Math",
		"Science",
		"Social",
		"English"
	};

	int i,j;

	//カウント処理
	for(i=0; i<5; i++){
		for(j=0; subject[i][j] != '\0'; j++);
		printf("%d文字\n",j);
	}	

	return 0;
}