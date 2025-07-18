package code17_1;

public class Main11 {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Person p = new Person();
		try {
			p.setAge(128);
			System.out.println("Pさんの年齢は" + p.age + "です");
		}catch(IllegalArgumentException e) {
			System.out.println("エラー発生。終了します。");
			System.out.println(e.getMessage());
			System.out.println(e.getClass());
		}
	}

}