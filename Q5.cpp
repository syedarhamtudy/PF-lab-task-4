#include<stdio.h>
int main(){
	int year;
	printf("Enter the year :-");
	scanf("%d",&year);
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		printf("The Year is Leap");
	}
	else{
		printf("The Year is Not Leap");
	}
	return 0;
}
