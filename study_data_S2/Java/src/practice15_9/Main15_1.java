package practice15_9;

public class Main15_1 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String s = "";
		
		for(int i=1; i <= 100; i++ ) {
			s = s + i + ",";
		}
		
		System.out.println(s);
		
		String[] a;
		
		a = s.split(",");
		
		for(String text : a) {
			System.out.println(text);
		}
		
		
	}

}
