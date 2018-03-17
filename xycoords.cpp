#include<iostream>
#include<Windows.h>
using namespace std;

void gotoxy(int x, int y) { // Sets bespoke x, y positions
	COORD coords;
	coords.X = x;
	coords.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coords);

}

int main() {

	for (int i = 0; i < 10; i++)
	{
		int g = 4 * i;			// For loop to print out a new vehicle location
		gotoxy(0, g);			// with every increment of time t
		cout << "Car";
		cout << "\r" << endl;	// Operator for deleting console character
	}
	system("Pause");
	return 0;
}

