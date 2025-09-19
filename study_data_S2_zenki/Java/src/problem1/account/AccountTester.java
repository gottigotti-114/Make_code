package problem1.account;

public class AccountTester {

	public static void main(String[] args) {
		// TODO 自動生成されたメソッド・スタブ
		Account[] accounts = new Account[5];
		accounts[0] = new TimeAccount("足立幸一","123456",1000,30);
		accounts[1] = new TimeAccount("中田幸一","654321",200,10);
		accounts[2] = new Account("松井秀喜","0853721234",80);
		accounts[3] = new Account("安倍晋三","6990621",1000);
		accounts[4] = new Account("松坂大輔","085372500",3000);
		
		for(int i=0; i<accounts.length; i++) {
			System.out.println();
			System.out.println(accounts[i].getInfo());
		}
		((TimeAccount)accounts[0]).cancel();//足立さんの定期預金をキャンセル 
		  System.out.println(); 
		  System.out.println("★足立さんの定期預金をキャンセル"); 
		  System.out.println(accounts[0].getInfo() );//足立さんの口座の情報を表示 
		 
		  accounts[1].withdraw(50);//中田さんの口座から50円下ろす 
		  System.out.println(); 
		  System.out.println("★中田さんの口座から50円下ろす"); 
		  System.out.println(accounts[1].getInfo() );//中田さんの口座の情報を表示 
		 
		  accounts[2].deposit(1000);//松井さんの口座に1000円預ける 
		  System.out.println(); 
		  System.out.println("★松井さんの口座に1000円預ける"); 
		  System.out.println(accounts[2].getInfo() );//松井さんの口座の情報を表示
	}
}
