/******************************
ex36.c バブルソート
******************************/
#include <stdio.h>
#include <string.h>
#define NUM 5

int main ( void )
{
	char str[NUM][20] = {
		"apple",
		"orange",
		"banana",
		"melon",
		"grape"
	};
	char w[20];
	int i,j;
	int cnt;

	//バブルソート
	for(i=NUM-1; i>=0; i--){
		cnt = 0;
		for(j=0; j<i; j++){
			if(strcmp(str[j],str[j+1])>0){
				strcpy(w,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],w);

				cnt++;
			}
		}
		if(cnt==0)	break;
	}

	//結果
	for(i=0; i<NUM; i++)
		printf("%s\n",str[i]);

	return 0;
}