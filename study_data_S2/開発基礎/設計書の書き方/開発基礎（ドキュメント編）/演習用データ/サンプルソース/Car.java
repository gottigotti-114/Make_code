// 自動車クラス

package car;

public class Car {
	private String name;			// 名前
	private int width;			// 幅
	private int height;			// 高さ
	private int length;			// 長さ
	private double x;				// 現在位置Ｘ座標
	private double y;				// 現在位置Ｙ座標
	private double fuel;			// 残り燃料
	private Day purchaseDay;	// 購入日

	//--- コンストラクタ ---//
	public Car(String name, int width, int height, int length, double fuel,
				  Day purchaseDay) {
		this.name = name;  		this.width = width;	this.height = height;
		this.length = length;	this.fuel = fuel;		x = y = 0.0;
		this.purchaseDay = new Day(purchaseDay); 
	}

	public double getX() { return x; }			// 現在位置Ｘ座標を取得
	public double getY() { return y; }			// 現在位置Ｙ座標を取得
	public double getFuel() { return fuel; }	// 残り燃料を取得
	public Day getPurchaseDay() {					// 購入日を取得
		return new Day(purchaseDay);
	}

	//--- スペック表示 ---//
	public void putSpec() {
		System.out.println("名前：" + name);
		System.out.println("車幅：" + width  + "mm");
		System.out.println("車高：" + height + "mm");
		System.out.println("車長：" + length + "mm");
	}

	//--- Ｘ方向にdx・Ｙ方向にdy移動 ---//
	public boolean move(double dx, double dy) {
		double dist = Math.sqrt(dx * dx + dy * dy);		// 移動距離

		if (dist > fuel)
			return false;				// 移動できない　… 燃料不足
		else {
			fuel -= dist;				// 移動距離の分だけ燃料が減る
			x += dx;
			y += dy;
			return true;				// 移動完了
		}
	}
}
