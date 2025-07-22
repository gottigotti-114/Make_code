package review.rv4;
/*
 * ホテルクラス
 */
public class Hotel {
	private String name;	//ホテル名
	private int capacity;	//最大収容者数
	private int number;	//宿泊者数
	private Guest[] guests;	//宿泊者インスタンス配列
	//コンストラクタ
	public Hotel(String name, int capacity ) {
		this.name = name;			//ホテル名を格納
		this.capacity = capacity;	//最大収容者数を格納
		this.number = 0;			//宿泊者数に0を格納
		this.guests = new Guest[ capacity ];	//最大収容者数分の要素を持つGuest型配列を生成し
												//てその参照を宿泊者インスタンス配列に格納
	}
	//ゲッター
	public String getName() {
		return name;
	}
	public int getCapacity() {
		return capacity;
	}
	public int getNumber() {
		return number;
	}
	public Guest[] getGuests() {	//同じ値を持つGuestｲﾝｽﾀﾝｽを新たに生成し新しい配列に入れてその参照を返す
		Guest[] g = new Guest[ capacity ];	//★追加
		for( int i=0 ; i<number ; i++ ) { g[i] = new Guest( guests[i] ); }	//★追加
		return g;
	}
	//セッター
	public void setName( String name ) {
		this.name = name;
	}
	public void setCapacity( int capacity ) {
		this.capacity = capacity;
	}
	public void setNumber( int number ) {
		this.number = number;
	}
	public void setGuests( Guest[] guests ) {
		this.guests = guests;
	}
	//宿泊者追加
	public void addGuest( Guest guest ) {
		if(number >= capacity) {
			return;
		}
		Guest g = new Guest( guest );	
		this.guests[ number ] = g;	//宿泊者を配列に追加
		number++;	//宿泊者数をカウントアップ
		g.setNo( "G-" + String.format( "%03d" , number ) );	//宿泊者番号を設定
	}
	
}
