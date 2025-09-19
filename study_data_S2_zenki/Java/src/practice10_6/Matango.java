package practice10_6;

//1:１，４
//2:アdevice イmobile phone ウrider エSportCar オbook カ漢和辞典(ElectroDictionary)


public class Matango {
	int hp = 50;
	char suffix;
	
	public Matango(char suffix ) {
		this.suffix = suffix;
	}
	public void attack(Hero h) {
		System.out.println("キノコ" + this.suffix + "の攻撃");
		System.out.println("10のダメージ");
		h.hp -= 10;
	}
}
