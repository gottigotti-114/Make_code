package code17_1;

import java.io.FileWriter;
import java.io.IOException;

public class Main4 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		FileWriter fw = null;
		try {
			fw = new FileWriter("./data.txt");
			fw.write("hello!");
		}catch(IOException e) {
			System.out.println("エラーです");
		}
		fw.close();
		
		
	}


}
