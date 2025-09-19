package practice15_9;

public class Main15_3 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String text1 = "abcde"; //true
		String text2 = "A44"; //true
		String text3 = "A3"; //true
		String text3_2 = "A324"; //false
		String text4 = "UACE345"; //true
		String text5 = "UaCED3"; //false
		
		System.out.println(text1.matches(".*"));
		System.out.println(text2.matches("^A[0-9]{1,2}"));
		System.out.println(text3.matches("^A[0-9]{1,2}"));
		System.out.println(text3_2.matches("^A[0-9]{1,2}"));
		System.out.println(text4.matches("^U[A-Z]{2,4}.*"));
		System.out.println(text5.matches("^U[A-Z]{2,4}.*"));

	}

}
