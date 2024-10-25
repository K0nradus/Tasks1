public class Sortierungsbeispiel {
    public static void main(String[] args) {
        Integer[] a = {15, 3, 8, 9, 20, 70, 4, 6};
        brueche[] b = new brueche[8];
        for (int i = 0; i < 8; i++){
            double help = Math.random();
            int zaehler = (int) (10*help) + 1;
            double help2 = Math.random();
            int nenner = (int) (10*help2) +1;
            brueche randomBruch = new brueche(zaehler,nenner);
            b[i] = randomBruch;
        }
        SortierungComparable.mergesort(b);
        //Sortierung.mergesort(a);
        SortierungComparable.mergesort(a);
        System.out.print("a: ");
        for (int i = 0; i < a.length; ++i) {
            System.out.print(a[i] + " ");
        }
        System.out.println();

        for (int i = 0; i < b.length;i++){
            System.out.print(b[i].getDecimalNumber()+ " " +b[i].get()+ " ");
        }
    }
    }

