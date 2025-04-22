/*********************************
ex09.c ”z—ñ‚Ì•½‹Ï
********************************/

#include <stdio.h>
#define NUM 5

int main (void)
{
	double sintyo[NUM] = {160.0, 170.0, 146.7, 180.5, 180.0};
	int i;
	double *p;
	double t, ave;

	p = sintyo;

	//‡Œv‚ğ‹‚ß‚é
	t = 0;
	for(i = 0; i < NUM; i++){
		t += *p;
		p++;
	}

	//•½‹Ï‚ğ‹‚ß‚é
	ave = t / NUM;

	//•\¦
	printf("%.1f\n",ave);

	return 0;
}