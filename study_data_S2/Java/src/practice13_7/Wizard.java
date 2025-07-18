package practice13_7;

public class Wizard {
	private int hp;
	private int mp;
	private String name;
	private Wand wand = new Wand();
	void heal(Hero h) {
		if(this.wand == null) {
			System.out.println("杖のプロパティ設定が未定義です");
			throw new IllegalArgumentException("杖の設定をしてください");
		}
		int basePoint = 10; //増幅率はwandのpowerを基準とする
		int recovPoint = (int)(basePoint * this.wand.getPower());
		h.setHp(h.getHp() + recovPoint);
		System.out.println(h.getName() + "のHPを" + recovPoint + "回復した！");
		
	}
	
	//セッター

	public void setWand( String wand_name, double power ) {
		//エラーチェック
		if(100 <= power || power <= 0.5) {
			System.out.println("powerの値：0.5以上, 100以下");
			System.out.println("wand.power:" + power);
			throw new IllegalArgumentException("異常なpowerの値を検知しました。処理を終了します");
		}
		if(wand_name.length() < 3)  {
			System.out.println("杖の名前の文字数が少なすぎます：3以上");
			System.out.println("wand.nameの文字数：" + wand_name.length());
			throw new IllegalArgumentException("異常なwandの名前の文字数を検知しました。処理を終了します。");
		}
		this.wand.setName(wand_name);
		this.wand.setPower(power);
	}
	public void setName( String name ) {
		// エラーチェック
		if(name.length() < 3) {
			System.out.println("名前の文字数：３以上");
			System.out.println("nameの文字数：" + name.length());
			throw new IllegalArgumentException("名前の文字数が少なすぎます。処理を終了します");
		}
		this.name = name;
	}
	public void setHp( int hp ) {
		//エラーチェック
		if(hp < 0) {
			System.out.println("this.hp:" + hp);
			this.hp = 0;
			throw new IllegalArgumentException("異常なHPの値を検出。HPを0に値を代入。処理を中断します。");
		}
		this.hp = hp;
	}
	public void setMp(int mp ) {
		if(mp < 0) {
			System.out.println("this.mp:" + mp);
			System.out.println("異常なMPの値を検出。処理を終了します。");
		}
		this.mp = mp;
	}
	
}
