public class Main2_4{
    public static void main(String[] args){
        //テキストブロックの記述１
        String text = "これは複数行の\n"+
                            "テキストでございます";
        System.out.println(text);

        //テキストブロックの記述２
        String text2 = """
                                これは複数行の
                                テキストでございます
                                """;
        System.out.println(text2);
    }
}