/******************************
ex04c	���X�g�̒ǉ�
******************************/
#include <stdio.h>

typedef struct item {
	int  no;
	char str[10];
	struct item *next;
} ITEM;

void showList ( ITEM *r );
void addList ( ITEM *x, ITEM *r );

int main ( void )
{
	ITEM a = { 1, "AAA", 0 };
	ITEM b = { 2, "BBB", 0 };
	ITEM c = { 3, "CCC", 0 };
	ITEM d = { 4, "DDD", 0 };
	ITEM x = { 5, "XXX", 0 };

	ITEM *root;
	ITEM *p;

	root		= &a;
	a.next	= &b;
	b.next	= &c;
	c.next	= &d;

	addList ( &x, root );

	showList ( root );
		
	return 0;
}
/*************************************************/
void addList ( ITEM *x, ITEM *r )
{
	ITEM *p;

	//�����̗v�f��T��
	p = r;
	while ( p->next != 0 ){
		p = p->next;
	}

	//���������̗v�f�̎��ɂȂ�悤�ɐݒ肷��
	p->next = x;	

	return;ex03
}
/**************************************************/
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
