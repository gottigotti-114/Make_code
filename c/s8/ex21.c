/*****************************
ex21.c •¶š”‚ğ”‚¦‚é
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

	//ƒJƒEƒ“ƒgˆ—
	for(i=0; i<5; i++){
		for(j=0; subject[i][j] != '\0'; j++);
		printf("%d•¶š\n",j);
	}	

	return 0;
}