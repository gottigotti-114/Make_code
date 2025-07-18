package code17_1;

import java.io.FileReader;
import java.io.FileWriter;

public class Main10 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		try( FileWriter fw = new FileWriter("data.txt");) {
			fw.write("hello");
			FileReader fr = new FileReader("aaaa.txt");
		}catch(Exception e) {
			System.out.println("何らかの例外が発生しました：" + e.getMessage());
		}
	}

}
