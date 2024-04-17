#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;

int main() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 7);
	cout << "Name\t:";
	SetConsoleTextAttribute(hConsole, 14);
	cout << " The war and the peace" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Avtor\t:";
	cout << "  L.N. Tolstoj" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Izdatelstvo:";
	cout << "  Piter" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	cout << "Pages\t:";
	SetConsoleTextAttribute(hConsole, 13);
	cout << " 500" << endl;
	SetConsoleTextAttribute(hConsole, 7);
	system("pause");
	return 0;
}