package review.rv7;

import java.util.Random;

public class TestAutomobile {

	public static void main(String[] args) {
		Random rand = new Random();
		double f = rand.nextDouble()*50;
		Automobile a = new Automobile("クラウン",f);
		System.out.println("名前："+a.getName());
		System.out.println("ガソリン量："+a.getFuel());
		a.advance();
		System.out.println("ガソリン量："+a.getFuel());
	}

}
