#include <stdio.h>

#define NUM 100

int main (void)
{
	int x,n;

	//‘f”‚È‚ç‚Î•\¦‚·‚é
	/*’²‚×‚é”š*/for(x=2; x<NUM; x++){	
		/*”ä‚×‚é”š*/for(n=2; n<=x/2; n++){		//‚È‚º€‚Q‚ğ‚·‚é‚Ì‚©EEE‚à‚µ8/1,8/2,8/3...‚Æ‚µ‚Ä8/4ˆÈ~8/5‚Æ‚µ‚Ä‚àŠmÀ‚ÉŠ„‚èØ‚ê‚é‚í‚¯‚ª‚È‚¢‚Ì‚ÅÅ‰‚©‚ç€‚Q‚ğ‚·‚é
			if(x%n==0){
				break;
			}
		}
		if(n>x/2)
			printf("%d ",x);
	}
	return 0;
}