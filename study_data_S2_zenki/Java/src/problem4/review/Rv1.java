package problem4.review;

public class Rv1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		//曜日配列を作成
		String[] youbiString = {
				"日","月","火","水","木","金","土"
		};
		
		//曜日（英語）配列を作成
		String[] weekString = {
				"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"
		};
		
		System.out.println("曜日の番号を入力してください。");
		System.out.print("日曜：0、月曜：1、火曜：2、水曜：3、木曜：4、金曜：5、土曜：6 =>");
		
		int day_num = new java.util.Scanner(System.in).nextInt();
		
		System.out.println(youbiString[day_num] + "曜日 の英単語は、" + weekString[day_num] + "です。");
	}

}
