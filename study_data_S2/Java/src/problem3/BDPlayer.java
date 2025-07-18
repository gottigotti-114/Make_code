package problem3;

public class BDPlayer extends Player{
	
	//コンストラクタ
	public BDPlayer(String maker, String pno) {
		super(maker,pno);
	}
	
	//オーバーライドメソッド
	public void play() {
		System.out.println(super.getPno() + "BD再生！");
	}
	public void stop() {
		System.out.println(super.getPno() + "BD再生停止！");
	}
	public void next() {
		System.out.println(super.getPno() + "BD次へ！");
	}
	public void prev() {
		System.out.println(super.getPno() + "BD前へ！");
	}
}
