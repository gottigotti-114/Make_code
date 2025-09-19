package problem6.review;

public class Rv8 {
	public static void showTriangle(int wide) {
		for(int i=wide; i>0; i--) {
			putChars('■',i);
			System.out.println();
		}
	}
	
	public static void putChars(char object, int cnt) {	
		for(int i = 0; i<cnt; i++) {
			System.out.print(object);
		}
	}

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		System.out.print("二等辺の長さ：");
		int wide = new java.util.Scanner(System.in).nextInt();
		
		showTriangle(wide);
	}

}
