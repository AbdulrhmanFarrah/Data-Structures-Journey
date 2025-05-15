/*********************************************************************
 *  File:    KeyedBag.h
 *
 *  Description:
 *  ------------
 *  This header file defines the `KeyedBag` class within the `Containers`
 *  namespace. It is a fixed-size container that stores key-value pairs
 *  where each key is unique. The class allows for insertion, deletion,
 *  editing, and retrieval of elements based on their keys.
 *
 *  Key Features:
 *    - Stores up to 30 key-value pairs
 *    - Ensures unique keys
 *    - Allows lookup, modification, and deletion using keys
 *    - Provides utility functions for size, capacity, and status
 *
 *  Namespace:
 *    Containers
 *
 *  Dependencies:
 *    - <iostream> (for using std::string as value_type)
 *********************************************************************/

 // typedef std::string value_type;
 // typedef size_t size_type; // size_t == unsigned int
 // static const int CAPACITY = 30;
 //
 // 
 // CONSTRUCTOR:
 //
 // KeyedBag();
 // postcondition : initialize the KeyedBag to be empty.
 //
 //
 // MODIFICATION MEMBER FUNCTIONS (mutators):
 //
 // bool insert(const value_type& entry, const int& key);
 // precondition : the bag is not full.
 // postcondition : returns true and insert new entry if the key is unique otherwise returns false.
 //
 // bool erase(const int& key);
 // precondition : the key does exist inside the object.
 // postcondition : returns true and erase the item which has the key if the key does exist otherwise returns false and do nothing.
 // 
 // void clear();
 // postcondition : erase all the items and keys inside the object.
 // 
 // bool edit_item(int key, const value_type& new_value);
 // postcondition : Edit the value of the key if it is exist and returns true otherwise if the key does not exist then returns false.
 // 
 //
 // CONSTANT MEMBER FUNCTIONS (accessors):
 //
 // bool contains(int key) const;
 // postcondition : returns true if the key does exist inside the object otherwise returns false.
 // 
 // value_type get_value(int key) const;
 // precondition : the key does exist inside the object.
 // postcondition : returns value for the item which has the key, otherwise if the key does not exist the program will crash.
 // 
 // size_type size() const;
 // postcondition : returns the used size of the KeyedBag.
 // 
 // bool is_empty() const;
 // postcondition : returns true if the KeyedBag object has no items otherwise returns false.
 // 
 // bool is_full() const;
 // postcondition : returns true if the size of the used items inside the object is equal to the CAPACITY of the KeyedBag(Full).


#pragma once
#include <iostream>
using namespace std;

namespace Containers
{
	class KeyedBag
	{
	public:

		typedef std::string value_type;
		typedef size_t size_type; // size_t == unsigned int
		static const int CAPACITY = 30;

		// CONSTRUCTOR: 

		KeyedBag();
			// postcondition: initialize the KeyedBag to be empty.


	// MODIFICATION MEMBER FUNCTIONS (mutators):

		bool insert(const value_type& entry, const int& key);
		// precondition: the bag is not full.
		// postcondition : returns true and insert new entry if the key is unique otherwise returns false.

		bool erase(const int& key);
		// precondition: the key does exist inside the object.
		// postcondition : returns true and erase the item which has the key if the key does exist otherwise returns false and do nothing.

		void clear();
		// postcondition : erase all the items and keys inside the object.


		bool edit_item(int key, const value_type& new_value);
		// postcondition : Edit the value of the key if it is exist and returns true otherwise if the key does not exist then returns false.


	// CONSTANT MEMBER FUNCTIONS (accessors):

		bool contains(int key) const;
		// postcondition : returns true if the key does exist inside the object otherwise returns false.

		value_type get_value(int key) const;
		// precondition : the key does exist inside the object.
		// postcondition : returns value for the item which has the key, otherwise if the key does not exist the program will crash.

		size_type size() const;
		// postcondition : returns the used size of the KeyedBag.

		bool is_empty() const;
		// postcondition : returns true if the KeyedBag object has no items otherwise returns false.

		bool is_full() const;
		// postcondition : returns true if the size of the used items inside the object is equal to the CAPACITY of the KeyedBag(Full).

	private:

		struct Pair
		{
		public:
			value_type value; // item
			int key;
		};

		size_type used; // it is a variable describes the number of used items (which user used) inside the object.
		Pair bag[CAPACITY]; // array of items and keys

	};
}

