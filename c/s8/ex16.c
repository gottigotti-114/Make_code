/*****************************
ex16.c ��ԑJ�ڐ}�y�уI�[�g�}�g��
*****************************/
#include <stdio.h>

int main (void)
{
	int senizu[4][2] = {
		{2,1},
		{2,3},
		{2,3},
		{3,3}
	};

	char date[10];
	int state;
	int i;

	//�e�X�g�f�[�^�̓���
	printf(">>");
	scanf("%s",date);

	//�J��
	state = 0;  //�������
	
	for(i=0; date[i] != '\0'; i++){
		if(date[i] >= '0' && date[i] <= '9')
			state = senizu[state][0];
		else if(date[i]=='+')
			state = senizu[state][1];
	}

	//���ʂ̕\��
	if(state==2)
		printf("OK\n");
	else
		printf("NG\n");

	return 0;
}