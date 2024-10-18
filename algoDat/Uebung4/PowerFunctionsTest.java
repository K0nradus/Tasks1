public class PowerFunctionsTest {

    public static double avgExponent(int sumExponents, int totalExponents){
        return (double)sumExponents/(double)totalExponents;
    }

    public static double avgMultiplications(int sumMultiplications, int totalMultiplications){
        return (double)sumMultiplications/(double)totalMultiplications;
    }

    public static void main(String[] args){
        int totalLoops;
        int sumExponents = 0;
        for (totalLoops = 0; totalLoops < 10000;totalLoops++){
            double randomArgument = Math.random();
            int randomExponent = (int)(1000*randomArgument);
            PowerFunctions.power(randomArgument,randomExponent);
            sumExponents += randomExponent;
            PowerFunctions.fastPower(randomArgument,randomExponent);
        }
        System.out.println("average exponent power = "+avgExponent(sumExponents,totalLoops));
        System.out.println("average multiplications power = "+avgMultiplications(PowerFunctions.getCountPower(),totalLoops));
        System.out.println("average multiplications fastPower = "+ avgMultiplications(PowerFunctions.getCountFastPower(),totalLoops));
    }
}
