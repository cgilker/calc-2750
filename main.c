#include <stdio.h>
#include <stdlib.h>
#include <operations.h>
#include <tests.h>

#define TEST 0


int main(int argc, char** argv){
	if (TEST) {
	//run tests
	//contained in seperate file

	}
	else{
		int operation;
		scanf("%d", &operation);
		switch(operation){
			case  1:
				getTwoNumbers();
				add(num1, num2);
				break;
			default:
				//error message
				printf("try again with valid input");
				//end program or loop

		}
	}


}
