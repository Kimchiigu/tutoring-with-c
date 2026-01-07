#include<stdio.h>

int interpolationSearch(int arr[], int key, int n){
    int min = 0;
    int max = n-1;
    int mid;

    while(arr[min] < key && arr[max] > key){
        mid = min + ((key - arr[min]) * (max - min)) / (arr[max] - arr[min]);
        
        if(key == arr[mid]){
            return mid;
        } else if(key > arr[mid]){
            min = mid + 1;
        } else {
            max = min - 1;
        }
    }

    if(arr[min] == key){
        return min;
    } else if(arr[max] == key){
        return max;
    }

    return -1;
}

int main(){
    int arr[] = {1,2,5,7,9,19,23,25,30};
    int key = 19;
    int n = sizeof(arr)/sizeof(arr[0]);

    // disini result akan print ketemu di index keberapa
    int result = interpolationSearch(arr, key, n);
    printf("%d found in %d\n", key, result);

    return 0;
}