#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "tests.h"

#define TEST 0


int main(int argc, char** argv){
	if (TEST) {
	//run tests
	//contained in seperate file
		runTests();
	}
	else{
		int number1;
		int number2;
		int operation;
		int * number2address;
		scanf("%d", &operation);
		switch(operation){
			case  1:
				number2address = & number2;
				number1 = getTwoNumbers(number2address);
				add(number1, number2);
				break;
			default:
				//error message
				printf("try again with valid input");
				//end program or loop

		}//end switch
	}//end if/else


}//end main
