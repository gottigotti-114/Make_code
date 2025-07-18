package practice14_5_2;

public class Cleric {
	String name;
	int hp=50;
	static final int maxHp=50;
	int mp=10;
	static final int maxMp=10;
	
	void selfAid() {
		this.mp -= 5;
		this.hp = Cleric.maxHp;
	}
	int pray( int sec ) {
		int mpUp = new java.util.Random().nextInt(3) + sec;
		if((mpUp / (Cleric.maxMp - this.mp)) != 0) { //もしMP回復量が、残りのMP回復量を上回ったら MP回復量 ÷ 残りのMP回復量 が 1である。
			mpUp = Cleric.maxMp-this.mp;
			this.mp = Cleric.maxMp;
			return mpUp;
		}
	
	this.mp += mpUp;
	return mpUp;
	}
}
