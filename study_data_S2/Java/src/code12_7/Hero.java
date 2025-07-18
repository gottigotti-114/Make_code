package code12_7;

public class Hero extends Character{
	String name = "ミナト";
	//戦う
//	public void attack(Matango m) {
//		System.out.println(this.name + "の攻撃！");
//		m.hp -= 5;
//		System.out.println("5ポイントのダメージを与えた！");
//	}
	//逃げる
	public void run() {
		System.out.println(this.name + "は逃げ出した！");
	}
}
