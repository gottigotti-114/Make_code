/********************************
ex11.c ������̒��������߂�
*******************************/
#include <stdio.h>
#define NUM 100
int main ( void )
{
	char str[NUM];
	char *p;

	//������̓���
	printf("������̓���>>");
	scanf("%s",str);

	//������̃J�E���g
	p = str;
	while ( *p != '\0')	p++;

	//���ʂ̕\��
	printf("%d\n",p-str);			//�����str�̔z��char�������̂Ŕz��1����1B�Ȃ̂ł���int�̔z��ȂǂŔz��1����1B����Ȃ�������(p - str) / sizoof(char)�ƋL�������char�Ɠ����悤�ȃJ�E���g�̎d��������

	return 0;
}

/*
���ʂ̕\���ł�
{'a','b','c','\0'}
�Ƃ������Ƃ��ɁAp�̓A�h���X�̒l���w���Astr��str[0]�̃A�h���X���w���̂�
p(str[4]�̃A�h���X�܂ŌJ��Ԃ�����) - str(str[0])�������Ƃ�