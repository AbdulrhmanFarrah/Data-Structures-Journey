FILE: KeyedBag.h
CLASS PROVIDED: KeyedBag (part of the namespace Containers)

TYPEDEFS and MEMBER CONSTANTS for the KeyedBag class:
	typedef (------) value_type (by default is string).
		KeyedBag::value_type is the data type of the items in the KeyedBag Object. It may be any C++ built-in type, or a class with a default constructor and assignment operator.
	typedef (------) size_type
		KeyedBag::size_type is the data type of any variable that keeps track of how many items are in a KeyedBag, it is usually size_t (unsigned int).
	static const size_type CAPACITY = (------)
		KeyedBag::CAPACITY is the max number of items that a KeyedBag can hold.

Functions for the KeyedBag class:
	CONSTRUCTOR of the KeyedBag class
		KeyedBag()
			postcondition: initialize the KeyedBag to be empty.
	MODIFICATION MEMBER functions for the KeyedBag class:
		bool insert(const value_type& entry, const int& key)
			precondition: the key does not exist (in other words unique) inside the object.
			postcondition: returns true and insert new entry if the key is unique otherwise returns false.
		bool erase(const int& key)
			precondition: the key does exist inside the object.
			postcondition: returns true and erase the item which has the key if the key does exist otherwise returns false and do nothing.
		void clear()
			precondition: None.
			postcondition: erase all the items and keys inside the object.
		bool edit_item(int key, const value_type& new_value)
			precondition: None.
			postcondition: Edit the value of the key if it is exist and returns true otherwise if the key does not exist then returns false.
	CONSTANT MEMBER functions for the KeyedBag class:
		bool contains(int key) const
			precondition: None.
			postcondition: returns true if the key does exist inside the object otherwise returns false.
		value_type get_value(int key) const
			precondition: the key does exist inside the object.
			postcondition: returns value for the item which has the key, otherwise if the key does not exist the program will crash.
		size_type size() const
			precondition: None.
			postcondition: returns the used size of the KeyedBag.
		bool is_empty() const
			precondition: None.
			postcondition: returns true if the KeyedBag object has no items otherwise returns false.
		 bool is_full() const
			precondition: None.
			postcondition: returns true if the size of the used items inside the object is equal to the CAPACITY of the KeyedBag (Full).