package ARRAYS_10th_February_2023;

/**
 * @author atulanand1811
 */
public class PrintDoubleOfArray {
    public static void main(String[] args) {
        int arr[] = {1, 3, 5, 7, 9};

        System.out.println("Original Array:");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();

        System.out.println("Printing double of the array");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]*2+" ");
        }
    }
}
