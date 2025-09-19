package review.rv10;
/*
 * 学校クラスおよび学生クラス テストプログラム
 */
public class TestSchool {

	public static void main(String[] args) {
		School school = new School("出雲コアカレッジ",200);
		Student[] students = {
				new Student("島根太郎"),
				new Student("ニッポンはな子"),
				new Student("安倍信三"),
				new Student("麻生三郎"),	
		};		
		for( Student s : students ) {
			school.addStudent(s);	//学校に学生を追加する
		}
		Student[] students2 = school.getStudents();	//全学生の情報を取得する
		System.out.println("《取得した学生情報》");
		for( int i =0 ; i< school.getNumber(); i++) {
			System.out.println( students2[i] );	//学生の情報を表示する
		}
	}

}
