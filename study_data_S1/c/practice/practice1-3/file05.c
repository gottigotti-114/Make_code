#include <stdio.h>

void Binary(char suti);

int main ( void )
{
	char suti;

	printf("数値を入力してください>>");
	scanf("%c",&suti);

	Binary(suti);

	return 0;
}
/*****************************/
void Binary(char suti)
{
	unsigned int search = 0x80;

}