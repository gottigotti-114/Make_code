#include <stdio.h>

#define NUM 100

int main (void)
{
	int x,n;

	//素数ならば表示する
	/*調べる数字*/for(x=2; x<NUM; x++){	
		/*比べる数字*/for(n=2; n<=x/2; n++){		//なぜ÷２をするのか・・・もし8/1,8/2,8/3...として8/4以降8/5としても確実に割り切れるわけがないので最初から÷２をする
			if(x%n==0){
				break;
			}
		}
		if(n>x/2)
			printf("%d ",x);
	}
	return 0;
}