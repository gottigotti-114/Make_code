/*******************
平均を関数で求める
*******************/

#include <stdio.h>

#define NUL1 5	//行数
#define NUL2 5	//列数

int Ave (int b,int c ,int a[][]);

int main (void)
{
	int a[NUL1][NUL2]={
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};
	int b,c;
	int cnt;

	printf("指定した行と列までの平均を求めます>>");
	scanf("%d %d",&b,&c);

	printf("平均は%dです",Ave(b,c,a[5][5]));
	return 0;
}
int Ave(int b, int c,int a[][])
{
	int all = 0;
	int cnt = 0;
	int i,j;

	for(i=0; i < b-1; i++){
		for(j=0; j != 5; j++,cnt++){
			all += a[i][j];
		}
	}
	for(j=0; j < c; j++,cnt++) all += a[i+1][c];

	return all/cnt;
}
	 