public class Main2_3{
    public static void main(String[] args){
        System.out.println("ようこそ占いの館へ");

        System.out.print("あなたの名前を入力してください>");
        String name = new java.util.Scanner(System.in).nextLine;

        System.out.print("あなたの年齢を入力してください>");
        String ageString = new java.util.Scanner(System.in).nextLine;

        int age = (int)ageString;
        
        //乱数生成
        int fortune = new java.util.Random().nextInt(3);
        fortune++;

        System.out.println("占いの結果が出ました!");
        System.out.println(age + "歳の" + name + "さん、あなたの運記番号は" + fortune + "です");
        System.out.p
    }
}