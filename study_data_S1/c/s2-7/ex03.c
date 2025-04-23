/******************************
ex03.c	リストの検索
******************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct item {
	int  no;
	char str[10];
	struct item *next;
} ITEM;

ITEM *searchList ( int n, ITEM *r );

int main ( int argc, char *argv[] )
{
	ITEM a = { 1, "AAA", 0 };
	ITEM b = { 2, "BBB", 0 };
	ITEM c = { 3, "CCC", 0 };
	ITEM d = { 4, "DDD", 0 };

	ITEM *root;
	ITEM *p;
	int n;

	root		= &a;
	a.next	= &b;
	b.next	= &c;
	c.next	= &d;

	//検索番号の取得
	if ( argc != 2 )	return -1;
	n = atoi ( argv[1] );
	
	//シーケンシャルサーチ
	p = searchList ( n , root );

	//結果表示
	if ( p != 0 )
		printf("%d %s\n", p->no, p->str );
	else
		printf("not found\n");
		
	return 0;
}

/*********************************************/
ITEM *searchList ( int n, ITEM *r )
{
	ITEM *p;

	p = r;
	while ( p != 0 ){
		if ( p->no == n )	return p;
		p = p->next;
	}

	return 0;
}