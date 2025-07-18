package problem6.review.rv11;

public class CarAb extends Car implements AutoBrake{
	//コンストラクタ
	public CarAb(String maker, String name, int power) {
		super(maker,name,power);
	}
	
	//メソッド
	public void autoBrake() {
		System.out.println("★自動ブレーキ！");
	}
	public void brake() {
		super.brake();
		this.autoBrake();
	}
}
