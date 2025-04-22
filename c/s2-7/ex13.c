/***********************************************
ex13.c 	‚Q•ª’Tõ–Ø‚Ì•\¦ -’Ê‚è‚ª‚¯„‰ñ-
***********************************************/
#include <stdio.h>

typedef struct item {
	int no;
	char name[50];
	struct item *left;
	struct item *right;
} ITEM;

void showTree ( ITEM *r );
void showTree1 ( ITEM *r );
void showTree2 ( ITEM *r );

int main ( void )
{
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

	printf("\n’Ê‚èŠ|‚¯\n");
	showTree ( root );

	printf("\ns‚«‚ª‚¯\n");

	showTree1 ( root );

	printf("\n‹A‚è‚ª‚¯\n");

	showTree2 ( root );


	return 0;
}
/*************************************************/
void showTree ( ITEM *r )
{
	ITEM *p;

	p = r;

	if ( p!= NULL ){
		showTree(p->left);
		printf("%3d) %s\n",p->no,p->name);
		showTree(p->right);
	}

	return;
} 

/*************************************************/
void showTree1 ( ITEM *r )
{
	ITEM *p;

	p = r;

	if ( p!= NULL ){
		printf("%3d) %s\n",p->no,p->name);
		showTree1(p->left);
		showTree1(p->right);
	}

	return;
} 

/*************************************************/
void showTree2 ( ITEM *r )
{
	ITEM *p;

	p = r;

	if ( p!= NULL ){
		showTree2(p->left);
		showTree2(p->right);
		printf("%3d) %s\n",p->no,p->name);
	}

	return;
} 