public class brueche {

    private int x;
    private int y;
    private int temp;
    private int ggt;

    public brueche(int zaehler, int nenner) {
        x = zaehler;
        y = nenner;
    }

    public void add(brueche bruchToBeAdded) {
        if (y == bruchToBeAdded.y) {
            x += bruchToBeAdded.x;
            if (ggt(x, y) > 1) {
                ggt = ggt(x, y);
                x /= ggt;
                y /= ggt;
            }
        } else {
            temp = y;
            y *= bruchToBeAdded.y;
            x *= bruchToBeAdded.y;
            bruchToBeAdded.erweitern(temp);
            x += bruchToBeAdded.x;
            if (ggt(x, y) > 1) {
                ggt = ggt(x, y);
                x /= ggt;
                y /= ggt;
            }
        }
    }

    public void get() {
        System.out.print("" + x + "/" + y + " ");
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
