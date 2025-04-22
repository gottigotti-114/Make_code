/****************************************
ex56.c 三角形の面積 ヘロンの公式
***************************************/

#include <stdio.h>
#include <math.h>

int isTriangle(int a,int b,int c);
double AreaTriangle(int a,int b,int c);

int main (void)
{
	int x,y,z;

	//3辺の入力
	printf("3辺の長さの入力>>");
	scanf("%d %d %d",&x,&y,&z);

	//三角形であるかどうかのチェック
	if(! isTriangle(x,y,z)){
		printf("error\n");
		return -1;
	}

	//面積の計算
	printf("%.2f\n",AreaTriangle)