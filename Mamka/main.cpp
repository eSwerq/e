#include <iostream>
using namespace std;

#include "helpers.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	cout << "Hello, guess for digits\n";
	
	int randomDigits[4];
	for(int i = 0; i < 4; i++) {
		bool alreadyExist = true;
		int currentDigit;
		
		while (alreadyExist == true) {
			currentDigit = randomNumber();
			alreadyExist = massiveExist(randomDigits, currentDigit);
		}
		randomDigits[i] = currentDigit;
		cout << currentDigit << endl;
	}
	
	bool success = false;
	while(success == false) {
		string userInput;
		cin >> userInput;
		
		int cows = 0;
		int bulls = 0;
		
		for(int i = 0; i < 4; i++) 
		{
			int converted = userInput[i] - '0';
			for (int j = 0; j < 4; j++) {
				if (converted == randomDigits[j]) {
					if (i == j) {
						bulls++;
					} else {
						cows++;
					}
				}
			}
		}
		cout << "For try : " << userInput << " Cows : " << cows << " Bulls : " << bulls << endl;
		if (bulls == 4) {
			cout << "WIN";
			success = true;
		}
	}
	
	return 0;
}
