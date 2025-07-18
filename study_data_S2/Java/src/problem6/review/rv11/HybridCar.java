package problem6.review.rv11;

public class HybridCar extends Car {
	//フィールド
	private int motorPower;
	private int batteryCapacity;
	
	//コンストラクタ
	public HybridCar(String maker, String name, int power, int motor_power, int battery) {
		super(maker,name,power);
		this.motorPower = motor_power;
		this.batteryCapacity = battery;
	}

	//ゲッター
	public int getMotorPower() {
		return this.motorPower;
	}
	public int getBatteryCapacity() {
		return this.batteryCapacity;
	}
	
	//メソッド
	public String getSpec() {
		return "メーカー：" + super.getMaker() + " / 名前：" + super.getName() + " / エンジン出力：" + super.getPower() + " / モータ出力：" + this.motorPower + " / バッテリー容量：" + this.batteryCapacity;
	}
	public void brake() {
		System.out.println("★回生ブレーキ");
	}
}
