package code17_1;

import java.io.FileWriter;
import java.io.IOException;

public class Main5 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		//ここではfwのスコープ範囲外でclose()しているため、エラー
//		try {
//			FileWriter fw = new FileWriter("data.txt");
//			fw.write("hello!");
//		}catch(Exception e) {
//			System.out.println("何らかの例外が発生しました");
//		}finally {
//			fw.close();
//		}
		
		//正しい書き方
		FileWriter fw = null;
		try {
			fw = new FileWriter("data.txt");
			fw.write("hello!");
			throw new IOException();
		}catch(IOException e) {
			System.out.println("何らかの例外が発生しました" + e.getMessage());
		}finally {
			if(fw != null) {
				try{
					fw.close();
				}catch(IOException e){
					;
				}
			}
		}
	}

}
