#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int runTests(){

	if ((2 == add(1,1)) && (0 == sub(1,1)) && (1 == mult(1,1)) && (1 == divide(1,1)) && 
	(0 == mod(1,1))){
		return 1;
	}
	else{
		return 0; //ie test have failed
	}


}
