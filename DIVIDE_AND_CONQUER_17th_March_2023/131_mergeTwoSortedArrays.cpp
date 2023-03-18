// /* Merge Two Sorted Arrays Using Third Temporary Array */
// #include <bits/stdc++.h>
// using namespace std;

// void mergeArrays(int arr1[], int n1, int arr2[], int n2) {
//     int newLen = n1 + n2;
//     int *temp = new int[newLen];
    
//     int firstIndex = 0;
//     int secondIndex = 0;
//     int mainIndex = 0;

//     while(firstIndex < n1 && secondIndex < n2) {
//         if(arr1[firstIndex] < arr2[secondIndex]) {
//             temp[mainIndex] = arr1[firstIndex];
//             mainIndex++;
//             firstIndex++;
//         }
//         else {
//             temp[mainIndex] = arr2[secondIndex];
//             mainIndex++;
//             secondIndex++;
//         }
//     }

//     while(firstIndex < n1) {
//         temp[mainIndex] = arr1[firstIndex];
//         mainIndex++;
//         firstIndex++;
//     }

//     while(secondIndex < n2) {
//         temp[mainIndex] = arr2[secondIndex];
//         mainIndex++;
//         secondIndex++;
//     }

//     cout << "\nAfter merging both the arrays & sort them: ";
//     for(int i = 0; i < newLen; i++) {
//         cout << temp[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[] = {3, 4, 9, 12, 14, 18, 21};
//     int n1 = 7;
//     int arr2[] = {1, 5, 11, 13, 16, 20};
//     int n2 = 6;

//     cout << "\nFirst array: ";
//     for(int i= 0; i < n1; i++) {
//         cout << arr1[i] << " ";
//     }

//     cout << endl;

//     cout << "\nSecond Array: ";
//     for(int i = 0; i < n2; i++) {
//         cout << arr2[i] << " ";
//     }

//     cout << endl;

//     mergeArrays(arr1, n1, arr2, n2);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n) {
    int *temp = new int[m];
    int firstIndex = 0; // temp
    int secondIndex = 0; // nums2
    int mainIndex = 0; // nums1

    for(int i = 0; i < m; i++) {
        temp[i] = nums1[i];
    }

    while(firstIndex < m && secondIndex < n) {
        if(temp[firstIndex] < nums2[secondIndex]) {
            nums1[mainIndex++] = temp[firstIndex++];
        }
        else {
            nums1[mainIndex++] = nums2[secondIndex++];
        }
    }

    while(firstIndex < m) {
        nums1[mainIndex++] = temp[firstIndex++];
    }

    while(secondIndex < n) {
        nums1[mainIndex++] = nums2[secondIndex++];
    }

    cout << "\nNums1 array: ";
    for(int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
}

int main() {
    int nums1[] = {2, 0};
    int m = 1;
    int nums2[] = {1};
    int n = 1;

    merge(nums1, m, nums2, n);
    return 0;
}