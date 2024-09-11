#include<stdio.h>
int main(){
    int income;
    float tax = 0, net;
    printf("Enter Your Income: ");
    scanf("%d", &income);
	if(income <= 250000){
        printf("Your Income tax is Zero.\n");
        printf("Your Net Income is %d \n", income);
    }
    else if(income >= 250001 && income <= 500000){
        tax = income * 0.05;
        net = income - tax;
        printf("Your Income Before tax is %d \n", income);
        printf("The Tax is %.2f \n", tax);
        printf("Your Net Income is %.2f \n", net);
    }
    else if(income >= 500001 && income <= 1000000){
        tax = income * 0.2;
        net = income - tax;
        printf("Your Income Before tax is %d \n",income);
        printf("The Tax is %.2f \n", tax);
        printf("Your Net Income is %.2f \n",net);
    }
    else if(income > 1000000){
        tax = income * 0.3;
        net = income - tax;
        printf("Your Income Before tax is %d \n ",income);
        printf("The Tax is %.2f \n", tax);
        printf("Your Net Income is %.2f \n",net);
    }
	else{
		printf("Invalid Input");
	}
    return 0;
}
