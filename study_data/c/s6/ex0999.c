/*
ex0999.c 最大値、最小値、平均、合計を求める
*/
#include <stdio.h>

int main ( void )
{
	int saidai,saishou,gokei,cnt,n;
	double heikin;

	saidai = -1;
	saishou = 99999;
	gokei = 0;
	cnt = 0;
	
	printf("数値を入力してください>>");
	while ( scanf("%d",&n) != EOF )
	{
		gokei = gokei + n;
		cnt = cnt + 1;

		if ( n >= saidai )
		{
			saidai = n;
		}
	
		if ( n <= saishou )
		{
			saishou = n;
		}
	
		printf("数値を入力してください>>");
	}
	
	heikin = (double) gokei / cnt;

	printf("合計は%d、平均は%.2f、最大値は%d、最小値は%dとなりました。",gokei,heikin,saidai,saishou);

	return 0;
}