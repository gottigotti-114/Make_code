/****************************
ex33.c 選択法
*****************************/
#include <stdio.h>

int main ( void )
{
	int date[5]={4,2,3,5,1};
	int i,j,min;
	int w;

for(i=0; i<4; i++){	//バブルソートになる
		for(j=1+i; j<5; j++){
			if(date[i]>=date[j]){
				w=date[i];
				date[i]=date[j];
				date[j]=w;
			}
		}
	}

	for(i=0; i<5; i++){
		printf("%d",date[i]);
	}

	return 0;
}

/*
	for(i=0; i<4; i++){
		min=i;
		for(j=i+1; j<5; j++){
			if(date[j]<date[min]){
				min=j;
			}
		}

		if(min!=i){
		w=date[min];
		date[min]=date[i];
		date[i]=w;
		}
	}

	
	for(i=0; i<5; i++){
		printf("%d",date[i]);	
	}
	
	return 0;
}





*/