/******************************
ex01.c 文字列の検索
********************************/
#include <stdio.h>

char * stringStr ( char *s1, char *s2 );

int main ( void )
{
	char *p;

	char src[100] = "ABCABDACD";

	p = stringStr ( src, "ABD" );

	if(p != NULL)	*p = '-';

	printf("%s\n",src);

	return 0;
}
/***************************/
char * stringStr ( char *s1, char *s2 )
{
	int len1,len2;		//len1が文字列の長さ　len2が検索文字列の長さ
	int i,j,k;

	//s1,s2の文字長を求める
	for( len1 = 0; *(s1+len1) != '\0' ; len1++);
	for( len2 = 0; *(s2+len2) != '\0' ; len2++);

	//文字列検索
	for(i=0; i != len1-len2; i++){
		for(j=0; j < len2; j++){
			if(s1[i+j] != s2[j])	break;
		}
		if(j>=len2)	return s1+i;
	}

	return NULL;


	
	/*for(i=0; i != len1-len2; i++){
		if(s1[i] == s2[0]){
			for(j=0; j < len2; j++){
				if(s1[i+j] != s2[j])	 break;
			}
			if(j>=len2)	return s1+i;
		}

	}*/
	return NULL;

}


