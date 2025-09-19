package problem3;

public class PlayerRecorderTester {
	
	public static void main( String[] args ) {
		
		Recorder[] rc = new Recorder[2];
		
		rc[0] = new DVDPlayerRecorder("Vanasonic","DVPR-V001");
		 rc[1] = new BDPlayerRecorder("Ranasonic","BDPR-R001");
		 for(int i=0;i<rc.length ; i++ ) {
			 PlayerRecorderController rcon = new PlayerRecorderController( rc[i] );
			 rcon.run();
			 //レコーダーの操作を実行
		 }
	}
}
