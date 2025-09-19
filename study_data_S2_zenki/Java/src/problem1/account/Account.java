package problem1.account;

public class Account {
	private String name; //口座名義
	private String no; //口座番号
	private long balance; //預金残高
	
	//--コンストラクタ--//
	
	public Account( String n, String num, long z ) {
		name = n; //口座名義
		no = num; //口座葉豪
		balance = z; //預金残高
	}
	
	//--k円預ける--//
	public void deposit( long k ) {
		balance += k;
	}
	
	//--k円おろす--//
	public void withdraw( long k ) {
		balance -= k;
	}
	
	//口座の情報の文字列で取り出す
	public String getInfo() {
		String info = "";
		info += "口座名義：" + name;
		info += "\n口座番号：" + no;
		info += "\n預金残高：" + balance;
		return info;
	}
	
}
