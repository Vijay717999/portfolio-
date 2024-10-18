#include<stdio.h>
int main(){
	int number, temporary, remainder, sum=0;
	printf("Enter a number:");
	scanf("%d",&number);
	temporary=number;
	while(number>0){
		remainder=number%10;
		sum=sum*10+remainder;
		number=number/10;
	}
	if(temporary==sum){
		printf("Palindrome number");
	}
	else{
		printf("not palindrome");
	}
}