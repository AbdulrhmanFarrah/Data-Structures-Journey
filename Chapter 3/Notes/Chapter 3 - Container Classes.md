## Notes:

> **The Situation:** A member function has a parameter type that is the same as the member function's class. For example the Bag's += operator has a parameter that is itself a Bag.
>
>**The Danger:** The member function might fail when an object activates the member function, and the same object is used as the actual argument. For example, a Bag b could be used in the statement b+=b.
>
>**Always test this special situation.**

---
> [!NOTE] **An important way of thinking 1**
> when You want to make a component let's say it is a class, first thing you should think of is giving an intuitive description of it.
> 
> then we do the specification of this class by giving more precise description, but how?
> 
> one of the ways is by describing the collection of function that manipulate the object of the class, again how?
> 
> one of the ways is by providing a prototype for each of the functions, most of which are member functions, with each prototype we also specify the precise action that the function will perform in words.
> 
> These specifications will later become our precondition/postcondition contracts.

> [!NOTE] **An important way of thinking 2**
> After **An important way of thinking 1** you can do the documentation of the Class (Component).
> We can do the documentation inside the header file as a long comments of the public member functions (including the precondition and postcondition contract) and properties (including the description of them) including the constructors.

---

### The Invariant of a Class

> [!NOTE] Wikipedia
> In [computer programming](https://en.wikipedia.org/wiki/Computer_programming "Computer programming"), specifically [object-oriented programming](https://en.wikipedia.org/wiki/Object-oriented_programming "Object-oriented programming"), a **class invariant** (or **type invariant**) is an [invariant](https://en.wikipedia.org/wiki/Invariant_\(computer_science\) "Invariant (computer science)") used for constraining [objects](https://en.wikipedia.org/wiki/Object_\(computer_science\) "Object (computer science)") of a [class](https://en.wikipedia.org/wiki/Class_\(computer_science\) "Class (computer science)"). [Methods](https://en.wikipedia.org/wiki/Method_\(computer_science\) "Method (computer science)") of the class should preserve the invariant. The class invariant constrains the state stored in the object.
> Class invariants are established during [construction](https://en.wikipedia.org/wiki/Constructor_\(object-oriented_programming\) "Constructor (object-oriented programming)") and constantly maintained between calls to public methods. Code within functions may break invariants as long as the invariants are restored before a public function ends. With [concurrency](https://en.wikipedia.org/wiki/Concurrent_computing "Concurrent computing"), maintaining the invariant in methods typically requires a critical section to be established by locking the state using a [mutex](https://en.wikipedia.org/wiki/Mutex "Mutex").
> An **object invariant**, or **representation invariant**, is a computer programming construct consisting of a set of invariant properties that remain uncompromised regardless of the state of the object. This ensures that the object will always meet predefined conditions, and that methods may, therefore, always [reference](https://en.wikipedia.org/wiki/Reference_\(computer_science\) "Reference (computer science)") the object without the risk of making inaccurate presumptions. Defining class invariants can help programmers and testers to catch more bugs during [software testing](https://en.wikipedia.org/wiki/Software_testing "Software testing").


> [!NOTE] Book
> Always make an explicit statement of the rules that dictate how the member variables of a class are used. These rules are called the **invariant of the class**. All of the functions (except the
> constructors) can count on the invariant being valid when the function is called. Each function also has the responsibility of ensuring that the invariant is valid when the function finishes.


<iframe width="560" height="315" src="https://www.youtube.com/embed/W1d5TYmiTUE?si=XGWGLNX_SpfA1Zv3" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

> [!NOTE] Video Description
> In this talk we present a static analysis, based on abstract interpretation, for the automatic inference of class invariants in Object-oriented languages. Intuitively, a class invariant is a property valid for each instantiation of a class, before and after the execution of any class method. Class invariants are important for the modular verification, the optimization and the specification of object-oriented languages. We present a generic approach for the inference of class invariants that is sound (in that it overapproximates the class semantics), generic (in that any abstract domain can be plugged-in), and modular (with respect to the instantiation context and inheritance). We will illustrate our results with several examples and using an incremental approach: we start by showing how to infer class invariants for a minimal object-oriented language, then we will consider aliasing, inheritance and mutual recursive classes.

#### [Chatgpt talk about invariant of a class](https://chatgpt.com/share/68228227-f5e8-8010-b48e-1751730139c6)


## Summary
- A container class should be implemented in a way that makes it easy to alter the data type of the underlying items. In C++, the simple approach to his problem uses a typedef statement to define the type of the container's item. ( Template is better ).
- When design a class, always make an explicit statement of the rules that dictate how the member variables are used. These rules are called the ***invariant of the class***, and should be written at the top of the implementation file for easy reference.
- Small classes can be tested effectively with an interactive test program that follows the standard format of your test program.