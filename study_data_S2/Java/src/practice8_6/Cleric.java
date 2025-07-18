package practice8_6;

public class Cleric {
	String name;
	int hp=50;
	static final int maxHp=50;
	int mp=10;
	static final int maxMp=10;
	
	void selfAid() {
		this.mp -= 5;
		this.hp = this.maxHp;
	}
	int pray( int sec ) {
		int mpUp = new java.util.Random().nextInt(3) + sec;
		if((mpUp / (this.maxMp - this.mp)) != 0) { //もしMP回復量が、残りのMP回復量を上回ったら MP回復量 ÷ 残りのMP回復量 が 1である。
			mpUp = this.maxMp-this.mp;
			this.mp = this.maxMp;
			return mpUp;
		}
	
	this.mp += mpUp;
	return mpUp;
	}
}
