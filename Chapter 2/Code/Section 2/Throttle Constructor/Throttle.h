#pragma once
#include <iostream>
using namespace std;


class Throttle
{
private:
	int position;
	int top_position; // highest or most or max
public:

	Throttle()
	// postcondition: initialize position to 0 & top_position ot 1.
	{
		shut_off();
		this->top_position = 1;
	}

	Throttle(int top_position)
	// precondition: top_position must be bigger than 0.
	// postcondition: initialize position to 0 & top_position.
	{
		if (top_position > 0) // or use assert.
			this->top_position = top_position;
		else
			this->top_position = 1;

		shut_off(); // position = 0.
	}

	Throttle(int top_position, int position)
	// precondition: top_position must be bigger than 0, position must be between top_position and 0.
	// postcondition: initialize position & top_position.
	{

		if (top_position <= 0)
			top_position = 1;

		shut_off(); // position = 0.
		shift(position);
	}

	// Modification member functions:
	void shut_off();
	void shift(int amount);

	// Constant member functions:
	double flow() const;
	bool is_on() const;
	bool is_above_half() const;
};


void Throttle::shut_off() { position = 0; }

void Throttle::shift(int amount)
// postcondition: it will shift the position of the throttle by amount
{
	if (amount < 0)
		position = 0;
	else if (amount > top_position)
		position = top_position;
	else
		position = amount;
}

double Throttle::flow() const { return (position / double(top_position)); }

bool Throttle::is_on() const { return (flow() > 0); }

bool Throttle::is_above_half() const { return (flow() > 0.5); }

