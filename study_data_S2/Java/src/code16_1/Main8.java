package code16_1;

import java.util.ArrayList;
import java.util.List;

//データ格納用クラス
class Hero {
	public String name;
}

public class Main8 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		
		//ヒーローインスタンス作成
		Hero h = new Hero();
		
		//nameをミナトにする
		h.name = "ミナト";
		
		//listにheroインスタンスを登録する
		List<Hero> list = new ArrayList<Hero>();
		list.add(h);
		
		//入れたものをさらに名前を変更
		h.name = "スガワラ";
		
		//参照型のリストのため、アドレスを格納したため、後から変えても変更できる
		System.out.println(list.get(0).name);
	}

}
