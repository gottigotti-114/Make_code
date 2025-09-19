package code17_1;

import java.io.FileWriter;

public class Main3 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		System.out.println("a");
		try {
			FileWriter fw = new FileWriter("./data2.txt");
			fw.write("Hello!");
			fw.close();
			
		}catch (Exception e) {
			System.out.println("何らかの例外が発生しました");
		}
	}

}
