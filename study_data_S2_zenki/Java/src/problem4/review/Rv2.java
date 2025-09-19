package problem4.review;

public class Rv2 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ]
		
		//要素数取得
		System.out.print("要素数を指定>>");
		int arr_wide = new java.util.Scanner(System.in).nextInt();
		
		//arr_wide個の要素を持った配列を生成
		int[] arr = new int[arr_wide];
		
		//要素ひとつずつに100~999の乱数を設定
		for(int i = 0; i < arr.length; i++) {
			arr[i] = new java.util.Random().nextInt(100,999);
		}
		
		//10個ごとに改行し、表示
		int total,max,min,ave;
		total = max = ave = 0;
		min = 1000;
		for(int i = 0; i < arr.length; i++) {
			if (i % 10 == 0) { if(i != 0) {System.out.println("");}}
			System.out.print(arr[i] + " ");
			// 変数をそれぞれ求める
			total += arr[i];
			if (max < arr[i]) { max = arr[i]; }
			if (min > arr[i]) { min = arr[i]; }
		}
		ave = total / arr.length;
		
		//最大、最小、合計、平均を表示
		System.out.println("\n最大：" + max + "\n最小：" + min + "\n合計：" + total + "\n平均：" + ave); 
	}

}
