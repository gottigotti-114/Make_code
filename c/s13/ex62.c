/******************************
ex62.c ŠÔŠÖ”
******************************/
#include <stdio.h>
#include <time.h>

int main ( void )
{
	time_t t;
	struct tm *zikan2;

	time ( &t );						//t = time(0)‚Å‚à‚æ‚¢
	zikan2 = localtime( &t );
	
	printf("Œ»İ‚Í%di’ÊZ•bj‚Å‚·\n",t);
	printf("%2d”N%2dŒ%2d“ú %2d:%2d:%2d\n",
	zikan2->tm_year + 1900,zikan2->tm_mon + 1,zikan2->tm_mday,
	zikan2->tm_hour,zikan2->tm_min,zikan2->tm_sec);

	return 0;
}