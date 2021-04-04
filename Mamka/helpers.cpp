#include <iostream>
#include "helpers.h"
#include <time.h>

int randomNumber() {
	srand(time(0));
	return rand() % 9;
}

bool massiveExist(int source[], int digit) {
	int length = sizeof(source) / sizeof(*source);
	
	for(int i = 0; i <= length; i++) {
		if (digit == source[i]) {
			return true;
		}
	}
	return false;
}
