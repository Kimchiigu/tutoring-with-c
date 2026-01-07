#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	
	int i = low - 1;
	
	for(int j = low; j <= high - 1; j++){
		if(arr[j] < pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	
	swap(&arr[i+1], &arr[high]);
	return i+1;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
		int pi = partition(arr, low, high);
		
		// 1 2 3 4 5
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
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
	
	quickSort(arr, 0, n-1);
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
