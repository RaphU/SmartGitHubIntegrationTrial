#include <iostream>
#include "Stam.h"

using namespace std;


void main()
{
	unsigned int tmp = 10;
	cin >> tmp;
	cout << (tmp / 10) << " " << (tmp % 10) << " " << (tmp - (tmp% 10)) << endl;
	cin >> tmp;
}

