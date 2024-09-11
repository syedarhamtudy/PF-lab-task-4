#include<stdio.h>
int main(){
	int num1,num2,choice;
	printf("Enter the First Number : - \n");
	scanf("%d",&num1);
	printf("Enter the Second Number :- \n");
	scanf("%d",&num2);
	printf("Select The Following Operations (1-4)\n");
	printf("\n (1)Addition \n (2)Subtraction \n (3)Division \n (4)Multiplication \n\n");
	scanf("\n %d",&choice);
	switch(choice){
		case 1:
			printf("\n %d + %d = %d",num1,num2,num1 + num2);
			break;
		case 2:
			printf("\n %d - %d = %d",num1,num2,num1 - num2);
			break;
		case 3:
			printf("\n %d / %d = %d",num1,num2,num1 / num2);
			break;
		case 4:
			printf("\n d * %d = %d",num1,num2,num1 * num2);
			break;
		default:
			printf("\n You Entered Wrong Option");
	}
	return 0;
}
