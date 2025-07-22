package review;

import java.util.Random;
import java.util.Scanner;

public class Rv2 {

	public static void main(String[] args) {
		Scanner stdIn = new Scanner( System.in );
		System.out.print("要素数は？：");
		int num = stdIn.nextInt();
		int[] array = new int[ num ];	//配列生成
		Random rand = new Random();

		System.out.println( "配列データ" );
		for(int i=0 ; i<array.length ; i++ ) {	//要素数分繰り返し
			array[i] = rand.nextInt(900)+100;	//100～999の整数の乱数取得
			System.out.print( array[i]+" " );	//配列の値を1個表示
			if( (i+1)%10 == 0 )  System.out.println();	//10個ごとに改行
		}
		int sum = 0;	//合計
		double ave;	//平均
		int min = array[0];	//最小値
		int max = array[0];	//最大値
		for(int i=1 ; i<array.length ; i++ ) {	//配列の2番目から最後まで繰り返す
			if( min > array[i] ) min = array[i];	//最小値を更新
			if( max < array[i] ) max = array[i];	//最大値を更新
			sum += array[i];	//配列の値を合計に加算 sum =sum + array[i]; でもよい
		}
		ave = (double)sum/array.length;	//平均を計算
		System.out.println( );
		System.out.println( "最大="+max );
		System.out.println( "最小="+min );
		System.out.println( "合計="+sum );
		System.out.println( "平均="+ave );

	}

}
