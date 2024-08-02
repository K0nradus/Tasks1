public class bruecheTest {

    public static void main(String[] args) {
        brueche x = new brueche(1, 2);
        brueche y = new brueche(1, 2);
        y.add(x);
        System.out.print("y = ");
        y.get();
    }
}
