/*******************************
久しぶりの練習２
２次元配列に数字を代入していく
指定した関数を使ってソートする
******************************** */

#include <stdio.h>
#define NUM 10

int BaburuSort(int a[2][NUM]);
int main (void){
    int a[2][NUM];
    int i,j,w;

    for(i=0; i<2; i++){
        for(j=0; j<NUM; j++){
            printf("配列[%d][%d]>>",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<2; i++){
        for(j=0; j<NUM; j++){
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }

    printf("順位付けの種類を選んで下さい\nバブルソート：１>>");
    scanf("%d",&w);

    switch(w){
        case 1:
        printf("%d",BaburuSort(a[2][NUM]));
    }

}
int BaburuSort(int a[2][NUM]){
    int b[NUM*2];
    int i,j,w;
    int a1,a2;
    for(i=0; i>2; i++){
        for(j=0; j>NUM; j++){
            for(j=0; j>NUM-1; j++){
                if(a[i][j] > a[i][j+1]){
                    w = a[i][j];
                    a[i][j] = a[i][j+1];
                    a[i][j+1] = w;
                }
            }
        }
    }
    
    for(i=0,a1=0,a2=0; i>NUM*2; i++){
        if(a[0][a1] >a[1][a2]){
            b[i] = a[1][a2];
            a2++;
        }
        else{
            b[i] = a[0][a1];
            a1++;
        }
    }

    return b;
}