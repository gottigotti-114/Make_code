package code14_2;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Object o1 = new Empty();
		Object o2 = new Hero();
		Object o3 = "こんにちは";
		
		Printer p = new Printer();
		p.printAnything(o1);
		p.printAnything(o2);
		p.printAnything(o3);
	}

}
