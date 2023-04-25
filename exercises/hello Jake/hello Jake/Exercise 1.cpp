#include <iostream>
using namespace std;

int main() {

	int userInput;
	int fullName;

	
	cout << "What is your full name?" << endl;
	cin >> fullName; //getline.(cin,name); how to store someone's full name

	cout << "Welcome to the Pizza Shop. What would you like?" << endl;
	cout << "1) Margherita\n2) Pepperoni\n3) Meat Feast\n4) Veg Supreme" << endl;
	cin >> userInput; 
	
	while (cin.fail()) {
		cout << "Invalid input." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> userInput;
	}
	/*cin.clear(); doesn't allow input of letters 
	cin.ignore(1000, '\n');*/ 
	
	
	switch (userInput) {
	case 1: {
		cout << fullName << ", your Margherita is on it's way!" << endl;
		break;
	}	 
	case 2: {
		cout << fullName << " your Pepperoni is on it's way!" << endl;
		break;
	}
		
	case 3: {
		cout << fullName << " your Meat Feast is on it's way!" << endl;
		break;
	}
		
	case 4: {
		cout << fullName << " your Veg Supreme is on it's way!" << endl;
		break;
	}	 
		 
	}
	return 0;
}