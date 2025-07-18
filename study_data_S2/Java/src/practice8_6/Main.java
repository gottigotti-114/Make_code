package practice8_6;

public class Main {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Cleric Hero = new Cleric();
		Hero.name = "Fujihara";
	
		System.out.println("名前:"+Hero.name+"|HP:"+Hero.hp+"|MP:"+Hero.mp);
		Hero.selfAid();
		Hero.selfAid();
		Hero.selfAid();
		Hero.selfAid();
		Hero.selfAid();
		
		System.out.println("名前:"+Hero.name+"|HP:"+Hero.hp+"|MP:"+Hero.mp);
		
		int life_v = Hero.pray(5);
		System.out.println("MPを" + life_v + "回復した！！");
		System.out.println("名前:"+Hero.name+"|HP:"+Hero.hp+"|MP:"+Hero.mp);
		
		life_v = Hero.pray(5);
		System.out.println("MPを" + life_v + "回復した！！");
		System.out.println("名前:"+Hero.name+"|HP:"+Hero.hp+"|MP:"+Hero.mp);

		life_v = Hero.pray(5);
		System.out.println("MPを" + life_v + "回復した！！");
		System.out.println("名前:"+Hero.name+"|HP:"+Hero.hp+"|MP:"+Hero.mp);

		life_v = Hero.pray(5);
		System.out.println("MPを" + life_v + "回復した！！");
		System.out.println("名前:"+Hero.name+"|HP:"+Hero.hp+"|MP:"+Hero.mp);

		life_v = Hero.pray(5);
		System.out.println("MPを" + life_v + "回復した！！");
		System.out.println("名前:"+Hero.name+"|HP:"+Hero.hp+"|MP:"+Hero.mp);

		
		
	}

}
