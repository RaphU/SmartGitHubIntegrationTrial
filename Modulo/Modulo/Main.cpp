
#include <iostream>
#include "Stam.h"

using namespace std;


void main()
{
	unsigned int tmp = stam::stamUInt;
	cin >> tmp;
	cout << (tmp / 10) << " " << (tmp % 10) << " " << (tmp - (tmp% 10)) << endl;
	cin >> tmp;
}

