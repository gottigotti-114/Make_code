package code10_8;

public class SuperHero extends Hero{
	boolean flying;
	public void fly() {
		this.flying = true;
		System.out.println("飛び上がった！");
	}
	public void land() {
		this.flying = false;
		System.out.println("着地した！");
	}
	public void run() { //Heroにもあるメソッドだが、こっち側で再定義することができる（オーバーライド）
		System.out.println(this.name + "は撤退した");
	}
	public void attack(Matango m) {
		super.attack(m); //親クラス(Hero)のattackメソッド呼び出し
		if(this.flying) {
			super.attack(m); //親クラス(Hero)のattackメソッド呼び出し
		}
	}
}
