package review;

import java.util.Random;
import java.util.Scanner;

public class Rv9 {

	//mainメソッド
	public static void main(String[] args) {

		System.out.print("配列の要素数を入力してください：");
		int n = new Scanner(System.in).nextInt();
		int[] a = new int[n];
		
		Random random = new Random();
		
		System.out.println("●変更前の配列");
		for( int i=0 ; i<n ; i++ ) {
			a[i] = random.nextInt(100);
			System.out.print( a[i]+" " );
		}
		
		int[] ra = reverse(a);

		System.out.println("\n●変更後の配列");
		for( int i=0 ; i<n ; i++ ) {
			System.out.print( ra[i]+" " );
		}
	}
	
	//配列の中身を逆順にした値を持つ配列を返すメソッド
	static int[] reverse( int[] a ) {
		int[] x = new int[ a.length ];
		for(int i=0;i<a.length;i++) {
			x[i]= a[a.length-1-i];
		}
		return x;
	}

}
