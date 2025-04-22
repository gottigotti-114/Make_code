#include <stdio.h>

char *StrStr (char *text, char *search_text);

int main ( void )
{
	char text[20] = "ABCDEFGHIJK";
	char *ans;

	ans = StrStr(text, "GHI");
	if(ans == NULL)	return -1;	

	int i;
	for(i=0; i<3; i++)
		printf("%c",*(ans+i));

	return 0;
}
/*****************************/
char *StrStr (char *text, char *search_text)
{
	char *p;
	int i;
	p = text;
	
	while(p != '\0')
	{
		if(search_text == p)
		{
			for(i=0; *(search_text+i) == *(p+i); i++){
				if(search_text == '\0')	return p;
			}
		}
		p++;
	}
	return;
}