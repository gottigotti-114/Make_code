
public class Practice5_2 {
	public static void email(String title, String address, String text) {
		System.out.println(address + "に、以下のメールを送信しました");
		System.out.println("件名：" + title);
		System.out.println("本文：" + text);
	}
	
	public static void email(String address,String text) {
		System.out.println(address + "に、以下のメールを送信しました");
		System.out.println("件名：無題");
		System.out.println("本文：" + text);
	}

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		email("例の件に関しまして","fujiharashugo@icc.core","前回はとんでもないことをしてしまい、申し訳ございませんでした。");
		email("fujiharashugo@icc.core","前回はとんでもないことをしてしまい、申し訳ございませんでした。");
	}

}
