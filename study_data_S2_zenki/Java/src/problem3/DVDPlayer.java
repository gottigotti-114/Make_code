package problem3;

public class DVDPlayer extends Player{
	//コンストラクタ
	public DVDPlayer( String maker, String pno) {
		super(maker,pno);
	}
	
	//オーバーライドメソッド
	public void play() {
		System.out.println(super.getPno() + "DVD再生！");
	}
	public void stop() {
		System.out.println(super.getPno() + "DVD再生停止！");
	}
	public void next() {
		System.out.println(super.getPno() + "DVD次へ！");		
	}
	public void prev() {
		System.out.println(super.getPno() + "DVD前へ！");
	}
}
