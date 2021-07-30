#include <iostream>
#include "lib82.h"
#include "lib9.h"

using namespace std;

int main()
{
	char a;
	setlocale(LC_ALL, "Ukr");
	name();
	cout << "\nf - 9.1\nd - 9.2\ns - 9.3\nh - s_calculation\nОберiть завдання: "; cin >> a;
	if (a == 'f') {
		tabl();
	}
	if (a == 'd'){
		temp();
	}
	if (a == 's'){
	bit();
	}
	if (a == 'h') {
		s_calculation();
	}
	cout << "\n";
	system("pause");
	return 0;
}
