/*****************************
ex13.c �w�肳�ꂽ������#�ŕ\������
*****************************/
#include <stdio.h>

int main (void)
{
	char str[10];
	int i;

	//�����̓���
	printf("�����̓���>>");
	scanf("%s",str);

	//1�������\��
	for(i=0; str[i] != '\0'; i++){
		if(str[i]=='n')
			printf("#");
		else
			printf("%c",str[i]);
	}

	return 0;
}