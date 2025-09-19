package code15_3;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		String s1 = "Java programing";
		System.out.println("文字列s1の4文字目以降は" + s1.substring(3));
		System.out.println("文字列s1の4~8文字目は" + s1.substring(3,8));
		
		System.out.println("文字列s1中の小文字を大文字に変換した文字列は" + s1.toLowerCase());
		System.out.println("文字列s1中の大文字を小文字に変換した文字列は" + s1.toUpperCase());
		System.out.println("文字列s1のセントと末尾の半角スペースを取り除いた文字列は" + s1.trim());
		System.out.println("文字列s1中のJavaをRubyに変換した文字列は" + s1.replace("Java","Ruby"));
		
	}

}
