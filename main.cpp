#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int v, t, a, s=0;
	cout << "Enter the velocity, time and acceleration: ";
	cin >> v >> t >> a;
	s = v * t + (a * pow(t, 2))/2;
	cout << "The distance is: " << s << endl;
	return 0;
}