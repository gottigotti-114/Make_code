package review;

import java.util.Random;
import java.util.Scanner;

public class Rv5 {

	public static void main(String[] args) {
		Scanner stdIn = new Scanner(System.in);
		Random rand = new Random();
		int n1 = rand.nextInt(101);
		int n2 = rand.nextInt(101);
		
		while( true ) {
			System.out.print(n1+"+"+n2+"の答えは？：");
			int ans  = stdIn.nextInt();
			if(ans == (n1+n2)) {
				System.out.println("正解！");
				break;
			}
		}
		
		//これでもよい
		int ans;
		do{
			System.out.print(n1+"+"+n2+"の答えは？：");
			ans  = stdIn.nextInt();
		}while( ans != (n1+n2) );
		System.out.println("正解！");
		
	
	}

}
