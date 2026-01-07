#include<stdio.h>

int main(){
	FILE* fp = fopen("angka.txt", "r");
	
	if(fp == NULL){
		printf("Gabisa buka file\n");
		return 1;
	}
	
	int N; // jumlah elemen
	int angka;
	int total;
	
	while(fscanf(fp, "%d", &N) != EOF){
		total = 0;
		
		for(int i = 0; i < N; i++){
			fscanf(fp, "%d", &angka);
			if(angka % N == 0){
				total += angka;n
			}
		}
		
		printf("%d\n", total);
	}
	
	fclose(fp); // mencegah memory leak
	
	return 0;
}
