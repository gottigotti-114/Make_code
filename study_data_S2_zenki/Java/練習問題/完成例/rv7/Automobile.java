package review.rv7;

public class Automobile {
	private String name;
	private double fuel;
	public Automobile(String name, double fuel) {
		this.name = name;
		this.fuel = fuel;
	}
	public String getName() {
		return name;
	}
	public double getFuel() {
		return fuel;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void setFuel(double fuel) {
		this.fuel = fuel;
	}
	public void advance() {
		if(this.fuel > 0 ) {
			System.out.println("ブ～ン！");
		}
		if(this.fuel<10) {
			this.fuel=0;
			System.out.println("ガス欠！");
		}else {
			this.fuel -=10;
			if(this.fuel<10) {
				System.out.println("ガス欠注意！");
			}
		}
	}
	
}
