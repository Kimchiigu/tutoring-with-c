#include<stdio.h>

int binarySearch(int arr[], int key, int n){
    int low = 0;
    int high = n-1;
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

int main(){
    int arr[] = {1,2,5,7,9,19,23,25,30};
    int key = 19;
    int n = sizeof(arr)/sizeof(arr[0]);

    // disini result akan print ketemu di index keberapa
    int result = binarySearch(arr, key, n);
    printf("%d found in %d\n", key, result);

    return 0;
}