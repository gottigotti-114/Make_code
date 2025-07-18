package practice14_5;

public class Bank {
	String accountNumber;
	int balance;
	
	public String toString() {
		return "\\" + this.balance + "(口座番号：" + this.accountNumber + "）";
	}
	public boolean equals(Object a) {
		if(this == a ) {return true;}
		if(a instanceof Bank b) {
			if(this.accountNumber.trim().equals(b.accountNumber.trim())) {
				return true;
			}else {
				return false;
			}
		}
		return false;
	}
}
