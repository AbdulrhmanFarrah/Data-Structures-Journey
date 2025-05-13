## What is Chapter 2 is about?
### 1. Learning Objectives:

 When you complete Chapter 2, you will be able to:
 
- [ ]  specify and design new classes using a pattern of information hiding with private member variables, const member functions, and modification member functions. 
- [ ]  write a header file and a separate implementation file for any new class. 
- [ ]  create and use namespaces to organize new classes. 
- [ ]  use your new classes in small test programs.
- [ ]  use the automatic assignment operator and the automatic copy constructor for your new classes. 
- [ ]  identify situations in which member functions and constructors can benefit from using default arguments. 
- [ ]  correctly identify and use value parameters, reference parameters, and const reference parameters. 
- [ ]  overload certain binary operators and input/output operators for new classes.
- [ ]  identify the need for friend functions of a new class and correctly implement such nonmember functions (which are sometimes overloaded operators).

### 2. Chapter Contents:

1. Classes and Members.
2. Constructors.
3. Using a Namespace, Header File, and Implementation File.
4. Classes and Parameters.
5. Operator Overloading.
## Notes 2.0.1 (OOP):
### What is OOP ?
 Object-Oriented Programming (OOP) is an approach to programming in which data occurs in tidy packages called objects.
 
 Manipulation of an object happens with functions called member functions which are part and parcel of their objects.
### How to Create an Object ?
The mechanism to create objects and member functions is called a class.
> Classes can support information hiding.
## Notes 2.0.2 (ADT):
### What is ADT ?

Abstract Data Types (ADT) is an abstraction of a data structure which provides only the interface to which a data structure must adhere to.

> The interface does not give any specific details about how something should be implemented or in what programming language.

 ADT refer to a class that is presented to other programmers with information hiding.
 
---

> [!NOTE] Wikipedia
> In [computer science](https://en.wikipedia.org/wiki/Computer_science "Computer science"), an **abstract data type** (**ADT**) is a [mathematical model](https://en.wikipedia.org/wiki/Mathematical_model "Mathematical model") for [data types](https://en.wikipedia.org/wiki/Data_type "Data type"), defined by its behavior ([semantics](https://en.wikipedia.org/wiki/Semantics_\(computer_science\) "Semantics (computer science)")) from the point of view of a _[user](https://en.wikipedia.org/wiki/User_\(computing\) "User (computing)")_ of the data, specifically in terms of possible values, possible operations on data of this type, and the behavior of these operations. This mathematical model contrasts with _[data structures](https://en.wikipedia.org/wiki/Data_structure "Data structure")_, which are concrete representations of data, and are the point of view of an implementer, not a user.

---

| Abstraction (ADT) | Implementation (DS)                                                        |
| ----------------- | -------------------------------------------------------------------------- |
| List              | 1. Dynamic Array<br>2. Linked List                                         |
| Queue             | 1. Linked List Based Queue<br>2. Array based Queue<br>3. Stack based Queue |
| Map               | 1. Tree Map<br>2. Hash Map / Hash Table                                    |
| Vehicle           | Golf Cart<br>Bicycle<br>Smart Car                                          |

---

<iframe width="560" height="315" src="https://www.youtube.com/embed/2USMAwcRWHE?si=PiwxXHJFUtRorKNm" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>






## Notes:


> [!NOTE] Operator Overloading
> Defining a new meaning for an operator is called overloading the operator.


> [!NOTE] Binary Function
> A binary function is a function with two arguments. Often, when you design a new class, there are binary functions to manipulate objects in the class.
