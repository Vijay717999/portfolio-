#include<stdio.h>
int main(){
	int number1, number2;
	printf("Enter a number:");
	scanf("%d%d",&number1,&number2);
	printf("Before swap number1=%d ,number2=%d\n",number1,number2);
	number1=number1+number2;
	number2=number1-number2;
	number1=number1-number2;
	printf("After swap number1=%d ,number2=%d",number1,number2);
}
	