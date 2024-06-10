#include <iostream>
using namespace std;

int main() {
	int len;
	cout << "Enter the length of the circle: ";
	cin >> len;
	cout << "The area of the circle is: " << 3.14 * len * len << endl;
	cout << "The circumference of the circle is: " << 2 * 3.14 * len << endl;
	return 0;
}