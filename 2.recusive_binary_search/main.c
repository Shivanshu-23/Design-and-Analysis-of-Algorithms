#include <stdio.h>
int binary_search(int arr[], int low, int high, int key) {
    int mid = (low + high) / 2;
    while (low <= high) {
        if (key == arr[mid]) {
            return mid;
        }
        if (key < arr[mid]) {
            return binary_search(arr, low, mid - 1, key);
        } else {
            return binary_search(arr, mid + 1, high, key);
        }
    }  
    return -1;
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int t;
    t = binary_search(arr, 0, 4, 4); 
    printf("%d\n", t);
    return 0;
}

