/******************************
ex01.c スタック
*******************************/
#include <stdio.h>
#define NUM 5

int stack[NUM];
int index;

void push ( char c );
char pop ( void );

int main ( void )
{
	index = 0;

	push('A');
	push('B');
	printf("%c\n",pop());
	push('C');
	printf("%c\n",pop());
	push('D');
	printf("%c\n",pop());
	printf("%c\n",pop());

	return 0;
}

/****************************/

void push (char c)
{
	stack[index] = c;
	index++;

	return;
}

/***************************/

char pop ( void )
{
	int value;

	index--;
	value = stack[index];

	return value;
}

/*****************************
正解
BCDA
*****************************/