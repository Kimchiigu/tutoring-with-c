#include<stdio.h>

int linearSearch(int arr[], int key, int n){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,6,8,2,3,5};
    int key = 2;
    int n = sizeof(arr)/sizeof(arr[0]);

    // disini result akan print ketemu di index keberapa
    int result = linearSearch(arr, key, n);
    printf("%d\n", result);

    return 0;
}