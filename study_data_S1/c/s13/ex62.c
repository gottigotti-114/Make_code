/******************************
ex62.c 時間関数
******************************/
#include <stdio.h>
#include <time.h>

int main ( void )
{
	time_t t;
	struct tm *zikan2;

	time ( &t );						//t = time(0)でもよい
	zikan2 = localtime( &t );
	
	printf("現在時刻は%d（通算秒）です\n",t);
	printf("%2d年%2d月%2d日 %2d:%2d:%2d\n",
	zikan2->tm_year + 1900,zikan2->tm_mon + 1,zikan2->tm_mday,
	zikan2->tm_hour,zikan2->tm_min,zikan2->tm_sec);

	return 0;
}