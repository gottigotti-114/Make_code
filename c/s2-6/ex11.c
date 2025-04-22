/******************************
ex11.c ÉLÉÖÅ[ â¸ó«î≈
*******************************/
#include <stdio.h>
#define NUM 5

int que[NUM];
int enqueIndex;
int dequeIndex;

void enQue ( char x );
char deQue ( void );
int isFull ( void );
int isEmpty ( void );

int main ( void )
{
	int value;
	enqueIndex = dequeIndex = 0;

	enQue ( 'A' );
	enQue ( 'B' );

	value = deQue();
	if( value != 0)	printf("%c\n",value);
	value = deQue();
	if( value != 0)	printf("%c\n",value);
	value = deQue();	//deQueÇ≈Ç´Ç»Ç¢
	if( value != 0)	printf("%c\n",value);

	enQue ( 'C' );
	enQue ( 'D' );
	enQue ( 'E' );
	enQue ( 'F' );


		value = deQue();
	if( value != 0)	printf("%c\n",value);
	value = deQue();
	if( value != 0)	printf("%c\n",value);
	value = deQue();
	if( value != 0)	printf("%c\n",value);


	return 0;
}

/*****************************/

void enQue ( char c )
{

	if(isFull()){
		printf("cannot enque:%c\n",c);
		return;
	}

	que[enqueIndex] = c;
	enqueIndex++;
	return;
}

/*******************************/

char deQue ( void )
{
	char value;

	if (isEmpty()){
		printf("cannot deque\n");
		return 0;
	}


	value = que[dequeIndex];
	dequeIndex++;

	return value;
}

/*****************************/

int isFull ( void )
{
	if(enqueIndex == NUM)	return -1;
	else							return 0;
}

/***************************/
int isEmpty ( void )
{
	if(dequeIndex == enqueIndex)	return 1;
	else									return 0;
}

/*****************************
ó\ëz
A
B
cannot deque
cannot enque F
C
D
E
***************************/