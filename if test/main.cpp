#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string age;
	cout << "Enter ur age : "<< endl;
 cin >> age;
 /*int convAge = stoi(age);
 	if (convAge >= 18 && convAge < 35) {
 	cout << "U are grown bondit!";
 } else if (convAge <18){ 
 	cout << "U are too newfag bondit!";
} else if (convAge > 35) {
	cout << "You are too old";
 } */
 	string capital;
 	cout << "Enter capital : "<<endl;
 	cin >> capital;
 	if ( capital == "Moscow" ) {
 		cout << "Russia";
 }
 	if ( capital == "Washington" ) {
 		cout << "OMERIKA";
	 }
	 if ( capital == "Oslo" ) {
	 	cout << "Norway";
	 }
	 if ( capital == "Omsk" ) {
	 	cout << "SIBIR";
	 }
	return 0;
}
