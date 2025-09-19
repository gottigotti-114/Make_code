package practice13_7;

public class Hero {
	private String name = "ミナト";
	private int hp = 100;
	
	//ゲッター
	public String getName() {
		return this.name;
	}
	public int getHp() {
		return this.hp;
	}
	
	//セッター
	public void setHp( int hp ) {
		this.hp = hp;
	}
	
	//逃げる
	public void run() {
		System.out.println(this.name + "は逃げ出した！");
	}
}
