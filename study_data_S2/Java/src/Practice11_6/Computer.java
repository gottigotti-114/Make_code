package Practice11_6;

public class Computer extends TangibleAsset {

	String makerName;
	
	//コンストラクタ
	public Computer(String name, int price, String color, double weight, String makerName) {
		super(name,price,color,weight);
		this.makerName = makerName;
	}
	
	//メソッド
	public String getMakerName() { return this.makerName;}
}
