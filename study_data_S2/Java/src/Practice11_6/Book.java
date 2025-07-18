package Practice11_6;

public class Book extends TangibleAsset {
	String isbn;
	
	//コンストラクタ
	public Book(String name, int price, String color, double weight, String isbn) {
		super(name,price,color,weight);
		this.isbn = isbn;
	}
	
	//メソッド
	public String getIsbn() { return this.isbn; }
}
