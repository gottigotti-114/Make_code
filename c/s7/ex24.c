/************************
ex24.c �ő�l�Ɣz��
************************/
#include <stdio.h>

int main (void)
{
	int saidai,i;
	int score[]={78,70,80,98,96};

	for(i=0,saidai=-1; i<5; i++){
		if(saidai<score[i])
			saidai=score[i];
	}

	printf("�ő�l�F%d",saidai);
	
	return 0;
}