package practice14_5;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		//Bank Aを定義
		Bank a = new Bank();
		a.accountNumber = "4649";
		a.balance = 1592;
		
		//Bank Bを定義
		Bank b = new Bank();
		b.accountNumber = " 4649"; //ここであえてスペースを空ける
		b.balance = 1592;
		
		//toStringを実行
		System.out.println(a);
		//もしもAとBが同じなら等価である
		System.out.println(a.equals(b) ? "等価である" : "等価ではない");
		
	}

}
