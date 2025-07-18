package problem3;

import java.util.Date;

public class DVDPlayerRecorder extends DVDPlayer implements Recorder {
	private Date resvDate; //予約日時
	
	public DVDPlayerRecorder(String maker, String pno) {
		super(maker,pno);
		resvDate = null;
	}
	
	public void record() {
		System.out.println(super.getPno() + "DVD録画！");
	}
	public void reserv( Date resvDate ) {
		System.out.println(super.getPno() + "DVD録画予約！：" + this.resvDate);
	}
	public Date getResvDate() {
		return this.resvDate;
	}
	
}
