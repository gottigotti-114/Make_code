package problem6.review.rv10;

public class Student {
	private String name; //名前
	private String no; //学生番号
	
	//コンストラクタ
	public Student(String name, int no) {
		this.name = name;
		this.no = "ICC-" + no;
	}
	
	//ゲッター
	public String getName() {
		return this.name;
	}
	public String getNo() {
		return this.no;
	}
	
	//セッター
	public void setName(String name) {
		this.name = name;
	}
	public void setNo(int no) {
		this.no = "ICC-" + no;
	}
	
	//メソッド
	public String toString() {
		return "学生番号：" + this.no + "/氏名：" + this.name; 
	}
	
}
