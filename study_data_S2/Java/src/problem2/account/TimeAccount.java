package problem2.account;

public class TimeAccount extends Account{
	//フィールド
	private long timeBalance; //定期預金を格納する
	
	//コンストラクタ
	public TimeAccount(String name, long balance, long timeBalance) {
		super(name,balance);
		this.timeBalance = timeBalance;
	}
	
	public long getTimeBalance() {
		return timeBalance;
	}
	
	//追加メソッド
	public void cancel() {
		super.deposit(timeBalance);
		timeBalance = 0;
	}
	
	//オーバーライド
	public String getInfo() {
		String info = super.getInfo();
		info += "\n定期預金：" + timeBalance;
		return info;
	}
	
	
}
