package code17_1;

public class Main13 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		try {
			//試験的に例外を発生させる
			throw new UnsupportedMusicFileException("未対応のファイルです。");
		}catch(Exception e) {
			e.printStackTrace();
		}
	}

}
