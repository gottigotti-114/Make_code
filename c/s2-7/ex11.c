/***********************************************
ex11.c 	２分探索木の検索
***********************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct item {
	int no;
	char name[50];
	struct item *left;
	struct item *right;
} ITEM;

ITEM *searchTree ( int n, ITEM *r );

int main ( int argc, char *argv[] )
{
	ITEM *p;
	int no;

	ITEM g01 = {  1, "H" , 0, 0 };
	ITEM g03 = {  3, "Li", 0, 0 };
	ITEM g04 = {  4, "Be", 0, 0 };
	ITEM g06 = {  6, "C" , 0, 0 };
	ITEM g07 = {  7, "N" , 0, 0 };
	ITEM g08 = {  8, "O" , 0, 0 };
	ITEM g10 = { 10, "Ne", 0, 0 };
	ITEM g13 = { 13, "Al", 0, 0 };
	ITEM g14 = { 14, "Si", 0, 0 };

	ITEM *root;

	root = &g08;
	g08.left  = &g03;		g08.right = &g10; 
	g03.left  = &g01;		g03.right = &g06; 
								g10.right = &g14; 
	g06.left  = &g04;		g06.right = &g07; 
	g14.left  = &g13;

	//検索番号の取得
	if ( argc != 2 )	return -1;
	no = atoi ( argv[1] );

	//バイナリーサーチ
	p = searchTree ( no, root );

	//結果表示
	if ( p != 0 )
		printf("%d) %s\n", p->no, p->name );
	else
		printf("not found\n");

	return 0;
}
/****************************************************/
ITEM  *searchTree ( int n, ITEM *r )
{
	ITEM *p;

	p = r;

	while ( p != 0 ){
		if ( p->no == n )	return p;
		
		if ( p->no > n )
			p = p->left;
		else
			p = p->right;
	}

	return 0;
}















void showTree ( ITEM *r )
{
	ITEM *p;

	p = r;

	if ( p!= NULL ){
		printf("%d) %s\n", p->no, p->name );
		showTree ( p->left );
		showTree ( p->right);
	}

	return;
} 
	

	
