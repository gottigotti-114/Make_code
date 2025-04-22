/*****************************
ex16.c 状態遷移図及びオートマトン
*****************************/
#include <stdio.h>

int main (void)
{
	int senizu[4][2] = {
		{2,1},
		{2,3},
		{2,3},
		{3,3}
	};

	char date[10];
	int state;
	int i;

	//テストデータの入力
	printf(">>");
	scanf("%s",date);

	//遷移
	state = 0;  //初期状態
	
	for(i=0; date[i] != '\0'; i++){
		if(date[i] >= '0' && date[i] <= '9')
			state = senizu[state][0];
		else if(date[i]=='+')
			state = senizu[state][1];
	}

	//結果の表示
	if(state==2)
		printf("OK\n");
	else
		printf("NG\n");

	return 0;
}