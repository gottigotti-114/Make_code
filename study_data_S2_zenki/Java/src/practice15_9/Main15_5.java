package practice15_9;

import java.time.ZonedDateTime;
import java.time.format.DateTimeFormatter;

public class Main15_5 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		ZonedDateTime now = ZonedDateTime.now();
		
		ZonedDateTime plus100days = now.plusDays(100);
		
		DateTimeFormatter fmt = DateTimeFormatter.ofPattern("yyyy年MM月dd日)");
		
		System.out.println("100日後の日付：" + plus100days.format(fmt));
	}

}
