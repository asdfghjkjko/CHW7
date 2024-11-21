#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; 
    }

    int mid = low + (high - low) / 2; 

    if (arr[mid] == key) {
        return mid; 
    }
    else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key); 
    }
    else {
        return binarySearch(arr, mid + 1, high, key); 
    }
}

int main() {
    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 }; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter a number to search: ");
    scanf_s("%d", &key);

    int result = binarySearch(arr, 0, size - 1, key);

    if (result != -1) {
        printf("Found %d at index %d.\n", key, result);
    }
    else {
        printf("Value %d not found in the array.\n", key);
    }

    return 0;
}
