#include <iostream>
using namespace std;

int main() {
	//Edited
	char charVariable = 'Y';

	while (toupper(charVariable) == 'Y') {
		cout << "Would you like you continue? (Y/N):" << endl;
		cin >> (charVariable);
	}
	cout << "Goodbye." << endl;

	// What I did for SP Test
	/*char charVariable = 'Y'; 

	cout << "Would you like you continue? (Y/N):" << endl;
	cin >> (charVariable);

	while (toupper(charVariable) == 'Y') {
		cout << "The program will continue." << endl;
	
	}
	cout << "Goodbye." << endl;*/
return 0;
}