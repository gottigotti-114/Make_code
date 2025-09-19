package practice15_9;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;

public class Main15_4 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		//現在の時刻を取得
		Date now = new Date();
		System.out.println(now.getTime());
		
		//nowの内容をCalendarにセット
		Calendar cal = Calendar.getInstance();
		cal.setTime(now);
		
		//Calendarから日の情報を取得
		int day = cal.get(Calendar.DATE);
		
		// 取得した値に100を足した値をCalendarの「日」二セット
		cal.set(Calendar.DAY_OF_MONTH, day + 100);
		
		//Calendarの日時情報をDate型に変換する
		Date info = cal.getTime();
		
		//SimoleDateFormatを用いて、指定された形式でDateインスタンスの内容を表示する
		SimpleDateFormat f = new SimpleDateFormat("yyyy/MM/dd");
		
		String d = f.format(info);
		String n = f.format(now);
		System.out.println("現在は" + n + "です");
		System.out.println("100日後は" + d + "です");
		
	}

}
