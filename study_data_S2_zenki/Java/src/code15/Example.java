package code15;

public class Example {

	public static String valCheck( String val) {
		if(val.matches("[0-9]{2,4}-[0-9]{2,4}-[0-9]{2,4}")) {
			return "正しい電話番号です。";
		}else if(val.matches("[0-9]{2,4}[0-9]{2,4}[0-9]{2,4}")){
			return "ハイフンを入力してください";
		}else {
			return "間違った電話番号の形式です。";
		}
	}
	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		System.out.print("電話番号を入力してください：");
		String text = new java.util.Scanner(System.in).next();
		System.out.println(valCheck(text));
		
	}

}
