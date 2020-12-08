#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations.h"
#include "tests.h"

#define TEST 0


int main(int argc, char** argv){
	if (TEST) {
	//run tests
	//contained in seperate file
		if(runTests() == 0){
			printf("tests have failed");
		}
		else{
			printf("all tests successful");
		}
	}
	else{
		int number1;
		int number2;
		int operation;
		int * number2address;
		char input[20];
		printf("what operation would you like to perform? ");

		scanf("%s", input);
		//printf("%s",input); for debugging
		if (strcmp(input, "addition") == 0){
			number2address = & number2;
			number1 = getTwoNumbers(number2address);
			printf("the sum of the numberss is: %d", add(number1, number2));

		}
		else if(strcmp(input, "subtraction") == 0){
			number2address = & number2;
			number1 = getTwoNumbers(number2address);
			printf("the difference of the numbers is: %d", sub(number1, number2));
		}
		else if(strcmp(input, "multiplication") == 0){
			number2address = & number2;
			number1 = getTwoNumbers(number2address);
			printf("the product of the number is: %d", mult(number1, number2));
		}
		else if(strcmp(input, "divison") == 0){
			number2address = & number2;
			number1 = getTwoNumbers(number2address);
			printf("the quotient of the numbers is: %d", divide(number1, number2));
		}
		else if(strcmp(input, "modulation") == 0){
			number2address = & number2;
			number1 = getTwoNumbers(number2address);
			printf("the remainder of the numbers is: %d", mod(number1, number2));
		}
		else{
			//error message
			printf("try running the program again with valid input");
		}//end  "switch" statments
	}//end if/else regarding tests


}//end main


