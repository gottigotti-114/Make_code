package code17_1;

public class Person {
	int age;
	public void setAge(int age) {
		//引数チェック
		if(age < 0) { 
			throw new IllegalArgumentException("年齢は0以上の数を指定すべきです。指定値=" + age);
		}
		//問題ないなら格納
		this.age = age;
	}
}