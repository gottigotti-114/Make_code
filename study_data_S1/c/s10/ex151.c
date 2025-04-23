/****************************
ex151.c
***************************/
#include <stdio.h>

int kaijo (int n);
int comb (int n, int r );

int main ( void )
{
	int n,r;

	printf("全体数を入力してください>>");
	scanf("%d",&n);

	printf("選択数を入力してください>>");
	scanf("%d",&r);

	printf("%d\n",comb(n,r));

	return 0;
}

/*****************************/
int comb(int n,int r)
{
	int c;

	c = kaijo ( n )/(kaijo ( r ) * kaijo( n - r ));		//ここで出てくるkaijo(●)の●はどの変数をkaijo関数に当てはめるか決めるためにある。

	return c;
}
/**************************/
int kaijo ( int n )	//この()にはいるものは用意する変数。上記のスキャンFでnが既に設定されているのでint n にはその値が入る。
{
	int k;

	k=1;
	while ( n > 0 ){
		k = k * n;
		n--;
	}

	return k;
}


	

	