#include<stdio.h>
int main(){
	char character;
	printf("Enter the character :-");
	scanf("%c",&character);
	if(character=='a' || character == 'A'){
		printf("The Character is Vowel");
	}
	else if(character=='e' || character == 'E'){
		printf("The Character is Vowel");
	}
	else if(character=='i' || character == 'I'){
		printf("The Character is Vowel");
	}
	else if(character=='o' || character == 'O'){
		printf("The Character is Vowel");
	}
	else if(character=='u' || character == 'U'){
		printf("The Character is Vowel");
	}
	else {
		printf("The Character is a consonant");
	}
	return 0;
}
