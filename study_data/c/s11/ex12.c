/*****************************
ex12.c アルファベット順にバブルソート
*****************************/
#include <stdio.h>
#include <string.h>
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
	struct GAKUSEI w;
	int i,j;

	//バブルソート
	for(i=NUM-1; i > 0; i--){
		for(j=0; j<i; j++){
			if(strcmp(meibo[j].name,meibo[j+1].name) > 0 ){
				w=meibo[j];
				meibo[j]=meibo[j+1];
				meibo[j+1]=w;
			}
		}
	}

	//結果表示
	for(i=0; i < NUM; i++)
		printf("%d %s\n",meibo[i].no,meibo[i].name);
	return 0;
}