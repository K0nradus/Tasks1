public class brueche {

    private int x;
    private int y;

    public brueche(int zaehler, int nenner) {
        x = zaehler;
        y = nenner;
    }

    public void add(brueche bruchToBeAdded) {
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
            if (ggt(x, y) > 1) {
                int ggt = ggt(x, y);
                x /= ggt;
                y /= ggt;
            }
        }
    }

    public String get() {
        String a = String.valueOf(x);
        String b = String.valueOf(y);
        String c = a + "/" + b;
        return c;
    }

    public brueche e(int n) {
        brueche e = new brueche(1, 1);
        for (int i = 0; i < n; i++) {
            brueche h = new brueche(1, fk(i));
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
