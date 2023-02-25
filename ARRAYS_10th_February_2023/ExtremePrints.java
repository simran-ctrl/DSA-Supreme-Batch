package ARRAYS_10th_February_2023;

/**
 * @author atulanand1811
 */
public class ExtremePrints {
    public static void main(String[] args) {
        int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
        int n = arr.length;
        System.out.println("Original Array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.err.println();
        int i=0;
        int j = n-1;
        while(i<=j){
            if(i==j)
                System.out.println(arr[i]+" ");
            else
                System.out.println(arr[i]+" "+arr[j]+" ");
            i++;
            j--;
        }

    }
}
