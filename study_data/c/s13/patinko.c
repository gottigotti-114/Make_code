/*********************************
patinko
*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void )
{
	int random_a;
	int cnt=0;
	int i;

	for(i=0; i<3; i++){
		random_a = (rand() * rand() * rand()) % 10 + 1;
		printf(" %d ",random_a);
		if(random_a == 7)
			cnt++;
	}
	printf("\n");

	if(cnt==3)
		printf("バジリスクタイム\n");

	return 0;
}