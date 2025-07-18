package code15_17;

import java.time.LocalDate;
import java.time.Period;

public class Main {

	public static void main(String[] args) {
		LocalDate d1 = LocalDate.of(2023, 1, 1);
		LocalDate d2 = LocalDate.of(2023, 1, 4);
		
		//3日間を表すPeriodを二通りの方法で生成
		Period p1 = Period.ofDays(3);
		Period p2 = Period.between(d1, d2);
		
		//d2のさらに3日後を計算する
		LocalDate d3 = d2.plus(p2);
		System.out.println(d2 + "の三日後は" + d3 +"である");
	}

}
