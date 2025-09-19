package problem3;

import java.util.Date;

public class BDPlayerRecorder extends BDPlayer implements Recorder {
	private Date resvDate; //予約日時
	
	public BDPlayerRecorder(String maker, String pno) {
		super(maker,pno);
		resvDate = null;
	}
	
	public void record() {
		System.out.println(super.getPno() + "BD録画！");
	}
	public void reserv( Date resvDate ) {
		System.out.println(super.getPno() + "BD録画予約！：" + resvDate);
		this.resvDate = resvDate;
	}
	public Date getResvDate() {
		return this.resvDate;
	}
	
}
