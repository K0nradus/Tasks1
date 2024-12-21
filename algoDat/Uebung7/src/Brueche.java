public class Brueche implements Comparable<Brueche> {

    private int x;
    private int y;

    public Brueche(int zaehler, int nenner) {
        if (nenner == 0){
            throw new IllegalArgumentException("Stop dividing by zero moron!");
        }
        x = zaehler;
        y = nenner;
    }


    public int compareTo(Brueche bruchToCompare){
        if (((double)x/(double)y) > ((double) bruchToCompare.x/ (double)bruchToCompare.y)){
            return 1;
        } else if (((double)x/(double)y) == ((double) bruchToCompare.x/ (double)bruchToCompare.y)) {
            return 0;
        }
        else {
            return -1;
        }
    }

    public double getDecimalNumber(){
        return (double) x / (double) y;
    }
    public void add(Brueche bruchToBeAdded) {
        if (y == bruchToBeAdded.y) {
            x += bruchToBeAdded.x;
            if (ggt(x, y) > 1) {
                int ggt = ggt(x, y);
                x /= ggt;
                y /= ggt;
            }
        } else {
            int temp = y;
            y *= bruchToBeAdded.y;
            x *= bruchToBeAdded.y;
            bruchToBeAdded.erweitern(temp);
            x += bruchToBeAdded.x;
            if (ggt(x, y) > 1) {  //kürzen
                int ggt = ggt(x, y);
                x /= ggt;
                y /= ggt;
            }
        }
    }

    public  String getBruch() {
        String a = String.valueOf(x);
        String b = String.valueOf(y);
        String c = a + "/" + b;
        return c;
    }

    public Brueche e(int n) {
        Brueche e = new Brueche(1, 1);
        for (int i = 0; i < n; i++) {
            Brueche h = new Brueche(1, fk(i));
            e.add(h);
        }
        return e;
    }

    private int fk(int n) {
        if (n == 0) {
            return 1;
        } else {
            return n * fk(n - 1);
        }
    }

    private void erweitern(int erweiterer) {
        x *= erweiterer;
        y *= erweiterer;
    }

    private int ggt(int a, int b) {
        if (b > a) return (ggt(b, a));
        else return ((b == 0) ? a : ggt(b, a % b));
    }
}