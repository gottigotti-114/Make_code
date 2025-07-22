package review;

import java.util.Scanner;

public class Rv8 {

	static void putChars( int n , char c ) {	//文字cをn個分を横並びに表示するメソッド
		for( int i=0 ; i<n ; i++ ) {
			System.out.print(c);
		}
	}
	static void showTriangle( int length ) {	//右上二等辺三角形を■を使って表示するメソッド
		for( int i=length ; i>0 ; i-- ) {
			putChars(i,'■');
			System.out.println();
		}
	}
	public static void main(String[] args) {
		Scanner stdIn = new Scanner( System.in );
		System.out.print("2等辺の長さ：");
		int length = stdIn.nextInt();
		showTriangle( length );
	}

}
