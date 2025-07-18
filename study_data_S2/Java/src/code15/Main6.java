package code15;

public class Main6 {
	public static boolean isValidPlayerName(String name) {
		return name.matches("[A-Z][A-Z0-9]{7}");
	}

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String name = new java.util.Scanner(System.in).next();
		if(isValidPlayerName("SHU11044")) {
			System.out.println("正常に機能");
		}else {
			System.out.println("エラー発生");
		}
	}

}
