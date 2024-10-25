import java.util.Arrays;

public class Sortierung {

    public static void mergesort(Integer[] arrayToBeSorted) {
       if (arrayToBeSorted.length <= 1 ){
           return;
       }
           int midpoint = arrayToBeSorted.length/2;
            Integer[] firstHalf = Arrays.copyOfRange(arrayToBeSorted,0,midpoint);
            Integer[] secHalf = Arrays.copyOfRange(arrayToBeSorted,midpoint,arrayToBeSorted.length);
            mergesort(firstHalf);
            mergesort(secHalf);
            merge(firstHalf,secHalf,arrayToBeSorted);
    }

    public static void merge(Integer[] firstArrayToMerge, Integer[] secArrayToMerge, Integer[] originalArray){
        int firstHalf = firstArrayToMerge.length;
        int secHalf = secArrayToMerge.length;
        int i = 0, j = 0, k = 0;

        while (i < firstHalf && j < secHalf){
            if (firstArrayToMerge[i] <= secArrayToMerge[j]){
                originalArray[k] = firstArrayToMerge[i];
                i++;
            }
            else {
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




