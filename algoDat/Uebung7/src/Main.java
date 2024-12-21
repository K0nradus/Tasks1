public class Main {
    public static void main(String[] args) {
        MyList<Brueche> listBrueche = new MyList<>();
        listBrueche.addNode(new Brueche(1, 2));
        listBrueche.addNode(new Brueche(2, 3));
        listBrueche.addNode(new Brueche(3, 4));
        for(int i = 0; i < listBrueche.getSize(); i++) {
            Brueche v = listBrueche.getValue(i);
            System.out.print(" " +  v.getBruch());
        }

        // Print the list
        // Output: 1/2 -> 3/4 -> 5/6 -> null
    }
}