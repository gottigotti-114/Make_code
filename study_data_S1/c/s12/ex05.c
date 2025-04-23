/******************************
ex05
*******************************/
#include <stdio.h>

int main (void)
{
	FILE *fpi, *fpo;
	char c;

	//前処理
	if((fpi = fopen("test01.txt","r"))==NULL){
		printf("ERROR!\n");
		return -1;
	}
	if((fpo = fopen("test03.txt","w"))==NULL){
		printf("ERROR!\n");
		fclose(fpi);
		return -1;
	}

	//処理
	while((c=fgetc(fpi)) != EOF){		//fgetcは一文字ずつテキストファイルからデータを抽出する
		fputc(c,fpo);						//fputcは受け取った一文字(c)を出力していく
	}

	//後処理
	fclose(fpi);
	fclose(fpo);

	return 0;
}