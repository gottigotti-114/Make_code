package problem4.review.rv4;

public class TestHotel {
	public static void main( String[] args ) {
		Guest[] guests = {
			new Guest("松井秀喜"),
			new Guest("鈴木一郎"),
			new Guest("黒田浩紀")
		};
		
		Hotel h1 = new Hotel("出雲東急ホテル",300);
		
		for( Guest g : guests ) {
			h1.addGuest(g);
		}
		
		Guest[] guests_output = h1.getGuests();
		
		System.out.println("●ホテルの名前：" + h1.getName());
		System.out.println("取得した宿泊者情報");
		
		for( int i=0; i < h1.getCapacity(); i++) {
			System.out.println( guests_output[i].toString());
		}
		
	}
}
