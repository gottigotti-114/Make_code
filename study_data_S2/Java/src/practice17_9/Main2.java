package practice17_9;

public class Main2 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		try {
			String s = null;
			System.out.println(s.length());
		}catch( NullPointerException e ) {
			System.out.println("NullPointerException例外をcatchしました");
			System.out.println("-- スタックトレースここから --");
			e.printStackTrace();
			System.out.println("-- スタックトレースここまで --");
		}
	}

}