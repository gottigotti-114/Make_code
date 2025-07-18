package problem4.review.rv4;

public class Guest {
	//フィールド
	private String name;
	private String no;
	
	//コンストラクタ
	public Guest( String name ) {
		this.name = name;
	}
	
	//オーバーロード
	public Guest( Guest guest ) {
		this.name = guest.getName();
	}
	
	//セッター
	public void setName( String name ) {
		this.name = name;
	}
	public void setNo( String no ) {
		this.no = no;
	}
	
	//ゲッター
	public String getName() {
		return this.name;
	}
	public String getNo() {
		return this.no;
	}
	
	//メソッド
	public String toString() {
		return "宿泊者番号：" + this.no +" / 氏名：" + this.name;
	}
	
}
