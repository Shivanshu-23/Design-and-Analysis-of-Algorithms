#include <stdio.h>

int search(int arr[], int n, int num, int i) {
    while (i < n) {
        if (num == arr[i]) {
            return i;
        } else {
            return search(arr, n, num, i + 1);
        }
    }
    if (i >= n) {
        return -1;
    }
    return -1; 
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int t;
    t = search(arr, 5, 3, 0);
    printf("%d\n", t); 
    return 0;
}
