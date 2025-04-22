/**************************************
ex15.c 配列の複写
**************************************/
#include <stdio.h>

int main ( void )
{
	int a[5]={2,4,5,7,10};
	int b[5]={3,4,8,11,12};
	int c[10];
	int ia,ib,ic;

	//c[]の初期化 0クリア
	for(ic=0; ic<10; ic++) c[ic]=0;

	//併合処理
	ia = ib = ic = 0;	//ia=0,ib=0,ic=0;の省略

	while( ia<5 || ib<5 ){
		if(a[ia]<=b[ib]){
			c[ic]=a[ia];
			ia++;
		}
		else{
			c[ic]=b[ib];
			ib++;
		}
		ic++;
	}


	while(ic<10){
		c[ic]=a[ia];
		c[ic]=b[ib];
		ic++;
		ia++;
		ib++;
	}
		
	

	//出力
	for(ic=0; ic<10; ic++){
		printf("%d.",c[ic]);
	}
	return 0;
}




/*さっきのやつ
	for(i=0,j=0,z=0; i<5||j<5; z++,if(a[i]<=b[j]){i++}else{j++}){
		if(a[i]<=b[j])
			all[z]=a[i];	
		else
			all[z]=b[j];
	}
	*/

/*先生のやつ
	while ( ia<5&&ib<5){
		if(a[ia]==b[ib]){
		c[ic++]=a[ia++];
		ib++;
		}
		else{
			if(a[ia],b[ib])	c[ic++]=a[ia++];
			else					c[ic++]=b[ib++];
		}
	}

	while(ia < 5){
		c[ic++]=b[ib++];
	}
	while(ib < 5){
		c[ic++]=b[ib++];
	}