package practice17_9;

public class Main3 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String str = "";
		int i;
		try {
			str = "三";
			i = Integer.parseInt(str);
		}catch( NumberFormatException e ) {
			System.out.println("解析可能な文字ではありません。");
			str = "No message";
		}
		
	}

}
