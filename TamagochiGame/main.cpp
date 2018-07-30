#include "Header.h"

int main()
{
	Critter crit;
	crit.Talk();
	char choice;
	do
	{
		cout << endl << "Critter Caretaker" << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Listen to your critter" << endl;
		cout << "2 - Feed" << endl;
		cout << "3 - Play" << endl;
		cin >> choice;
		switch (choice)
		{
		case '0':
			cout << "Good bay!" << endl;
				break;
		case '1':
			crit.Talk();
			break;
		case '2':
			crit.Eat();
			break;
		case '3':
			crit.Play();
			break;
		default:
			cout << "Valid var!" << endl;
		}
	} while (choice != '0');
	return 0;
}