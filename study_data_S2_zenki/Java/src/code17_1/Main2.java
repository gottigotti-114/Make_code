package code17_1;

import java.io.FileWriter;
import java.io.IOException;

public class Main2 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		try {
			FileWriter fw = new FileWriter("data.txt");
			System.out.println(fw);
		}catch(IOException e) {
			System.out.println("エラーが発生しました");
		}
	}

}
