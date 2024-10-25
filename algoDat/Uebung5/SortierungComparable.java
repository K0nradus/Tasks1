import java.util.Arrays;
public class SortierungComparable{

    public static void mergesort(Comparable[] arrayToBeSorted) {
        if (arrayToBeSorted.length <= 1 ){
            return;
        }
        int midpoint = arrayToBeSorted.length/2;
        Comparable[] firstHalf = Arrays.copyOfRange(arrayToBeSorted,0,midpoint);
        Comparable[] secHalf = Arrays.copyOfRange(arrayToBeSorted,midpoint,arrayToBeSorted.length);
        mergesort(firstHalf);
        mergesort(secHalf);
        merge(firstHalf,secHalf,arrayToBeSorted);
    }

    public static void merge(Comparable[] firstArrayToMerge, Comparable[] secArrayToMerge, Comparable[] originalArray){
        int firstHalf = firstArrayToMerge.length;
        int secHalf = secArrayToMerge.length;
        int i = 0, j = 0, k = 0;

        while (i < firstHalf && j < secHalf){
            if (firstArrayToMerge[i].compareTo(secArrayToMerge[j]) <= 0){
                originalArray[k] = firstArrayToMerge[i];
                i++;
            }
            else{
                originalArray[k] = secArrayToMerge[j];
                j++;
            }
            k++;
        }
        while (i < firstHalf){
            originalArray[k] = firstArrayToMerge[i];
            i++;
            k++;
        }
        while (j < secHalf){
            originalArray[k] = secArrayToMerge[j];
            j++;
            k++;
        }
    }
}





