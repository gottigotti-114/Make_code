/************************
ex25.c �ő�l�ƍŏ��l
************************/
#include <stdio.h>

int main (void)
{
	int saidai,saisho,gokei,cnt,i;
	int score[]={65,87,90,82,75,80,78,95,68,72};
	float ave;

	for(saisho=saidai=gokei=score[0],i=1; i<10; i++){	//�z��ɂ��łɒl�������Ă���̂ŏ����l�z��O����n�߂邱�Ƃ��ł���
		if(saidai<score[i])
			saidai=score[i];
		if(saisho>score[i])
			saisho=score[i];
		gokei+=score[i];
		
	}

	ave=(double)gokei/i;
	printf("�ő�l�F%d\n�ŏ��l�F%d\n���v�F%d\n���ρF%.2f\n",saidai,saisho,gokei,ave);
	
	return 0;
}