import java.util.*;

public class PowerFunctions {

    private static Counter countPower = new Counter();
    private static Counter countFastPower = new Counter();

    public static double power(double x, int n) {
        double temp = x;
        for (; n > 1; n--) {
            temp = temp * x;
            countPower.increment();
        }
        return temp;
    }

    public static double fastPower(double x, int n) {
        String binaryExponent = Integer.toBinaryString(n);
        double result = 1;
        for (int i = 0; i < binaryExponent.length(); i++) {
            result = result * result;
            countFastPower.increment();
            if (binaryExponent.charAt(i) == '1') {
                result = result * x;
                countFastPower.increment();
            }
        }
        return result;
    }

    public static void main(String[] args) {
        double x = 2;
        int n = 5;
        double y = PowerFunctions.power(x, n);
        double z = PowerFunctions.fastPower(x, n);
        System.out.println(y);
        System.out.println(countPower.get());
        System.out.println(z);
        System.out.println(countFastPower.get());
    }
}
