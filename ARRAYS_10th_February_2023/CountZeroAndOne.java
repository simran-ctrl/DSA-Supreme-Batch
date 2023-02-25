package ARRAYS_10th_February_2023;

/**
 * @author atulanand1811
 */
public class CountZeroAndOne{

    public static void main(String[] args) {
        int arr[] = {0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0};
        int n = arr.length;
    
        int numZero = 0, numOne = 0;
    
        for(int i = 0; i < n; i++) {
            if(arr[i] == 0) {
                numZero++;
            }
            if(arr[i] == 1) {
                numOne++;
            }
        }
        System.out.println("Number of 0's are:"+ numZero+"\nNumber of 1's are: "+ numOne);
    }
}