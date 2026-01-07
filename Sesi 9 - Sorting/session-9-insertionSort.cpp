#include <stdio.h>

void insertionSort(int arr[], int n){
	
	// 2,37, 1, 45, 23
	for(int i = 1; i < n; ++i){
		int key = arr[i];
		int j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}

int main(){
	int arr[] = {37,2,1,45,23};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorted array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	insertionSort(arr, n);
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
