package code15_16;

import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

public class Main {
	public static void main(String[] args) {
		//文字列からLocalDateを生成
		DateTimeFormatter fmt = DateTimeFormatter.ofPattern("yyyy/MM/dd");
		LocalDate ldate = LocalDate.parse("2023/09/22",fmt);
		
		//1000日後を計算する
		LocalDate ldatep = ldate.plusDays(1000);
		String str = ldatep.format(fmt);
		System.out.println("1000日後は" + str);
		
		//現在日付との比較
		LocalDate now = LocalDate.now();
		if( now.isAfter(ldatep)) {
			System.out.println("本日("+ now +")は、その日より未来です。");
		}else if( now.isBefore(ldatep)) {
			System.out.println("本日("+ now +")は、その日より過去です。");
		}
	}
}
