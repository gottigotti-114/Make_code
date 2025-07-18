package code11_8;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Dancer dan = new Dancer();
		Matango mt = new Matango();
		
		dan.hp = 100;
		dan.name = "ミナト";
		
		mt.suffix = 'A';
		
		dan.run();
		dan.attack(mt);
		
		System.out.println("マタンゴのHP：" + mt.hp);
		
		dan.dance();
		
	}

}
