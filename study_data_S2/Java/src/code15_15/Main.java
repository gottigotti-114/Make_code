package code15_15;

import java.time.LocalDateTime;
import java.time.ZoneId;
import java.time.ZonedDateTime;

public class Main {
	public static void main(String[] args) {
		//LocalDateTimeの生成方法
		LocalDateTime l1 = LocalDateTime.now();
		LocalDateTime l2 = LocalDateTime.of(2020,1,1,9,5,0,0);

		//LocalDateTimeとZoneDateTimeの相互変換
		ZonedDateTime z1 = l2.atZone(ZoneId.of("Europe/London"));
		LocalDateTime l3 = z1.toLocalDateTime();
		
		System.out.println(l1.getYear() + "/" + l1.getMonth() + "/" + l1.getDayOfMonth() + " " + l1.getHour() + ":" + l1.getMinute());
		
		System.out.println(l2.getYear() + "/" + l2.getMonth() + "/" + l2.getDayOfMonth() + " " + l2.getHour() + ":" + l2.getMinute());
		
		System.out.println(l3.getYear() + "/" + l3.getMonth() + "/" + l3.getDayOfMonth() + " " + l3.getHour() + ":" + l3.getMinute());
		
		System.out.println(z1.getYear() + "/" + z1.getMonth() + "/" + z1.getDayOfMonth() + " " + z1.getHour() + ":" + z1.getMinute());	

	}
}
