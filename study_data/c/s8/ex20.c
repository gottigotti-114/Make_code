/*****************************
ex20.c 文字列配列の表示
*****************************/
#include <stdio.h>

int main (void)
{
	char season[4][10] = {
		"spring",
		"summer",
		"autumn",
		"winter"
	};

	int i,j;

	//表示 %s
	for(i=0; i<4; i++)
		printf("%s\n",season[i]);

	//表示 %c
	for(i=0; i<4; i++){
		for(j=0; season[i][j] != '\0' ; j++)
			printf("%c",season[i][j]);
		printf("\n");
	}

	return 0;
}