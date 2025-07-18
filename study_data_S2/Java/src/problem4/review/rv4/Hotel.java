package problem4.review.rv4;

public class Hotel {
	private String name; //ホテル名
	private int capacity; //最大収容者数
	private int number; //宿泊者数
	private Guest[] guests; //宿泊者
	
	//コンストラクタ
	public Hotel( String name, int capacity) {
		this.name = name;
		this.capacity = capacity;
		this.number = 0;
		this.guests = new Guest[this.capacity];
	}
	
	//メソッド一覧
	
	//ゲッター
	public void setName( String name) {
		this.name = name;
	}
	public void setCapacity( int capacity ) {
		this.capacity = capacity;
	}
	public void setNumber( int number ) {
		this.number = number;
	}
	public void setGuests( Guest[] guests) {
		this.guests = guests;
	}
	
	//ゲッター
	public String getName() {
		return this.name;
	}
	public int getCapacity() {
		return this.capacity;
	}
	public int getNumber() {
		return this.number;
	}
	public Guest[] getGuests() {
		return this.guests;
	}
	
	//メソッド
	public void addGuest(Guest guest) {
		//空のある要素を求める
		int i;
		for(i=0; i<this.guests.length; i++) {
			if (guests[i] == null) {
				break;
			} 
		}
		
		//代入処理
		String no = "G-" + String.format("%03d",i+1);
		guest.setNo(no);
		this.guests[i] = guest;
	}
	
}
