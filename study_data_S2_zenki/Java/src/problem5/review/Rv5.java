package problem5.review;

public class Rv5 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		Boolean flag = true;

		int q1;
		int q2;
		int ans;
		while(flag) {
			q1 = new java.util.Random().nextInt(101);
			q2 = new java.util.Random().nextInt(101);
			
			System.out.print(q1 + "+" + q2 + "の答えは？：");
			ans = new java.util.Scanner(System.in).nextInt();
			
			if(ans==(q1+q2)) {
				System.out.println("〇正解です！");
				flag = false;
			}
		}
	}

}
