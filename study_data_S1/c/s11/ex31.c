/*******************************
ex31.c 構造体変数を使う関数
********************************/
#include <stdio.h>
#include <string.h>

typedef struct {
	int kati;
	int make;
	int hikiwake;
}SHOHAI;

void kKakuno ( SHOHAI *p);
void kHyouzi ( SHOHAI x);

int main ( void )
{
	SHOHAI date;

	kKakuno(&date);
	kHyouzi(date);

	return 0;
}

/*********************************/

void kKakuno ( SHOHAI *p)
{
	int k,m,h;

	printf("勝ち>>");
	scanf("%d",&k);
	p->kati = k;

	printf("負け>>");
	scanf("%d",&m);
	p->make = m;

	printf("引分>>");
	scanf("%d",&h);
	p->hikiwake = h;

	return;
}

/***********************************/

void kHyouzi (SHOHAI x)
{
	printf("%d / %d / %d\n",x.kati,x.make,x.hikiwake);

	return;
}