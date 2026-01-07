#include<stdio.h>

int recursion(int N){
	// base case
	if(N <= 0){
		return 0;
	}
	
	// aturan ketika N ganjil
	if(N % 2 != 0){
		return N + recursion(N-1);
	} // aturan ketika N genap 
	else {
		return recursion(N/2);
	}
}

int main(){
	int N;
	scanf("%d", &N); getchar();
	
	int hasil = recursion(N);
	printf("%d\n", hasil);
	
	return 0;
}
