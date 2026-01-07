#include<stdio.h>
#include<string.h>

int main() {
	int num1, num2;
	char operation;
	
	puts("My Calculator");
	puts("=============");
	printf("Masukkan angka pertama: ");
	scanf("%d", &num1); getchar();
	printf("Masukkan angka kedua: ");
	scanf("%d", &num2); getchar();
	printf("Masukkan operasi (+,-,*,/): ");
	scanf("%c", &operation);
	
	switch(operation){
		case '+':{
			printf("%d + %d: %d\n", num1, num2, (num1+num2));
			break;
		}
		case '-':{
			printf("%d - %d: %d\n", num1, num2, (num1-num2));
			break;
		}
		case '*':{
			printf("%d * %d: %d\n", num1, num2, (num1*num2));
			break;
		}
		case '/':{
			// mencegah runtime error pembagian dengan angka 0
			if (num2 == 0) {
				printf("%d tidak bisa dibagi 0\n", num1);
				break;
			}
			
			printf("%d / %d: %d\n", num1, num2, (num1/num2));
			break;
		}
		default:{
			printf("Invalid Operation\n");
			break;
		}
	}
 	
 	return 0;
}
