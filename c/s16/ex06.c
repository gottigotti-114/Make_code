#include <stdio.h>

#define NUM 100

int main (void)
{
	int x,n;

	//�f���Ȃ�Ε\������
	/*���ׂ鐔��*/for(x=2; x<NUM; x++){	
		/*��ׂ鐔��*/for(n=2; n<=x/2; n++){		//�Ȃ����Q������̂��E�E�E����8/1,8/2,8/3...�Ƃ���8/4�ȍ~8/5�Ƃ��Ă��m���Ɋ���؂��킯���Ȃ��̂ōŏ����灀�Q������
			if(x%n==0){
				break;
			}
		}
		if(n>x/2)
			printf("%d ",x);
	}
	return 0;
}