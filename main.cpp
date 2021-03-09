// C2 P6 Logical Operators - Passwords
// Demonstrates logical operators

#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string username;
	string password;
	bool success = false;
	char choice = 'Y';

	cout << "\t° ° ° User Login ° ° °\n";

	while (choice == 'Y' || choice == 'y')
	{
		cout << "\nUsername: ";
		cin >> username; 

		cout << "\nPassword: ";
		cin >> password; 

		if (username ==  "Harry" && password == "Potter")
		{
			cout << "\nWingardium Leviosa!";
			success = true;
			break;
		}
		else if (username ==  "Izuku" && password == "Midoriya")
		{
			cout << "\nPlus Ultra!";
			success = true;
			break;
		}
		else //if username and password don't match
		{
			cout << "\n\nYour login credentials don't match!";
			cout << "\n\nWould you like to try again (Y/N)?\n";
			cin >> choice;
		}
		
	
	} 
	cout <<"\n\n° See you later!";
    return 0;
}