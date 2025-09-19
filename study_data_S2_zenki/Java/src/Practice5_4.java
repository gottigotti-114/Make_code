
public class Practice5_4 {

	public static double calcTriangleArea(double bottom, double height) {
		return (bottom * height) / 2;
	}
	
	public static double calcCircleArea(double radius) {
		double PI = 3.14;
		return radius * radius * PI;
	}
	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		//三角形の設定
		double triangle_b = 10.0;
		double triangle_h = 5.0;
		
		//円の設定
		double circle_hw = 5.0;
		
		System.out.println("三角形の底辺の長さが" + triangle_b + "cm、高さが" + triangle_h + "cmの場合、面積は" + calcTriangleArea(triangle_b,triangle_h) + "平方cm");
		System.out.println("円の半径が" + circle_hw + "cmの場合、面積は" + calcCircleArea(circle_hw) + "平方cm");
		
	}

}
