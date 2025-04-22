#include <stdio.h>

double AVERAGE (int gokei,int cnt);
int main (void)
{
    int w,cnt = 0;;
    int gokei = 0;

    printf("合計か平均を求めます。終了コマンド>>Ctrl + c\n数値を入力してください>>");

    while(scanf("%d",&w) != EOF){
        gokei += w;
        cnt++;
       printf("合計か平均を求めます。終了コマンド>>Ctrl + c\n数値を入力してください>>"); 
    }

    printf("\n合計>>%d 平均>>%2.f",gokei,AVERAGE(gokei,cnt));

    return 0;
}
double AVERAGE (int gokei,int cnt)
{
    int r;

    r = gokei/cnt;

    return r;
}