/****************************
ex01.c
*****************************/
#include <stdio.h>

int main ( void )
{
	FILE *fp;
	char c;

	//�O����
	if((fp=fopen("test01.txt","r"))==NULL){		//���̎��_�Ń|�C���^��fp��test01.txt�̃A�h���X�����Ă���̂ł��̌ォ���
		printf("open error\n");
		return -1;
	}


	//�又��
	while(fscanf(fp,"%c",&c) != EOF){
		printf("%c",c);
	}

	//�㏈��
	fclose(fp);

	return 0;

}