package problem5.review;

public class Rv6 {

	static int sumArray(int[] array) {
		int total = 0;
		for(int row : array) {
			total += row;
		}
		return total;
	}
	
	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		System.out.print("要素数は？：");
		int index = new java.util.Scanner(System.in).nextInt();
		int[] arr = new int[index];
		
		for(int i=0; i<arr.length; i++ ) {
			arr[i] = new java.util.Random().nextInt(101) - 50;
		}
		
		System.out.println("配列の中身：");
		System.out.print("{ " + arr[0]);
		for(int i=1; i < arr.length; i++) {
			System.out.print(", " + arr[i]);
		}
		System.out.println(" }");
		
		System.out.println("合計=" + sumArray(arr));
	}

}
