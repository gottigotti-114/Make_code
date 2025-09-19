package problem3;

import java.util.Scanner;
//再生専用機を操作するクラス
public class PlayerController {
	private Player player;
	//コンストラクタ
	//操作するプレーヤーのインスタンス
	public PlayerController( Player player ) {
		this.player = player;
	}
	//操作実行
	public void run() {
		int no ; //選択項目番号
		Scanner stdIn = new Scanner(System.in);
		System.out.println("製品情報："+player.getInfo());
		while(true){
			//ループ
			System.out.println("\n1:再生、2:停止、3:次へ、4:前へ、9:終了　=>");
			no = stdIn.nextInt();
			if (no==1){
				//再生
				this.player.play();
			}else if (no==2){ //停止
				this.player.stop();
			}else if (no==3){ //次へ
				this.player.next();
			}else if (no==4){ //前へ
				this.player.prev();
			}else if (no==9){ //終了
				System.out.println("操作終了!\n");
				break;
			}else {
				System.out.println("操作無効");
			}
		}
	}
}
