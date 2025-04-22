/*****************************
ƒŠƒXƒg‚Ìì¬
***************************/
#include <stdio.h>

typedef struct RIST{
	int no;
	char text[100];
	struct RIST *next_no;
}RIST;

int main ( void )
{
	RIST rist1 = {1,"HELLO1",0};
	RIST rist2 = {2,"HELLO2",0};
	RIST rist3 = {3,"HELLO3",0};
	RIST rist4 = {4,"HELLO4",0};
	RIST *root;
	
	root = &rist1;
	rist1.next_no = &rist2;
	rist2.next_no = &rist3;
	rist3.next_no = &rist4;
	
	printf("%s",root->next_no->next_no->text);

	return 0;
}