/****************************************
ex67.c ユークリッドの互除法
****************************************/

#include <stdio.h>

int main ( void )
{
	int num1,num2;
	int s,l;
	int amari;

	//2数を入力
	printf("二つの整数値を入力してください>>");
	scanf("%d %d",&num1,&num2);

	//最大公約数を求める

	if(num1<num2){
		l=num2;
		s=num1;
	}
	else{
		l=num1;
		s=num2;
	}

	while((amari=l%s)!=0){
		l=s;
		s=amari;
	}

	//最大公約数
	printf("%d\n",s);

	return 0;
}