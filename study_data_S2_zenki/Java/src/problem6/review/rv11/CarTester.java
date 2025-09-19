package problem6.review.rv11;

public class CarTester {
	public static void main(String[] args) {
		Car[] cars = {
			new Car("トミタ","クラウン",300),
			new Car("月　産","サニー",100),
			new HybridCar("ホシダ","シビック",150,70,30000),
			new PhevCar("四　菱","アウトサイダー",230,250,30000),
			new CarAb("スベル","インプレッサ",150)
		};
		
		for(Car c : cars) {
			System.out.println(c.getSpec());
			c.accele();
			c.brake();
		}
	}
}
