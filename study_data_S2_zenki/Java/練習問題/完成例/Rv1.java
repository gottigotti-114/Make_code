package review;

import java.util.Scanner;

public class Rv1 {

	public static void main(String[] args) {
		String[] youbiString= {
				"日","月","火","水","木","金","土"
		};
		String[] weekString= {
				"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
		};
		Scanner stdIn = new Scanner( System.in );
		System.out.println( "曜日の番号を入力してください。" );
		System.out.print( "日曜:0、月曜：1、火曜：2、水曜：3、木曜：4、金曜：5、土曜：6 => " );
		int n = stdIn.nextInt();	//数字を入力させる
		System.out.println( youbiString[n] + "曜日の英単語は、" + weekString[n] + "です。" );
	}

}
