package problem6.review;

public class Rv9 {
	public static int[] reverse(int[] arr) {
		//添え字を記録
		int[] next_arr = new int[arr.length];
		int i=0;
		int j=arr.length - 1;
		
		//要素を交換
		for( ; i<=j; i++,j--) {
			next_arr[j] = arr[i];
			next_arr[i] = arr[j];
		}
		
		//返り値
		return next_arr;
	}

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		//要素取得
		System.out.println("配列の要素数を入力してください：");
		int wide = new java.util.Scanner(System.in).nextInt();
		
		//配列生成
		int[] prev_arr = new int[wide];
		int[] next_arr = new int[wide];
		
		//ランダムな数を生成 -> 配列に代入
		for(int i=0; i<prev_arr.length; i++) {
			prev_arr[i] = new java.util.Random().nextInt(100);
		}
		
		//要素を逆順に -> メソッド実行
		next_arr = reverse(prev_arr);
		
		//表示
		System.out.println("●変更前の配列");
		for(int i : prev_arr) {
			System.out.print(i + " ");
		}
		
		System.out.println("\n●変更後の配列");
		for(int i : next_arr) {
			System.out.print(i + " ");
		}
		
		
 	}

}
