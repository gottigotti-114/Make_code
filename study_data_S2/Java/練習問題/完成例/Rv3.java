package review;

import java.util.Scanner;

public class Rv3 {

	static void putChars( char c, int n ) {	//文字cをn個分を横並びに表示するメソッド
		for( int i=0 ; i<n ; i++ ) {
			System.out.print(c);
		}
	}
	static void showTriangle( int length ) {	//左上二等辺三角形を■を使って表示するメソッド
		//for( int i=0 ; i<length ; i++ ) {
		//	putChars( '■' , length-i );
		for( int i=length; i>0 ; i-- ) {
			putChars( '■' , i );
			System.out.println();
		}
	}
	public static void main(String[] args) {
		Scanner stdIn = new Scanner( System.in );
		System.out.print("二等辺の長さ：");
		int length = stdIn.nextInt();
		showTriangle( length );
	}

}
