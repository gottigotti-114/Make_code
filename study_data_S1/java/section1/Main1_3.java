public class Main1_3{
    public static void main(String[] args){
        final double PI = 3.14; //定数の利用（定数なのでPIと大文字で書かないといけない-->定数と分かりやすくするため）
        int pie = 5;

        System.out.println("半径" + pie + "cmのパイの面積は");
        System.out.println(pie*pie*PI);
        System.out.println("パイの半径を倍にします");
        //PI = 10;
        pie *= 2;
        System.out.println("半径" + pie + "cmのパイの面積は");
        System.out.println(pie * pie * PI);
    }
}