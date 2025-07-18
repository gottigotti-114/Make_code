package problem6.review.rv10;

public class TestSchool {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Student[] students = {
				new Student("島根太郎",1),
				new Student("ニッポンはな子",2),
				new Student("安倍信三",3),
				new Student("麻生三郎",4)
		};
		
		School school = new School("出雲コアカレッジ",4);
		
		school.setStudents(students);
		
		for(int i=0; school.getStudents().length > i; i++) {
			System.out.println(school.getStudents()[i]);
		}
	}

}
