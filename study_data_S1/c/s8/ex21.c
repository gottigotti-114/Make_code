/*****************************
ex21.c �������𐔂���
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

	//�J�E���g����
	for(i=0; i<5; i++){
		for(j=0; subject[i][j] != '\0'; j++);
		printf("%d����\n",j);
	}	

	return 0;
}