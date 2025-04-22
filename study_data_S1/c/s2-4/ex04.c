/*****************************
ex04.c �N�C�b�N�\�[�g
******************************/
#include <stdio.h>
#define NUM 10

void quickSort ( int *x, int left, int right );

int main ( void )
{
	int date[NUM] = { 5, 14, 10, 15, 13, 4, 2, 7, 19, 12 };
	int i;

	quickSort ( date, 0, NUM - 1);

	for( i=0; i<NUM; i++ )
		printf("%d ",date[i]);

	return 0;
}

/****************************/

void quickSort ( int *x, int left, int right )
{
	int pivot, w_left, w_right;
	int w;

	//�s�{�b�g�����߂�
	w_left = left;
	w_right = right;
	pivot = x [ ( left + right ) / 2 ];

	//�s�{�b�g�̏ꏊ���m�肷��
	while( 1 ){
		//�����ɂ���s�{�b�g���傫���v�f��������...�@
			while ( x[w_left] < pivot )	w_left++;
		//�E���ɂ���s�{�b�g��菬�����v�f��������...�A
			while ( x[w_right] > pivot )	w_right--;
	
		if( w_left >= w_right )	break;

		//�@�A������
		
		w = x[w_left];
		x[w_left] = x[w_right];
		x[w_right] = w;



		//����
		w_left++;
		w_right--;

	}

	//�ċN�Ăяo��
	if( left < w_left-1)	//�����܂��������ꍇ
		quickSort(x,left,w_left-1);
	if(w_right + 1 < right )	//�E���܂��������ꍇ
		quickSort(x,w_right+1,right);

	return;
}