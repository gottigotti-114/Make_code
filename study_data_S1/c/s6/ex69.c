/****************************************
ex68.c FizzBuzz 1‚©‚çA30‚Ü‚Å‚Ì”š‚ğ”‚¦‚é
****************************************/

#include <stdio.h>

int main ( void )
{
	int num,s;

	for(num=1;num<=30;num++)
	{

		//3‚ÅŠ„‚èØ‚ê‚Ä5‚Å‚àŠ„‚èØ‚ê‚é
			if(num %3 ==0 && num % 5 == 0){
				printf("FizzBuzz");
				continue;
				}

		//‚R‚©‚T‚ÅŠ„‚èØ‚ê‚é
			if(num %3 == 0 || num % 5 == 0){
				if(num %3 == 0){
					printf("Fizz");
				}
				else{
					printf("Buzz");
				}
		//‚R‚à‚T‚àŠ„‚èØ‚ê‚È‚¢
			}
			else
				printf("%d",num);
	}

	return 0;
}