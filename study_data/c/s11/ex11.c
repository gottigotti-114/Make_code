/*****************************
ex11.c 名前を教えて
*****************************/
#include <stdio.h>
#define NUM 5

struct GAKUSEI{
	int no;
	char name[20];
};

int main ( void )
{
	struct GAKUSEI meibo[NUM] ={
		{202001, "TAGUTI"},
		{202002, "INOUE"},
		{202003, "AOKI"},
		{202004, "ETOU"},
		{202005, "OKA"}
	};
	int i;
	int in;

	//学生番号の取得
	printf("Input no>>");
	scanf("%d",&in);

	//シーケンシャルサーチ
	for(i=0; i < NUM; i++){
		if(in == meibo[i].no)
			break;
	}

	//結果表示
	if(i < NUM)
		printf("%s\n",meibo[i].name);
	else
		printf("not found\n");

	return 0;
}