/*****************************
ex54.c 2�����z��̏W�v�i���ρj
*****************************/
#include <stdio.h>

int main ( void )
{
	double sinchou[2][5]={
		{ 160.0,158.0,180.7,170.0,160.0},
		{ 180.0,170.0,155.8,180.5,151.0}
	};

	double total,ave;
	int i,j;

	for(i=0; i<2; i++){
		total= ave = 0;
		for(j=0; j<5; j++){
			total+=sinchou[i][j];
		}
		ave=total/j;
		printf("%d�g�̕��ϐg����%.2f\n",i+1,ave);
	}

	return 0;
}