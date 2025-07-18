package code15_1;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String s1 = "すっきりJava";
		String s2 = "Java";
		String s3 = "java";
		
		if(s2.equals(s3)) {
			System.out.println("s2とs3は等しい");
		}
		if(s2.equalsIgnoreCase(s3)) {
			System.out.println("s1のケースを区別しなければ等しい");
		}
		System.out.println("s1の長さは" + s1.length() + "です。");
		if(s1.isEmpty()) {
			System.out.println("s1は空文字です");
		}
	}

}
