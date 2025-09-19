package problem3;

public abstract class Player {
	//フィールド名
	private String maker; //メーカー
	private String pno; //型番
	
	//コンストラクタ
	public Player( String maker, String pno) {
		this.maker = maker;
		this.pno = pno;
	}
	
	//メソッド
	public String getMaker() {
		return maker;
	}
	public String getPno() {
		return pno;
	}
	public String getInfo() {
		return "メーカー:" + maker + "\t型番:" + pno;
	}
	
	//抽象メソッド
	abstract void play(); //再生
	abstract void stop(); //停止
	abstract void next(); //次へ
	abstract void prev(); //前へ
	
}
