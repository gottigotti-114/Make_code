/******************************
ex02.c マスターファイルの更新
*****************************/
#include <stdio.h>

//マスターファイルの構造体
typedef struct {
	int no;
	int zaiko;
} MASTER;

//トランザクションファイルの構造体
typedef struct {
	int no;
	int suryo;
} TRAN;

int main ( void )
{
	FILE *fm, *ft, *fm_new;
	MASTER m;
	TRAN t;
	int end_flg = 0;

	if((fm = fopen("master.txt","r")) == NULL)	return -1;
	if((ft = fopen("tran.txt","r")) == NULL)	return -1;
	if((fm_new = fopen("new_master.txt","w")) == NULL)	return -1;

	if(fscanf(fm,"%d %d",&(m.no),&(m.zaiko)) == EOF)
		end_flg = 1;
	if(fscanf(ft,"%d %d",&(t.no),&(t.suryo)) == EOF)
	t.no = 0;

	while( end_flg == 0){
		if(m.no == t.no){
			m.zaiko -= t.suryo;
				if(fscanf(ft,"%d %d",&(t.no),&(t.suryo)) == EOF)
				t.no = 0;		
		}
		fprintf(fm_new,"%d %d\n",m.no,m.zaiko);
			if(fscanf(fm,"%d %d",&(m.no),&(m.zaiko)) == EOF)
			end_flg = 1;
	}

	fclose (fm);
	fclose (ft);
	fclose (fm_new);

	return 0;

}