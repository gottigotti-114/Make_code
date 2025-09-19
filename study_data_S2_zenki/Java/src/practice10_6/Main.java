package practice10_6;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Hero hero = new Hero();
		PoisonMatango pm = new PoisonMatango('A');
		
		hero.attack(pm);
		pm.attack(hero);
		pm.attack(hero);
		pm.attack(hero);
		pm.attack(hero);
		pm.attack(hero);
		pm.attack(hero);
	}

}
