package problem6.review.rv10;

public class School {
	private String name; //学校名
	private int capacity; //定員
	private int suu; //学生数
	private Student[] student; //学生
	
	//コンストラクタ
	public School(String name, int capacity) {
		this.name = name;
		this.capacity = capacity;
		this.suu = 0;
		this.student = new Student[capacity];
	}
	
	//ゲッター
	public String getName() {
		return this.name;
	}
	public int getCapacity() {
		return this.capacity;
	}
	public int getSuu() {
		return this.suu;
	}
	public Student[] getStudents() {
		return this.student;
	}
	
	//セッター
	public void setName(String name) {
		this.name = name;
	}
	public void setCapacity(int capacity) {
		this.capacity = capacity;
	}
	public void setSuu(int suu) {
		this.suu = suu;
	}
	public void setStudents(Student[] student) {
		this.student = student;
	}
	
	//メソッド
	public void addStudent(Student student) {
		int i;
		for(i=0; i<this.student.length && this.student[i] != null; i++);
		
		this.student[i] = student;
	}
	
}
