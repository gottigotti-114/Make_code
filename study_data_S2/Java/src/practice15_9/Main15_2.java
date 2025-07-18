package practice15_9;

public class Main15_2 {
	public static String makePath(String folder, String file) {
		String ans = "";
		
		if ( folder.matches("[A-Z]{1}:\\\\.*")) {
			if( folder.matches("[A-Z]{1}:\\\\.*\\\\")) {
				ans = folder + file;
			}else {
				ans = folder + "\\" + file;
			}
		}else {
			System.out.println("正しい、指定方式にしてください");
			System.out.println(folder);
		}
		
		return ans;
	}

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String folder = "C:\\Javadev\\";
		String file = "readme.txt";
		String path;
		
		path = makePath(folder,file);
		System.out.println("パス名は:" + path);
		
	}

}
