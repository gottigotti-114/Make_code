/*****************************
ex20.c ������z��̕\��
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

	//�\�� %s
	for(i=0; i<4; i++)
		printf("%s\n",season[i]);

	//�\�� %c
	for(i=0; i<4; i++){
		for(j=0; season[i][j] != '\0' ; j++)
			printf("%c",season[i][j]);
		printf("\n");
	}

	return 0;
}