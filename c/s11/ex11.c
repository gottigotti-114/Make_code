/*****************************
ex11.c ���O��������
*****************************/
#include <stdio.h>
#define NUM 5

struct GAKUSEI{
	int no;
	char name[20];
};

int main ( void )
{
	struct GAKUSEI meibo[NUM] ={
		{202001, "TAGUTI"},
		{202002, "INOUE"},
		{202003, "AOKI"},
		{202004, "ETOU"},
		{202005, "OKA"}
	};
	int i;
	int in;

	//�w���ԍ��̎擾
	printf("Input no>>");
	scanf("%d",&in);

	//�V�[�P���V�����T�[�`
	for(i=0; i < NUM; i++){
		if(in == meibo[i].no)
			break;
	}

	//���ʕ\��
	if(i < NUM)
		printf("%s\n",meibo[i].name);
	else
		printf("not found\n");

	return 0;
}