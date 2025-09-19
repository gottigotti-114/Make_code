package problem6.review.rv11;

public class Car {
	//フィールド
	private  String maker;
	private  String name;
	private  int enjinePower;
	
	//コンストラクタ
	public Car(String maker, String name, int power) {
		this.maker = maker;
		this.name = name;
		this.enjinePower = power;
	}
	
	//ゲッター
	public String getMaker() {
		return this.maker;
	}
	public String getName() {
		return this.name;
	}
	public int getPower() {
		return this.enjinePower;
	}
	
	//メソッド
	public String getSpec() {
		return "メーカー：" + this.maker + " / 名前：" + this.name + " / エンジン出力：" + this.enjinePower;
	}
	
	public void accele() {
		System.out.println("★アクセル！");
	}
	
	public void brake() {
		System.out.println("★ブレーキ！");
	}
	
	
}
