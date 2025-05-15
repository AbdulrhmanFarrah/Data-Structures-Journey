#include <iostream>
#include <cassert>
#include "KeyedBag.h"
using namespace std;


namespace Containers
{

	// CONSTRUCTOR:

	KeyedBag::KeyedBag()
		// postcondition: initialize the KeyedBag to be empty.
	{
		used = 0;
	}

	// MODIFICATION functions: 

	bool KeyedBag::insert(const value_type& entry, const int& key)
		// precondition	 : the bag is not full
		// postcondition : returns true and insert new entry if the key is unique otherwise returns false.
	{
		assert(is_full() == false);

		if (contains(key) == false) // the key is not inside the object (the precondition is true)
		{
			
			bag[used].value = entry;
			bag[used].key = key;

			used++;
			return true;
		}
		return false;
	}

	bool KeyedBag::erase(const int& key)
		// postcondition : returns true and erase the item which has the key if the key does exist otherwise returns false and do nothing.
	{
		bool flag_found = false;

		for (int index = 0; index < used; index++)
			if (bag[index].key == key)
			{
				bag[index] = bag[used - 1];
				flag_found = true;
				break;
			}

		if (flag_found)
		{
			bag[used - 1] = Pair();
			used--;
		}

		return flag_found;
	}

	void KeyedBag::clear()
		// postcondition : erase all the items and keys inside the object.
	{
		for (int index = 0; index < used; index++)
			bag[index] = Pair();
		used = 0;
	}

	bool KeyedBag::edit_item(int key, const value_type& new_value)
		// postcondition : Edit the value of the key if it is exist and returns true otherwise if the key does not exist then returns false.
	{
		bool flag_found = false;

		for (int index = 0; index < used; index++)
			if (bag[index].key == key)
			{
				bag[index].value = new_value;
				flag_found = true;
				break;
			}

		return flag_found;
	}

	// CONSTANT MEMBER FUNCTIONS (accessors):

	bool KeyedBag::contains(int key) const
		// postcondition : returns true if the key does exist inside the object otherwise returns false.
	{
		for (int index = 0; index < used; index++)
			if (bag[index].key == key)
				return true;
		return false;
	}

	KeyedBag::value_type KeyedBag::get_value(int key) const
		// precondition : the key does exist inside the object.
		// postcondition : returns value for the item which has the key, otherwise if the key does not exist the program will crash.
	{
		assert(contains(key));

		for (int index = 0; index < used; index++)
			if (bag[index].key == key)
				return bag[index].value;
	}

	KeyedBag::size_type KeyedBag::size() const
		// postcondition : returns the used size of the KeyedBag.
	{
		return used;
	}

	bool KeyedBag::is_empty() const
		// postcondition : returns true if the KeyedBag object has no items otherwise returns false.
	{
		return (size() == 0);
	}

	bool KeyedBag::is_full() const
		// postcondition : returns true if the size of the used items inside the object is equal to the CAPACITY of the KeyedBag(Full).
	{
		return (size() == CAPACITY);
	}


}