/****************************************
ex68.c FizzBuzz 1から、30までの数字を数える
****************************************/

#include <stdio.h>

int main ( void )
{
	int num,s;

	for(num=1;num<=30;num++)
	{

		//3で割り切れて5でも割り切れる
			if(num %3 ==0 && num % 5 == 0){
				printf("FizzBuzz");
				continue;
				}

		//３か５で割り切れる
			if(num %3 == 0 || num % 5 == 0){
				if(num %3 == 0){
					printf("Fizz");
				}
				else{
					printf("Buzz");
				}
		//３も５も割り切れない
			}
			else
				printf("%d",num);
	}

	return 0;
}