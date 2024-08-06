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
        int count = 0;
        int[] array = new int[26];
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
        for (int i = 0; i < array.length; i++) {
            array[i] = 0;
        }
        for (int i = 0; i < text.length(); i++) {
            for (int j = 0; j < text.length(); j++) {
                if (gross(text.charAt(i)) == gross(text.charAt(j))) {
                    count++;
                    array[(int) gross(text.charAt(i)) - offset] = count;
                }
            }
            count = 0;
        }
        for (int i = 0; i < array.length; i++) {
            if (array[i] != 0) {
                System.out.print((char) (i + offset) + ":" + array[i] + " ");
            }
        }
    }
}
