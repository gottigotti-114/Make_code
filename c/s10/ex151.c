/****************************
ex151.c
***************************/
#include <stdio.h>

int kaijo (int n);
int comb (int n, int r );

int main ( void )
{
	int n,r;

	printf("�S�̐�����͂��Ă�������>>");
	scanf("%d",&n);

	printf("�I�𐔂���͂��Ă�������>>");
	scanf("%d",&r);

	printf("%d\n",comb(n,r));

	return 0;
}

/*****************************/
int comb(int n,int r)
{
	int c;

	c = kaijo ( n )/(kaijo ( r ) * kaijo( n - r ));		//�����ŏo�Ă���kaijo(��)�́��͂ǂ̕ϐ���kaijo�֐��ɓ��Ă͂߂邩���߂邽�߂ɂ���B

	return c;
}
/**************************/
int kaijo ( int n )	//����()�ɂ͂�����̂͗p�ӂ���ϐ��B��L�̃X�L����F��n�����ɐݒ肳��Ă���̂�int n �ɂ͂��̒l������B
{
	int k;

	k=1;
	while ( n > 0 ){
		k = k * n;
		n--;
	}

	return k;
}


	

	