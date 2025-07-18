package problem3;

public class PlayerTester {
	public static void main(String[] args) {
		Player[] pr = new Player[3];
		
		 pr[0] = new CDPlayer("SHARK","CDP-S001");
		 pr[1] = new DVDPlayer("Vanasonic","DVP-V001");
		 pr[2] = new BDPlayer("Ranasonic","BDP-R001");
		 for(int i=0;i<pr.length ; i++ ) {
			 PlayerController pcon = new PlayerController( pr[i] );
			 pcon.run();
			 //再生専用機の操作を実行
		 }

	}
}
