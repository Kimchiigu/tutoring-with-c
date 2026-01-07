#include <stdio.h>

void selectionSort(int arr[], int n){
	for (int i = 0; i < n - 1; i++){
		int min_idx = i;
		
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		//swap index i sama index min_idx, swap sama asumsi awal kita
		int temp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = temp;
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
	
	selectionSort(arr, n);
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
