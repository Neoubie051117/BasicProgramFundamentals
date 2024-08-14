public class variables {
    public static void main(String[] args) {
        /*Variable is a type of expression, 
         *declaration that can be assigned to store data
         */

        String word;    //>word< variable must be declared using dataType (String, int, bool, double, float, Char)
        word = "apple"; //>word< variable can be assigned to a value or expression


        String sentence = "This is a sentence"; //>sentence< variable with dataType of String has assigned with a "This is a sentence"
        int number = 1;             //int dataType stores integer / whoadle number
        double days = 365.25;       //double dataType stores decimal number
        float pi = 3.14f;           //float dataType stores decimal number lesser than a double dataType 
        boolean switchKey = true;   //boolean dataType only takes values true or false

        System.out.println("The variable word = " + word);
        System.out.println("String sentence = " + sentence);
        System.out.println("Integer with a variable number = " + number);
        System.out.println("Double has days variable = " + days); 
        System.out.println("Float pi variable = " + pi);
        System.out.println("Boolean with a variable switchKey = " + switchKey);
    }
}
