#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


int main()
{
	float a, b, rez;

	cout << "A krastine ";
	cin >> a;
	cout << "B krastine ";
	cin >> b;
	rez = a * a + b * b;
	rez = sqrt(rez);
	cout << "Pitagoro tearoma yra: " << rez << '.' << endl;

	system("pause");
}
