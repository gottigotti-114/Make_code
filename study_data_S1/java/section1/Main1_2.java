/*
 * Main クラス
 */
public class Main1_2{
    public static void main(String[] args){
        System.out.println("菅原拓真です");
        System.out.println("31歳です");
        System.out.println("お酒が好きです");
        System.out.println("31+31の計算をします");
        System.out.println(31+31);
        System.out.println(35-10);
        System.out.println(-5*2);
        System.out.println(6*6*3.14);
        System.out.println("答えは"+64);
        System.out.print("数値を入力してください>>");
        int x = new java.util.Scanner(System.in).nextInt();
        System.out.println(x * x * 3.14);

        int[] a = new int[12];
        int i = 0;
        while(i<12){
            a[i] = new java.util.Scanner(System.in).nextInt();
            i++;
        }
        System.out.println(a[4]);

        //単一行コメント
        /*複数行
         * コメント
         */
    }
}