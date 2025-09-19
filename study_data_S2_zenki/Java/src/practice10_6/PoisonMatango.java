package practice10_6;

public class PoisonMatango extends Matango {
	int stock_poison = 5;
	
	public PoisonMatango(char suffix) {
		super (suffix);
	}
	
	public void attack(Hero h) {
		super.attack(h);
		if (stock_poison > 0) {
			System.out.println("さらに毒の胞子をばらまいた！");
			int damage = h.hp / 5;
			h.hp -= damage;
			System.out.println(damage + "ポイントのダメージ！");
			stock_poison -= 1;
		}
	}
}
