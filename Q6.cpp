#include<stdio.h>
int main(){
	int marks;
	printf("Enter your Marks : ");
	scanf("%d",&marks);
	if(marks>=0 && marks<=100){
	switch(marks/10){
		case 10:
			printf("\n You Secured Full Marks");
			printf("\n Your Grade is A");
			break;
		case 9:
			printf("\n Your Grade is A");
			break;
		case 8:
			printf("\n Your Grade is B");
			break;
		case 7:
			printf("\n Your Grade is C");
			break;
		case 6 :
			printf("\n Your Grade is D");
			break;
		default :
			printf("\n Your Grade is F");
	}
}
	else{
		printf("\n You Entered Invalid Marks");
	}
return 0;
}

