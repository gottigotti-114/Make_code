/******************************
ex05.c	ƒŠƒXƒg‚Ì‘}“ü
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

	root = inList ( &x, 1 , root );	//x‚ð no=1‚Ì‘O‚É‘}“ü
	root = inList ( &y, 3 , root );	//y‚ð no=3‚Ì‘O‚É‘}“ü

	showList ( root );
		
	return 0;
}
/*******************************************************/
ITEM *inList ( ITEM *insert, int n,  ITEM *r ) 
{
	ITEM *p;

	// ‘}“üêŠ‚ªroot‚Ìê‡
	if ( r->no == n ){
		/**/; 
		return /**/;	
	}

	//‘}“üêŠ‚ªrootˆÈ~‚Ìê‡
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
