package ARRAYS_10th_February_2023;

/**
 * @author atulanand1811
 */
public class MaxAndMin {
    public static void main(String[] args) {
        int arr[] = {5, 1, 7, 6, 2, 3, 9, 4, 8, 12};
        
        int max = -1000000;
        int min = 1000000;
        for (int i = 0; i < arr.length; i++) {
            int data = arr[i];
            if(data>=max){
                max = data;
            }
            if(data<=min){
                min = data;
            }
        }

        System.out.println("Max and min numbers are: " + max+ " and " + min);
    }
}
