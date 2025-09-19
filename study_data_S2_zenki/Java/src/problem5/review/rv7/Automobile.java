package problem5.review.rv7;

public class Automobile {
	private String name; //名前
	private double fuel; //ガソリン量
	
	//コンストラクタ
	public Automobile(String name, double fuel) {
		this.name = name;
		this.fuel = Math.round(fuel,-1);
	}
	
	//ゲッター
	public String getName() {
		return this.name;
	}
	public double getFuel() {
		return this.fuel;
	}
	
	//メソッド
	public void advance() {
		if(this.fuel > 0) {
			System.out.println("ブーン！");
		}
		if(this.fuel < 10) {
			this.fuel = 0;
			System.out.println("ガス欠！");
		}
		if(this.fuel >= 10) {
			this.fuel -= 10.0;
			if(this.fuel < 10) {
				System.out.println("ガス欠注意！");
			}
		}
	}
	
}
