package review;

import java.util.Random;
import java.util.Scanner;

public class Rv6 {

	static int sumArray( int[] array ) {
		int sum=0;
		for( int i=0 ; i<array.length ; i++ ) {
			sum += array[i];
		}
		return sum;
	}
	
	public static void main(String[] args) {

		Scanner stdIn = new Scanner(System.in);
		Random rand = new Random();
		System.out.print("要素数：");
		int num = stdIn.nextInt();
		int[] dat = new int[ num ];

		System.out.print("{");
		for( int i=0 ; i<num ; i++ ) {
			dat[i] = rand.nextInt(101)-50;
			System.out.print(dat[i]);
			if( i<num-1 ) System.out.print(",");
		}
		System.out.print("}\n");
		System.out.println( "合計="+sumArray(dat) );

	}

}
