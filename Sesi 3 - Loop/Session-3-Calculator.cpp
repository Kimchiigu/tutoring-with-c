#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	do{
		system("cls");
		printf("Welcome to Calculator\n");
		printf("Pick an option!\n");
		printf("1. Addition\n");
		printf("2. Substraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Exit\n");
		
		int operand1;
		int operand2;
		int choice;
		printf("Enter your choice here: ");
		scanf("%d", &choice);
		getchar();
		switch(choice){
			case 1:
				printf("Enter Operand 1: ");
				scanf("%d", &operand1);
				getchar();
				printf("Enter Operand 2: ");
				scanf("%d", &operand2);
				getchar();
				printf("Result: %d\n", operand1+operand2);
				printf("Press enter to continue...");
				getchar();
				break;
			case 2:
				printf("Enter Operand 1: ");
				scanf("%d", &operand1);
				getchar();
				printf("Enter Operand 2: ");
				scanf("%d", &operand2);
				getchar();
				printf("Result: %d\n", operand1-operand2);
				printf("Press enter to continue...");
				getchar();
				break;
			case 3:
				printf("Enter Operand 1: ");
				scanf("%d", &operand1);
				getchar();
				printf("Enter Operand 2: ");
				scanf("%d", &operand2);
				getchar();
				printf("Result: %d\n", operand1*operand2);
				printf("Press enter to continue...");
				getchar();
				break;
			case 4:
				printf("Enter Operand 1: ");
				scanf("%d", &operand1);
				getchar();
				printf("Enter Operand 2: ");
				scanf("%d", &operand2);
				getchar();
				while(operand2 == 0){
					printf("Cannot divide by 0\n");
					printf("Enter Operand 2: ");
					scanf("%d", &operand2);
					getchar();
				}
				printf("Result: %d\n", operand1/operand2);
				printf("Press enter to continue...");
				getchar();
				break;
			case 5:
				return 0;
		}
	}while(true);
	
	return 0;
}


