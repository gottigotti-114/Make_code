/*******************************
ex31.c \‘¢‘Ì•Ï”‚ğg‚¤ŠÖ”
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

	printf("Ÿ‚¿>>");
	scanf("%d",&k);
	p->kati = k;

	printf("•‰‚¯>>");
	scanf("%d",&m);
	p->make = m;

	printf("ˆø•ª>>");
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