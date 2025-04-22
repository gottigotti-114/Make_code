public class Main0_1{
    public static void main(String[] args){
        String str = "Hello";

        if(str == "Hello"){
            System.out.println("Helloでございます");
        }else{
            System.out.println("Helloではありません");
        }

        if(str.equals("Hello")){
            System.out.println("Helloでございます");
        }else{
            System.out.println("Helloではありません");
        }
    }
}