package problem3;

import java.util.Date;
import java.util.Scanner;

public class PlayerRecorderController {

	//操作するレコーダーのインスタンス
	private Recorder recorder;
	
	//コンストラクタ
	public PlayerRecorderController( Recorder recorder ) {
		this.recorder = recorder;
	}
	
	//操作実行
	public void run() {
		Scanner stdIn = new Scanner(System.in);
		int no; //選択項目番号
		
		System.out.println("製品情報" +((Player)(this.recorder)).getInfo());
		
		 while(true){
			 //ループ
			 System.out.println("\n1:再生、2:停止、3:次へ、4:前へ、5.REC、6.REC予約、7.予約確認、9:終了　=>");
			 no = stdIn.nextInt();
			//再生
			 if(no==1) {
				 ((Player)recorder).play();
			 }else if (no==2){ //停止
				 ((Player)recorder).stop();
			 }else if (no==3){ //次へ
				 ((Player)recorder).next();
			 }else if (no==4){ //前へ
				 ((Player)recorder).prev();
			 }else if (no==5){ //REC
				 recorder.record();
			 }else if (no==6){ //REC予約
				 recorder.reserv(new Date(201,01,01));
			 }else if (no==7){ //予約確認
				 System.out.println("予約日時："+recorder.getResvDate());
			 }else if (no==9){ //終了
				 System.out.println("操作終了!\n");
				 break;
			 }else {
				 System.out.println("操作無効");
			 }
		 }
	}
 }
