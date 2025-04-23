/*******************************
ex03.c コントロールブレイク処理
********************************/
#include <stdio.h>

typedef struct {
	int id;
	int no;
	int kingaku;
}DATA;

typedef struct {
	int no;
	int kingaku;
}TRAN;

int main ( void )
{
	FILE *fpi, *fpo;
	DATA in;
	TRAN w;

	if((fpi = fopen("infile.txt","r"))==NULL)	return -1;
	if((fpo = fopen("outfile.txt","w"))==NULL)	return -1;

	if(fscanf(fpi,"%d %d %d",&(in.id), &(in.no), &(in.kingaku))==EOF) {
		fclose(fpi);
		fclose(fpo);
		return -1;
	}

	w.no = in.no;
	w.kingaku = in.kingaku;

	while(fscanf(fpi,"%d %d %d",&(in.id),&(in.no),&(in.kingaku)) != EOF) {
		if(in.no == w.no){
			w.kingaku += in.kingaku;
		}
		else{
			fprintf(fpo,"%d %d\n",w.no,w.kingaku);
			w.no = in.no;
			w.kingaku = in.kingaku;
		}
	}

	fprintf(fpo,"%d %d",w.no,w.kingaku);

	fclose(fpi);
	fclose(fpo);

	return 0;
	
}

/*******************************
補足
このようにマスターファイルとトランザクションファイルを比べるときなどは
type master.txtとするとそのデータが出力され
type master_answer.txtで比べると同じデータが出力された場合成功となる

type mを入力してTabキーを押すと候補が続々と出てくる
*******************************/