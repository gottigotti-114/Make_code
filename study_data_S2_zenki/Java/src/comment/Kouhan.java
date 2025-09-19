package comment;

public class Kouhan {

	public static void callDeae() {
		System.out.println("えぇい、こしゃくな。くせ者だ！であえい！");
	}
	
	public static void showMondokoro() throws Exception{
		System.out.println("飛車さん、角さん。もういいでしょう。");
		System.out.println("この紋所が目にはいらぬか！");
		//3秒(3000ミリ秒)停止させる
		java.lang.Thread.sleep(3000);
		comment.Zenhan.doTogame();
	}
}
