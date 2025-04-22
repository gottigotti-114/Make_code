/******************************
ex01.c スタック 改善版
*******************************/
#include <stdio.h>
#define NUM 5

int stack[NUM];
int index;

void push ( char c );
char pop ( void );
int isFull ( void );
int isEmpty ( void );

int main ( void )
{
	int i;
	int value;

	index = 0;

	push('A');
	push('B');
	push('C');
	push('D');
	push('E');
	push('F');	//Pushできない

	value = pop();
	if(value != 0)	printf("%c\n",value);

	value = pop();
	if(value != 0)	printf("%c\n",value);

	value = pop();
	if(value != 0)	printf("%c\n",value);

	value = pop();
	if(value != 0)	printf("%c\n",value);

	value = pop();
	if(value != 0)	printf("%c\n",value);

	value = pop();	//Popできない
	if(value != 0)	printf("%c\n",value);


	return 0;
}

/****************************/

void push (char c)
{
	if (isFull()){
		printf("cannot push:%c\n",c);
		return;
	}

	stack[index] = c;
	index++;

	return;
}

/***************************/

char pop ( void )
{
	int value;

	if (isEmpty()){
		printf("cannot pop\n");
		return 0;
	}
	index--;
	value = stack[index];

	return value;
}

/******************************/

int isEmpty (void)
{
	if(index == 0)	return 1;
	else				return 0;
}

/****************************/
int isFull( void )
{
	if(index == NUM)	return 1;
	else					return 0;
}
/*****************************
正解
cannot push:F
E
D
C
B
A
cannot pop
*****************************/