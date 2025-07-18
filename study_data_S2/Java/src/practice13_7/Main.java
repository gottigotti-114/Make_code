package practice13_7;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Hero h = new Hero();
		Wizard w = new Wizard();
		w.setName("ミナトウィザード");
		w.setHp(100);
		w.setMp(100);
		w.setWand("光の杖",10);
		w.heal(h);
	}

	
}
