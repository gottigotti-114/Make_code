package review.rv4;
/*
 * 宿泊者クラス
 */
public class Guest {
	private String name;	//宿泊者氏名
	private String no;	//宿泊者番号
	//コンストラクタ
	public Guest( String name ) {
		this.name = name;
	}
	public Guest( Guest guest) {
		this.name = guest.getName();
		this.no = guest.getNo();	//★追加
	}
	//ゲッター
	public String getName() {
		return name;
	}
	public String getNo() {
		return no;
	}
	//セッター
	public void setName(String name) {
		this.name = name;
	}
	public void setNo(String no) {
		this.no = no;
	}
	//クラスの文字列表現取得
	@Override
	public String toString() {
		return "宿泊者番号:"+getNo()+"／氏名："+getName();
	}
	
}
