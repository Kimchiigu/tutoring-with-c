#include <stdio.h>

//bubblesort
void bubbleSort(int arr[], int n){
	int swapped;
	for(int i = 0; i < n - 1; i++){
		swapped = 0;
		for(int j = 0; j < n - 1 - i; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
				swapped = 1;
			}
		}
		if(!swapped){
			break;
		}
	}
}

int main(){
	// 1 2 3 4 5
	int arr[] = {37,2,1,45,23};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	printf("Unsorted array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	bubbleSort(arr, n);
	printf("Sorted array:\n");
	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
