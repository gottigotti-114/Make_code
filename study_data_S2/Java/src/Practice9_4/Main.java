package Practice9_4;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Thief personA = new Thief("アサカ",40,5);
		Thief personB = new Thief("アサカ",40);
		Thief personC = new Thief("アサカ");
		Thief personD = new Thief();
		
		System.out.println(personA.name + "さんのHPとMPは" + personA.hp + "," + personA.mp);
		System.out.println(personB.name + "さんのHPとMPは" + personB.hp + "," + personB.mp);
		System.out.println(personC.name + "さんのHPとMPは" + personC.hp + "," + personC.mp);
		System.out.println(personD.name + "さんのHPとMPは" + personD.hp + "," + personD.mp);
	}

}
