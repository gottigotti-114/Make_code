/*************************************************
ex21.c	ハッシュテーブルを使った名簿検索
*************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define  JOSU 31

typedef struct item {
	int no;
	char name[50];
	struct item *next;
} ITEM;

void showTbl ( ITEM *tbl, int key );
int mkTbl ( char *file, ITEM *tbl , int key );
ITEM *searchTbl ( int n , ITEM *tbl , int key );
void freeTbl ( ITEM *tbl, int key );

int main ( int argc, char *argv[] )
{
	char infile[50];
	ITEM meibo[JOSU], *p;
	int target;

	//ハッシュテーブルの作成する	
	if ( argc != 2 ){
		printf("arg error\n");
		return -1;
	}
	
	if ( mkTbl ( argv[1] , meibo , JOSU ) != 0 )
		return -1;

	//ハッシュテーブルの表示	確認用
	showTbl ( meibo , JOSU );

	//名簿検索
	while ( 1 ){
		printf("学生番号を入力してください>> ");
		scanf("%d", &target );

		if ( target < 1 )	break;

		p = searchTbl ( target, meibo, JOSU );

		if ( p != NULL )	printf("%d) %s\n", p->no, p->name );
		else					printf("not found\n");
	
	}

	//ハッシュテーブルの解放
	freeTbl ( meibo , JOSU );

	return 0;
}
/***********************************************/
void showTbl ( ITEM *tbl, int key )
{
	int i;
	ITEM *p;

	for ( i = 0 ; i < key ; i++ ){
		p = tbl + i;
		while ( p != 0 ){
			printf("[%2d] %06d %s\n", i, p->no, p->name );
			p = p->next;
		}			
	}

	return;
}
/************************************************/
ITEM *searchTbl ( int n , ITEM *tbl , int key )
{
	ITEM *p;

	p = tbl + ( n % key ) ;
	while ( p != 0 ){
		if ( p->no == n )	return p;
		p = p->next;
	}

	return 0;
}

/************************************************/
int mkTbl ( char *file, ITEM *tbl , int key )
{
	FILE *fp;
	ITEM in, *sino, *home;
	int i, hv;

	//初期化
	for ( i = 0 ; i < key ; i++ ){
		(tbl+i)->no = 0;
		(tbl+i)->next = 0;
	} 

	//値セット
	if (  ( fp = fopen( file , "r" ) ) == NULL ){
		printf("open error\n" );
		return -1 ;
	}

	while ( fscanf(fp, "%d,%s", &(in.no) , in.name ) != EOF ){
		hv = in.no % key;

		if ( (tbl+hv)->no == 0 ){
			(tbl+hv)->no = in.no;
			strcpy ((tbl+hv)->name, in.name );
		}
		else {
			/*メモリの動的割当*/
			if ( ( sino = ( ITEM * ) malloc ( sizeof( ITEM ) ) ) == NULL  ){
				printf("alloc error\n");
				return -1;
			}

			/*データのセット*/
			sino->no = in.no;
			strcpy ( sino->name, in.name );
			sino->next = 0;

			/*アドレスのセット*/
			home = (tbl + hv );
			while ( home->next != 0 )	home = home->next;
			home->next = sino;

		}	
	}

	fclose ( fp );

	return 0;
} 
	
	
/*****************************************************/
void freeTbl ( ITEM *tbl, int key )
{
	ITEM *p, *w;
	int i;

	for ( i = 0 ; i < key; i++ ){
		p = (tbl+i)->next;
		while ( p != 0 ){
			w = p->next;
			printf("***%d)%s\n", p->no, p->name ); /*DEBUG用*/
			free(p);
				
			p = w;
		}
	}
				
	return;
}