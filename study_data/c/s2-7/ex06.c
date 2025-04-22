/******************************
ex06.c	���X�g�̍폜
******************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct item {
	int  no;
	char str[10];
	struct item *next;
} ITEM;

void showList ( ITEM *r );
ITEM *delList ( int n, ITEM *r ); 

/************************************/
int main (void )
{
	ITEM a = { 1, "AAA", 0 };
	ITEM b = { 2, "BBB", 0 };
	ITEM c = { 3, "CCC", 0 };
	ITEM d = { 4, "DDD", 0 };

	ITEM *root;
	ITEM *p;

	root		= &a;
	a.next	= &b;
	b.next	= &c;
	c.next	= &d;

	root = delList ( 1 , root );	//no=1���폜
	root = delList ( 3 , root );	//no=3���폜

	showList ( root );
		
	return 0;
}
/************************************/
ITEM *delList ( int n, ITEM *r )
{
	ITEM *p;

	//�폜����v�f��root�̏ꍇ
	if ( r->no == n ){
		return r->next;		
	}

	//�폜����v�f��root�ȍ~�̏ꍇ
	p = r;
	while ( p->next != 0 ){
		if ( p->next->no == n ){
			p->next = p->next->next;
			break;
		}
		p = p->next;
	}

	return r;
}
/************************************/
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
