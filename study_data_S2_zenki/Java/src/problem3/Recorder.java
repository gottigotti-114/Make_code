package problem3;

import java.util.Date;

public interface Recorder {
	
	abstract void record();
	abstract void reserv( Date resvDate);
	abstract Date getResvDate();
}
