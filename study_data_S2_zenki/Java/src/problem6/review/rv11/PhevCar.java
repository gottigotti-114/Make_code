package problem6.review.rv11;

public class PhevCar extends HybridCar {

	//コンストラクタ
	public PhevCar(String maker, String name, int power, int motor_power, int battery) {
		super(maker,name,power,motor_power,battery);
	}
	
	//メソッド
	public void charge() {
		System.out.println("★充電");
	}
	public void brake() {
		super.brake();
		this.charge();
	}
}

