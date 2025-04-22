public class Main2_15{
    public static void main(String[] args){
        int r = new java.util.Random().nextInt(90);
        System.out.println("あなたはたぶん" + r + "歳ですね？");

        int age = new java.util.Random().nextInt(90) + 101;
        System.out.println("間違えましたあなたは" + age + "歳でしたね");
    }
}