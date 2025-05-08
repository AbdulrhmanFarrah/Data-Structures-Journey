#pragma once
#include <iostream>
using namespace std;


class Throttle
{
private:
	int position;

public:

	// Modification member functions:
	void shut_off();
	void shift(int amount);

	// Constant member functions:
	double flow() const;
	bool is_on() const;
	bool is_above_half() const;
};


void Throttle::shut_off()
// precondition: None.
// postcondition: Throttle will be turned off (it is used for initializing the position).
{
	position = 0;
}

void Throttle::shift(int amount)
// precondition: shut_off should be called for at least once & aomunt should be more than or equal 0 and less than or equal 6.
// postcondition: it will shift the position of the throttle by amount
{
	if (amount < 0)
		position = 0;
	else if (amount > 6)
		position = 6;
	else
		position = amount;
}

double Throttle::flow() const
// precondition: shut_off should be called for at least once.
// postcondition: The value returned is the current flow as a proportion of the max flow (BOOK)		// postcondition: it gives you the flow of the Throttle. (MINE)
{
	return (position / double(6));
}

bool Throttle::is_on() const
// precondition: shut_off should be called for at least once.
// postcondition: return the status of the throttle if it is off(shutted) or is on
{
	return (flow() > 0);
}

bool Throttle::is_above_half() const
// precondition: shut_off() should be called at least once.
// postcondition: tells you if the flow is more than 0.5 or not.
{
	return (flow() > 0.5);
}

// I think the naming of the functions is very bad, that is my opinion.