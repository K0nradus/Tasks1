/**
 * TextAnalyse
 */
public class TextAnalyse {

    public static char gross(char c) {
        int difference = ('a' - 'A');
        if (c >= 'a' && c <= 'z') {
            return (char) (c - difference);
        }
        return c;
    }

    public static void main(String[] args) {
        int[] alphabet = new int[26];
        int offset = (int) 'A';
        System.out.println("" + args.length + " arguments");
        for (int i = 0; i < args.length; i++) {
            System.out.println(
                "Length argument " + (i + 1) + ": " + args[i].length()
            );
        }
        String text = args[0];
        for (int i = 1; i < args.length; i++) {
            text = text + args[i];
        }
        for (int i = 0; i < alphabet.length; i++) {
            alphabet[i] = 0;
        }
        for (int i = 0; i < text.length(); i++) {
           if (gross(text.charAt(i)) >= 'A' && gross(text.charAt(i)) <= 'Z'){
               alphabet[gross(text.charAt(i)) - 'A']++;
            }
        }
        for (int i = 0; i < alphabet.length; i++) {
            if (alphabet[i] != 0) {
                System.out.print((char) (i + offset) + ":" + alphabet[i] + " ");
            }
        }
    }
}
