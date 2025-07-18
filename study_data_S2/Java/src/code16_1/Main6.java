package code16_1;

import java.util.HashMap;
import java.util.Map;

public class Main6 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ

	//ハッシュマップの作成
	Map<String, Integer> prefs = new HashMap<String, Integer>();
	
	//データの挿入（キー, 値）
	prefs.put("京都府",255);
	prefs.put("東京都",1261);
	prefs.put("熊本県",181);
	
	//キーを指定して、データを取得
	int tokyo = prefs.get("東京都");
	System.out.println("東京都の人口は" + tokyo);
	
	//キーの削除
	prefs.remove("京都府");
	
	//キーの更新
	prefs.put("熊本県",182);
	
	int kumamoto = prefs.get("熊本県");
	System.out.println("熊本県の人口は、" + kumamoto);
	}

}
