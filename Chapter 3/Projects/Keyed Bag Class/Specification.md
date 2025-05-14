## What is the Project:

The project is a class called keyed bag.

keyed bag class is a container class that has collection of items (by the user) and every item has a key (also by the user).

1) The keyed bag is not sorted.
2) the key is integer
3) the user can change the item's type before compilation ( by changing value_type )

## Functions that Manipulate the Object of the class:

### Constructors:
#### Default Constructor:
A default constructor that initialize the keyed bag to be empty keyed bag.
prototype: KeyedBag();
#### Copy Constructor:
The copy constructor take an object (of keyed bag) and make a deep copy for the current object by copying the keys and the values also the type of the values.
prototype: KeyedBag(const KeyedBag& other);
### Modification Functions (mutators):

#### Insert Member Function:

Use: Adds a Value by taking it with a key(is unique) to the Object(KeyedBag), and returns true if the value is added otherwise returns false (failed to add the value because the key is not unique).

Arguments:
- entry: is the real value (by default if you don't change the value_type the type should be string).

- key: like an index for the entry, so the key should be unique, the type of the key is integer (int) 

Prototype: bool insert(const value_type& entry, const int& key)  

#### Erase Member Function:

Use: Erase an exact value by its key, also the key is deleted from the object, if the key is in the bag then return true (the erase is done successfully) otherwise return false (the erase will not happen because there is no key like this key to delete).

Arguments:
- key, the type of the key is int, the key should be inside the bag otherwise will return false. 

Prototype: bool erase(const int& key);

#### Clear Member Function:

Use: Delete Every key and value inside the Object(KeyedBag).

Prototype: void clear();

#### Edit Member Function:

Use: Edit the value of the key if it is exist and returns true otherwise if the key does not exist then returns false.

prototype: bool edit_item(int key, const value_type& new_value);
### Constant Functions (accessors):

#### Contains Function:

Use: To Check if a key is already exist (return true) or not (return false).

Arguments: key (int).

Prototype: bool contains(int key) const;

#### Get Value Function:

Use: takes a key and returns value if the key exist in the object otherwise the program will crash by assert function.

Arguments: key (int).

Prototype: value_type get_value(int key) const;

#### Size Function:

Use: return the used size of the bag(KeyedBag).

Prototype: size_type size() const;

#### Is Empty Function:

Use: return true if the bag(KeyedBag object) is empty (there is not keys neither values).

prototype: bool is_empty() const;

#### Is Full Function:

Use: return true if the bag(KeyedBag object) is full (the size is equal to the capacity).

prototype: bool is_full() const;

## Constants & Defined Types:

#### Defined Types:
1) value_type is string -> it is the type of the values which are inside the bag.
2) size_type is size_t (size_t == unsigned int) -> the type of everything describe any size.

#### Constants:
1) Capacity and it is equal to 30. -> the max size of the bag.


## The Invariant of the Class
1) the number of items inside the object is stored inside the member variable (used), 0 <= used <= CAPACITY.
2) every key is unique, there is no duplicate of the same key.