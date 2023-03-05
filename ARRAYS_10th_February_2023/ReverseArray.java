package ARRAYS_10th_February_2023;

/**
 * @author atulanand1811
 */
public class ReverseArray {
    public static void main(String[] args) {
        int arr[] = {10, 20, 30, 40, 50, 60};

        System.out.println("Array before reversing");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        System.out.println("After reversing the array");
        int i = 0, j = arr.length -1;
        while(i<=j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }

        for (int j2 = 0; j2 < arr.length; j2++) {
            System.out.print(arr[j2]+" ");
        }
    }
}
