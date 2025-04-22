#include <stdio.h>
#define MOJI 10

int main (void)
{
	char moji[MOJI] = {"konnniti"};
	int i;
	
	for(i=0; moji[i] != '\0' ; i++){
		printf("%c",moji[i]);
	}

	printf("\n%s\n",moji);

	return 0;
}
	