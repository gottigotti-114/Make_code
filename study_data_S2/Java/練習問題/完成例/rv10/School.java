package review.rv10;
/*
 * 学校クラス
 */
public class School {
	private String name;	//学校名
	private int capacity;	//定員数
	private int number;	//学生数
	private Student[] students;	//学生インスタンス
	//コンストラクタ
	public School(String name, int capacity ) {
		this.name = name;
		this.capacity = capacity;
		this.number = 0;
		this.students = new Student[ capacity ];
	}
	//ゲッター
	public String getName() {
		return name;
	}
	public int getCapacity() {
		return capacity;
	}
	public int getNumber() {
		return number;
	}
	public Student[] getStudents() {
		return students;
	}
	//セッター
	public void setName( String name ) {
		this.name = name;
	}
	public void setCapacity( int capacity ) {
		this.capacity = capacity;
	}
	public void setNumber( int number ) {
		this.number = number;
	}
	public void setStudents( Student[] students ) {
		this.students = students;
	}
	//学生追加
	public void addStudent( Student student) {
		if(number >= capacity) {
			return;
		}
		this.students[ number ] = student;	//学生を配列に追加
		number++;	//学生数をカウントアップ
		student.setNo("ICC-"+number);	//学生番号を設定
	}
	
}
