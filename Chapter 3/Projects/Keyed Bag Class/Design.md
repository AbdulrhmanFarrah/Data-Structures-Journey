## Pair Component (struct):
I will make a struct is called pair, the pair is consist of two variables:
1) value (item)
2) key
the type of the value is value_type and the type of the key is int (like the book want).

## Private Members:

I will use partially filled array and its type is Pair (the struct).
#### Partially filled array:

it is a static array, its size is the CAPACITY constant.
this array have a used range (the used range is where the user putted the items and it is the place the user can use). 
the unused range is for the developer who makes the class and its functions, for inserting and erase items, etc.

#### Used member variable:

it is a variable describes the number of used items (which user used) inside the object.
the type of used member variable is size_type.
#### The Invariant of the Class
1) the number of items inside the object is stored inside the member variable (used)
	, 0 <= used <= CAPACITY.
2) every key is unique, there is no duplicate of the same key.