/*****************************
ex03.c ��ϊ�
*******************************/
#include <stdio.h>
#include <stdlib.h>

void toBinary ( int n );

int main ( int argc , char *argv[] )
{
	int n;

	//�R�}���h��������10�i�����l�𓾂�
	if( argc != 2 )	return -1;
	n = atoi ( argv[1] );

	//2�i���ŕ\������
	toBinary( n );
	
	return 0;
}

/******************************/

void toBinary ( int n )
{
	if( n == 0 )	return;

	toBinary( n / 2);
	printf("%d ",n % 2);

	return;
}