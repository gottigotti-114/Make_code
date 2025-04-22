/******************************
ex05
*******************************/
#include <stdio.h>

int main (void)
{
	FILE *fpi, *fpo;
	char c;

	//�O����
	if((fpi = fopen("test01.txt","r"))==NULL){
		printf("ERROR!\n");
		return -1;
	}
	if((fpo = fopen("test03.txt","w"))==NULL){
		printf("ERROR!\n");
		fclose(fpi);
		return -1;
	}

	//����
	while((c=fgetc(fpi)) != EOF){		//fgetc�͈ꕶ�����e�L�X�g�t�@�C������f�[�^�𒊏o����
		fputc(c,fpo);						//fputc�͎󂯎�����ꕶ��(c)���o�͂��Ă���
	}

	//�㏈��
	fclose(fpi);
	fclose(fpo);

	return 0;
}