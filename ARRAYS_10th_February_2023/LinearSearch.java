package ARRAYS_10th_February_2023;

/**
 * @author atulanand1811
 */
public class LinearSearch {
    public static void main(String[] args) {
        int arr[] = {15, 58, 22, 10, 6, 69, 36, 47};
        int key = 69;
        int flags = 0;
        for (int i = 0; i < arr.length; i++) {
            int search = arr[i];
            if (search == key){
                System.out.println(key+" is present at index "+i);
                flags = 1;
                break;
            }
        }
        if(flags == 0){
            System.out.println(key+" is not present in the array");
        }
    }
}
