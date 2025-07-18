package problem5.review.rv7;

public class TestAutomobile {
	public static void main(String[] args) {
		Automobile crown = new Automobile("クラウン", new java.util.Random().nextDouble(50));
		
		System.out.println("名前：" + crown.getName());
		System.out.println("ガソリン量：" + crown.getFuel());
		crown.advance();
		System.out.println("ガソリン量：" + crown.getFuel());
	}
}
