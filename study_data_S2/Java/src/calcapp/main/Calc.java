package calcapp.main;

//ここでcalcapp.logics.CalcLogic.tasu()といちいち指定しなくてもよくなる
//以下CalcLogic.tasu()
import calcapp.logics.CalcLogic;

public class Calc {
	
	public static void main(String[] args) {
		int a = 10; int b = 2;
		//別のクラスで定義されているクラスメソッド（static宣言がついたメソッド）を
		//呼び出すときはクラス名.メソッド名()の形で呼び出す。
		
		int total = CalcLogic.tasu(a, b); 
		int delta = CalcLogic.hiku(a, b);
		
		System.out.println("足すと" + total + "、引くと" + delta);
	}
}
