/******************************
ex02.c 文字列の置換
******************************/
#include <stdio.h>
#define LEN 100

void replace( char *before, char *after, char *target, char *rep);

int main ( void )
{
	char before[LEN] = "That is a pen";
	char after[LEN];
	char target[] = "is";
	char rep[] = "was";

	replace( before,after,target,rep);

	printf("置換前:%s\n",before);
	printf("置換後:%s\n",after);

	return 0;
}

/****************************/

void replace( char *before, char *after, char *target, char *rep)
{
	int bi,ai,ti,ri;
	int blen,tlen,rlen;
	char *pt;

	//beforeの文字列,targetの文字列,repの文字列の文字長を求める
	for(blen=0; before[blen] != '\0'; blen++);
	for(tlen=0; target[tlen] != '\0'; tlen++);
	for(rlen=0; rep[rlen] != '\0'; rlen++);	//blenとtlenとrlenの文字長(文字の長さ)を設定

	//置換
	bi = ai = 0;
	while(bi < blen-tlen){
		//検索   before[]の中からtarget[]を検索する
		for(ti = 0; ti<tlen; ti++)
			if(before[bi+ti] != target[ti]) break;

		if(ti >= tlen){
			//置換
			for(ri = 0; ri < rlen; ri++){
				after[ai+ri] = rep[ri];
			}
			ai += rlen;		//ai += ri;
			bi += tlen;		//bi += ti;でもok	上記のriと
		}else{
			//そのまま複写
			after[ai++] = before[bi++];
		}
		
	}

	//残りの文字列の処理
	while(bi < blen)
		after[ai++] = before[bi++];
	after[ai] = '\0';

	return;
}
