/*****************************
ex131.c
*****************************/
#include <stdio.h>

int isKomoji ( char c);
int cntKomoji ( char str[]);

int main (void)
{
	char str[100];
	int cnt;

	printf("•¶š—ñ‚Ì“ü—Í>>");
	scanf("%s",str);

	cnt = cntKomoji ( str );

	printf("¬•¶š‚Ì”‚Í%d\n",cnt);

	return 0;
}
/******************************/
int cntKomoji ( char str[] )
{
	int i,cnt;

	cnt = 0;
	for(i=0; str[i]!='\0'; i++)
		cnt += isKomoji( str[i] );

	return cnt;
}

/*****************************/
int isKomoji ( char c )
{
	if('a' <= c && c <= 'z') return 1;
	else							 return 0;
}