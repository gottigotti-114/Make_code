package Practice9_5;

public class Main {
	public static void heal(int hp) { //こちらではhpは新たに生成した変数なので変更しても意味がない
		hp += 10;
	}
	public static void heal(Thief thief) { //ここではthiefの参照先アドレスを受け取っている。なのでthief.hpは参照先の変数を指す
		thief.hp += 10;
	}

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		int baseHp = 25;
		Thief t = new Thief("アサカ",baseHp);
		heal(baseHp);
		System.out.println(baseHp + ":" + t.hp);
		heal(t);
		System.out.println(baseHp + ":" + t.hp);
	}

}
