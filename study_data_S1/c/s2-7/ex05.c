/******************************
ex05.c	リストの挿入
******************************/
#include <stdio.h>

typedef struct item {
	int  no;
	char str[10];
	struct item *next;
} ITEM;

void showList ( ITEM *r );
ITEM *inList ( ITEM *insert, int n,  ITEM *r ) ;

/************************************/
int main ( void )
{
	ITEM a = { 1, "AAA", 0 };
	ITEM b = { 2, "BBB", 0 };
	ITEM c = { 3, "CCC", 0 };
	ITEM d = { 4, "DDD", 0 };
	ITEM x = { 5, "XXX", 0 };
	ITEM y = { 6, "YYY", 0 };

	ITEM *root;
	ITEM *p;

	root     = &a;
	a.next	= &b;
	b.next	= &c;
	c.next	= &d;

	root = inList ( &x, 1 , root );	//xを no=1の前に挿入
	root = inList ( &y, 3 , root );	//yを no=3の前に挿入

	showList ( root );
		
	return 0;
}
/*******************************************************/
ITEM *inList ( ITEM *insert, int n,  ITEM *r ) 
{
	ITEM *p;

	// 挿入場所がrootの場合
	if ( r->no == n ){
		/**/; 
		return /**/;	
	}

	//挿入場所がroot以降の場合
	p = r;
	while ( p->next != 0 ){
		if ( p->next->no == n){
			/**/;
			/**/;

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
