package problem3;

public class CDPlayer extends Player{
	
	//コンストラクタ
	public CDPlayer(String maker, String pno) {
		super(maker,pno);
	}
	
	//オーバーライドメソッド
	public void play() {
		System.out.println(super.getPno() + "CD再生！");
	}
	public void stop() {
		System.out.println(super.getPno() + "CD再生停止！");
	}
	public void next() {
		System.out.println(super.getPno() + "CD次へ！");
	}
	public void prev() {
		System.out.println(super.getPno() + "CD前へ！");
	}
}
