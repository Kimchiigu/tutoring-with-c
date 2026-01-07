#include <stdio.h>

int binarySearch(const int arr[], int key, int low, int high){
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(key == arr[mid]){
            return mid;
        } else if(key > arr[mid]){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int n, target;
    int arr[100000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);

    int resultIndex = binarySearch(arr, target, 0, n - 1);

    if (resultIndex == -1){
        printf("Tidak Ditemukan\n");
    } else {
        printf("%d ditemukan di %d\n", target, resultIndex);
    }

    return 0;
}
