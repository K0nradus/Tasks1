public class bruecheTest {

    public static brueche e(int n) {
        brueche e = new brueche(1, 1);
        for (int i = 0; i < n; i++) {
            brueche h = new brueche(1, fk(i + 1));
            e.add(h);
        }
        return e;
    }

    private static int fk(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * fk(n - 1);
        }
    }

    public static void main(String[] args) {
        brueche x = new brueche(1, 2);
        brueche y = new brueche(2, 3);
        brueche z = new brueche(1, 1);
        y.add(x);
        System.out.println("y = " + y.get());
        for (int i = 1; i <= 5; i++) {
            brueche a = new brueche(1, i + 1);
            z.add(a);
            System.out.println("z" + (i + 1) + " = " + z.get());
        }
        brueche e = e(7);
        System.out.println("e = " + e.get());
    }
}
