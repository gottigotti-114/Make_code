/******************************
ex62.c ���Ԋ֐�
******************************/
#include <stdio.h>
#include <time.h>

int main ( void )
{
	time_t t;
	struct tm *zikan2;

	time ( &t );						//t = time(0)�ł��悢
	zikan2 = localtime( &t );
	
	printf("���ݎ�����%d�i�ʎZ�b�j�ł�\n",t);
	printf("%2d�N%2d��%2d�� %2d:%2d:%2d\n",
	zikan2->tm_year + 1900,zikan2->tm_mon + 1,zikan2->tm_mday,
	zikan2->tm_hour,zikan2->tm_min,zikan2->tm_sec);

	return 0;
}