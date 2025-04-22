#include <stdio.h>
#include <stdlib.h>

void Binary_Change(int decimal_value);

int main ( int argc, char *argv[] )
{
	int value;
	value = atoi(argv[1]);
	
	Binary_Change(value);

	return 0;
}
/****************************/
void Binary_Change(int decimal_value)
{
	if(decimal_value == 0)	return;

	Binary_Change(decimal_value / 2);

	printf("%d",decimal_value % 2);
	return;
}