#include<stdio.h>
int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d",&number);
    if(number>=1 && number<=9){
        switch(number){
            case 1 :
            printf("one");
            break;
            case 2 :
            printf("two");
            break;
            case 3 :
            printf("three");
            break;
            case 4 :
            printf("four");
            break;
            case 5 :
            printf("five");
            break;
            case 6 :
            printf("six");
            break;
            case 7 :
            printf("seven");
            break;
            case 8 :
            printf("eight");
            break;
            case 9 :
            printf("nine");
            break;
        }
    }
    else if(number>9){
        printf("Greator Than 9");
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}