/****************************************
ex67.c ���[�N���b�h�̌ݏ��@
****************************************/

#include <stdio.h>

int main ( void )
{
	int num1,num2;
	int s,l;
	int amari;

	//2�������
	printf("��̐����l����͂��Ă�������>>");
	scanf("%d %d",&num1,&num2);

	//�ő���񐔂����߂�

	if(num1<num2){
		l=num2;
		s=num1;
	}
	else{
		l=num1;
		s=num2;
	}

	while((amari=l%s)!=0){
		l=s;
		s=amari;
	}

	//�ő����
	printf("%d\n",s);

	return 0;
}