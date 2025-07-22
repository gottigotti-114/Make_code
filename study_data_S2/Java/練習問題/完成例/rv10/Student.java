package review.rv10;
/*
 * 学生クラス
 */
public class Student {
	private String name;	//学生氏名
	private String no;	//学生番号
	//コンストラクタ
	public Student( String name ) {
		this.name = name;
	}
	public Student( Student student ) {
		this.name = student.getName();
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
		return "学生番号:"+getNo()+"／氏名："+getName();
	}
	
}
