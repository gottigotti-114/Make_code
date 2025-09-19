package study.Slot;

import java.util.Random;

public class RondomMake {
	double random_value;
	
	public void RondomMake() {
		Random r = new Random();
		r.setSeed(99999);
		
		double float_value = r.nextDouble();
		System.out.println(float_value);
		this.random_value = float_value * 10.0;
		
		System.out.println(this.random_value);
		
	}
}

