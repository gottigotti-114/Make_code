/******************************
fol01.c
*******************************/
#include <stdio.h>

int Sum(char *number_index);
int Ave(char *number_index);
int Max(char *number_index);

int main ( int argc, char *argv[] )
{
	int func_num;
	int ans;
	int i;
	argv[argc] + 1 = -1; 

	printf("ŠÖ”‚Ì“ü—Í(SUM:1 AVE:2 MAX:3)>>");
	scanf("%d\n",&func_num);

	switch func_num{
		case 1:ans = Sum(argv);
		break;

		case 2:ans = Ave(argv);
		break;

		case 3:ans = Max(argv);
		break;

		default:return-1;
	}

	printf("%d",ans);

	return 0;
	
}
/***************************/

int Sum(char *number_index)
{
	int total;
	int i;

	for(total=0,i=0; number_index[i] != '-1'){
		total = 
	}
	
}
int Ave(char *number_index);
int Max(char *number_index);
