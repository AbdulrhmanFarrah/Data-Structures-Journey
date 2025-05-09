/*
	This Program is for studying the section 2 in chapter 2 for (data structures and other objects using c++) book.
	This section talks about using Constructors also this program is the implementaion of the throttle constructor.
*/

#include <iostream>
#include "Throttle.h"
using namespace std;

int main()
{
	Throttle control;
	control.shut_off();


	cout << "should be (0/6): " << control.flow() << endl; // min boundary check. (0)

	control.shift(6);
	cout << "should be (6/6): " << control.flow() << endl; // max boundary check. (6)

	control.shift(3);
	cout << "should be (3/6): " << control.flow() << endl; // medium boundary check. (3)

	control.shift(-1);
	cout << "should be (0/6): " << control.flow() << endl; // out of the min boundaries check. (-1)

	control.shift(7);
	cout << "should be (6/6): " << control.flow() << endl; // out of the max boundaries check. (7)

	int position = 0;
	cout << endl << "Enter the positon you want (between 0 and 6): ";
	cin >> position;

	control.shift(position);

	if (control.is_on())
	{
		cout << "should be (" << position << "/6): " << control.flow() << endl;
		if (control.is_above_half())
			cout << "the flow is more than 0.5";
		else
			cout << "the flow is more less or equal 0.5";

	}
	else
	{
		cout << "it is off" << endl;
	}

	return 0;
}