/***********************************************
ex15.c 	２分探索木の削除
***********************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct item {
	int no;
	char name[50];
	struct item *left;
	struct item *right;
} ITEM;

ITEM *delTree ( int n, ITEM *r );
void showTree ( ITEM *r );

int main ( int argc, char *argv[] )
{
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
	g08.left  = &g03;	
	g08.right = &g10; 
	g03.left  = &g01;		g03.right = &g06; 
								g10.right = &g14; 
	g06.left  = &g04;		g06.right = &g07; 
	g14.left  = &g13;

	//削除する要素番号の取得
	if ( argc != 2 )	return -1;
	no = atoi ( argv[1] );

	//削除
	root = delTree ( no , root );

	//結果表示
	showTree ( root );

	return 0;
}
/***********************************************/
ITEM *delTree ( int n, ITEM *r )
{
	ITEM *pp, *p, *ppmin, *pmin;

	/*** 削除対象がroot ***/
	if (r->no == n ){
		if ( r->left == 0 && r->right == 0 )
									return 0;

		if ( r->left == 0 )	return r->right;
		if ( r->right == 0 )	return r->left;
		
		ppmin =r;
		pmin = r->right;
		while ( pmin->left !=  0 ){
			ppmin = pmin;
			pmin = pmin->left;
		}
		
		pmin->left = r->left;
		if ( r->right != pmin )
			pmin->right = r->right;

		ppmin->left = 0;

		return pmin;
	}

	/*** 削除対象がroot でない***/
		
	//対象のノードを探す
	pp = p = r;
	while ( p != 0 ){
		if ( p->no == n )	break;

		pp = p;		
		if ( p->no > n )	p = p->left;
		else					p = p->right;

	}
	
	//子供:左0, 右0
	if ( p->left == 0 && p->right == 0 ){
		if ( pp->no < n )	pp->right  = 0;
		else					pp->left = 0;

		return r;
	}
	
	//子供:左1, 右0
	if ( p->right == 0 ){
		if ( pp->no < n ) pp->right = p->left;
		else					pp->left  = p->left;
	
		return r;
	}

	//子供:左0, 右1
	if ( p->left == 0 ){
		if ( pp->no < n ) pp->right = p->right;
		else					pp->left  = p->right;
	
		return r;
	}

	//子供:左1, 右1
	ppmin = pmin = p->right;
	while ( pmin->left !=  0 ){
		ppmin = pmin;
		pmin = pmin->left;
	}

	pmin->left = p->left;
	if ( p->right != pmin )
		pmin->right = p->right;

	if ( pp->no < n ) pp->right = pmin;
	else					pp->left  = pmin;

	ppmin->left = 0;

	return r;
}

/*************************************************/
void showTree ( ITEM *r )
{
	ITEM *p;

	p = r;

	if ( p!= NULL ){
		showTree ( p->left );
		printf("%d) %s\n", p->no, p->name );
		showTree ( p->right);
	}

	return;
} 
		