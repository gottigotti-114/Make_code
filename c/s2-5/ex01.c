/*******************************
ex01.c �t�@�C���̃}�[�W(����)
**********************************/
#include <stdio.h>
#include <string.h>
#define HV 999

typedef struct {
	int no;
	char name[50];
}DATE;

int main ( void )
{
	FILE *fa, *fb, *fc;
	DATE in_a, in_b;

	//�t�@�C���̃A�h���X�Z�b�g
	if( (fa = fopen("fileA.txt","r")) == NULL)	return -1;
	if( (fb = fopen("fileB.txt","r")) == NULL)	return -1;
	if( (fc = fopen("fileC.txt","w")) == NULL)	return -1;

	//�����t�@�C���Ƀe�L�X�g���Ȃ������ꍇ�AHV(�n�C�o�����[999)���o��
	//����уt�@�C���̃f�[�^���\����in_a��in_b�ɃZ�b�e�B���O
	if(fscanf(fa, "%d %s",&(in_a.no), in_a.name) == EOF)
	in_a.no = HV;
	if(fscanf(fb, "%d %s",&(in_b.no), in_b.name) == EOF)
	in_b.no = HV;

	//�\���̂̃i���o�[��HV(�n�C�o�����[999)�ɂȂ�܂ŌJ��Ԃ�
	while (in_a.no != HV || in_b.no != HV ){
		if(in_a.no < in_b.no){
			fprintf(fc,"%d %s\n",in_a.no,in_a.name);
				if(fscanf(fa, "%d %s",&(in_a.no), in_a.name) == EOF)
				in_a.no = HV;

		}
		else if(in_a.no > in_b.no){
			fprintf(fc,"%d %s\n",in_b.no,in_b.name);
			if(fscanf(fb, "%d %s",&(in_b.no), in_b.name) == EOF)
				in_b.no = HV;

		}
		else{
			fprintf(fc,"%d %s\n",in_b.no,in_b.name);
				if(fscanf(fa, "%d %s",&(in_a.no), in_a.name) == EOF)
					in_a.no = HV;
				if(fscanf(fb, "%d %s",&(in_b.no), in_b.name) == EOF)
					in_b.no = HV;

		}
	}

	fclose(fa);
	fclose(fb);
	fclose(fc);

	return 0;

}