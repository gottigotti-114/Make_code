/****************************************
ex68.c FizzBuzz 1����A30�܂ł̐����𐔂���
****************************************/

#include <stdio.h>

int main ( void )
{
	int num,s;

	for(num=1;num<=30;num++)
	{

		//3�Ŋ���؂��5�ł�����؂��
			if(num %3 ==0 && num % 5 == 0){
				printf("FizzBuzz");
				continue;
				}

		//�R���T�Ŋ���؂��
			if(num %3 == 0 || num % 5 == 0){
				if(num %3 == 0){
					printf("Fizz");
				}
				else{
					printf("Buzz");
				}
		//�R���T������؂�Ȃ�
			}
			else
				printf("%d",num);
	}

	return 0;
}