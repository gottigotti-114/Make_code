/******************************
ex36.c ������̃V�[�P���V�����T�[�`
******************************/
#include <stdio.h>
#include <string.h>
#define NUM 5

int main ( void )
{
	char str[NUM][20] = {
		"apple",
		"orange",
		"banana",
		"melon",
		"grape"
	};
	char target[20];
	int i;

	//������̓���
	printf("������̓���>>");
	scanf("%s",target);

	//�����̌���
	for(i=0; i < NUM; i++){
		if(strcmp(str[i],target)==0)
			break;
	}

	//����
	if(i < NUM)
		printf("OK\n");
	else
		printf("NG\n");
	
	return 0;
}