#include <stdio.h>

int add(int a, int b){
	return a+b;
}
int sub(int a, int b){
	return a-b;
}
int divide(int a, int b){
	return a/b;
}
int mult(int a, int b){
	return a*b;
}

int mod(int a, int b){
	return a%b;
}

int getTwoNumbers(int * returnValueAddress){
	int number1, number2;
	printf("enter first number");
	scanf("%d", &number1);
	printf("enter second number");
	scanf("%d", &number2);
	
	* returnValueAddress = number1;
	return number2;

}

