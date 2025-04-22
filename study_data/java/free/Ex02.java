import java.io.BufferedReader;      
import java.io.FileReader;

public class Ex02{
    public static void main(String[] args){
        try{    //式の代入
            int result = 10 / 2;
            //ArithmeticExceptionは例外が発生したとき専用のエラー文字がeに代入される
        }catch (ArithmeticException e){     //その式の演算により例外が発生した場合の処理
            System.out.println("例外が発生しました：" + e.getMessage());   //e.getMessage()とは、eに入っている文字を出力する
        }finally{      //例外が発生しなかった場合の処理
            System.out.println("処理が終了しました");
        }
    }
}