package review.rv4;

/*
 * ホテルクラスおよび宿泊客クラス テストプログラム
 */
public class TestHotel {

	public static void main(String[] args) {
		Hotel hotel = new Hotel("出雲東急ホテル",500);
		Guest[] guests = {
				new Guest("松井秀喜"),
				new Guest("鈴木一郎"),
				new Guest("黒田博樹"),
				new Guest("野茂英雄"),	
		};		
		for( Guest g : guests ) {
			hotel.addGuest(g);	//ホテルに宿泊客を追加する
		}
		Guest[] guests2 = hotel.getGuests();	//全宿泊客の情報を取得する
		System.out.println("●ホテルの名前："+hotel.getName());
		System.out.println("●取得した宿泊者情報");
		for( int i =0 ; i< hotel.getNumber(); i++) {
			System.out.println( guests2[i] );	//宿泊客の情報を表示する
		}
	}

}
