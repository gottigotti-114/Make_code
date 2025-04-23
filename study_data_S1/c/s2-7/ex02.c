/******************************
ex02.c	ƒŠƒXƒg‚Ì•\Ž¦
******************************/
#include <stdio.h>

typedef struct item {
	int  no;
	char str[10];
	struct item *next;
} ITEM;
	
void showList ( ITEM *r );

int main ( void )
{
	ITEM a = { 1, "AAA", 0 };
	ITEM b = { 2, "BBB", 0 };
	ITEM c = { 3, "CCC", 0 };
	ITEM d = { 4, "DDD", 0 };

	ITEM *root;

	root		= &a;
	a.next	= &b;
	b.next	= &c;
	c.next	= &d;

	showList ( root );
		
	return 0;
}
/************************************************/
void showList ( ITEM *r )
{
	ITEM *p;

	p = r;
	while ( p != 0 ){
		printf("%d) %s\n", p->no, p->str );
		p = p->next;
	}

	return;
}
