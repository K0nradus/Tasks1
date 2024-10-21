public class PowerFunctionsTest {

    public static double avg(int sum, int total) {
        return (double) sum / (double) total;
    }

    public static void main(String[] args) {
        int totalLoops;
        int sumExponents = 0;
        for (totalLoops = 0; totalLoops < 10000; totalLoops++) {
            double randomArgument = Math.random();
            int randomExponent = (int) (1000 * randomArgument);
            PowerFunctions.power(randomArgument, randomExponent);
            sumExponents += randomExponent;
            PowerFunctions.fastPower(randomArgument, randomExponent);
        }
        System.out.println(
            "average exponent power = " + avg(sumExponents, totalLoops)
        );
        System.out.println(
            "average multiplications power = " +
            avg(PowerFunctions.getCountPower(), totalLoops)
        );
        System.out.println(
            "average multiplications fastPower = " +
            avg(PowerFunctions.getCountFastPower(), totalLoops)
        );
    }
}
