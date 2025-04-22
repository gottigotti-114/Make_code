/******************************
ex01.c	ÉäÉXÉgÇÃçÏê¨
******************************/

typedef struct item {
	int  no;
	char str[10];
	struct item *next;
} ITEM;
	
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
		
	return 0;
}

