#include <iostream>
using namespace std;

int main() {
	//Edited
	int tenNums[10];

	for (int i = 0; i < 10; i++) {
		cout << "Please enter 10 values..." << endl; 
		cin >> tenNums[i];
	}

	cout << "\n\n";
	cout << "These are your 10 nums" << endl;
	for (int i = 0; i < 10; i++) {
		cout << tenNums[i] << " ";
	
	}
	// What I did for SP Test
	/*int tenNums{10};

	cout << "Please enter 10 values..." << endl;
	cin >> tenNums;

	for (int i = 0; i < 10; i++)
		cout << "You have entered you following numbers... \n" << tenNums/*[i] << endl;*/
	return 0;
}