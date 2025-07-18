package problem4.review;

public class Rv3 {
	public static void main(String[] args) {
		System.out.print("二等辺の長さ：");
		int length = new java.util.Scanner(System.in).nextInt();
		showTriangle(length);
	}
	
	static void showTriangle(int length) {
		for(int i=length; i>0; i--) {
			putChars('■',i);
			System.out.println("");
		}
	}
	static void putChars(char emoji, int length) {
		for(int i=0; i<length; i++) {
			System.out.print(emoji);
		}		
	}
}
