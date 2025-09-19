package code10_1;

public class SuperHero extends Hero{
//	String name = "ミナト";　<<<<ここも全てHeroに入っている>>>>
//	int hp = 100;
	boolean flying;
//	//戦う <<<<<ここは継承で持ってくることができる>>>>>
//	public void attack(Matango m) {
//		System.out.println(this.name + "の攻撃！");
//		m.hp -= 5;
//		System.out.println("5ポイントのダメージを与えた！");
//	}
//	//逃げる
//	public void run() {
//		System.out.println(this.name + "は逃げ出した！");
//	}
	//飛ぶ
	public void fly() {
		this.flying = true;
		System.out.println("飛び上がった！");
	}
	//着地する
	public void land() {
		this.flying = false;
		System.out.println("着地した！");
	}

}
