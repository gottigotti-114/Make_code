package code16_1;

import java.util.HashMap;
import java.util.Map;

public class Main7 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

		//ハッシュマップの作成
		Map<String, Integer> prefs = new HashMap<String, Integer>();
		
		//データの挿入（キー, 値）
		prefs.put("京都府",255);
		prefs.put("東京都",1261);
		prefs.put("熊本県",181);
		
		//県名を一覧取得する
		for(String key : prefs.keySet()) {
			int value = prefs.get(key);
			System.out.println(key + "の人口は" + value);
		}
	}

}
