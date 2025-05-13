## What is the Chapter 1 about?
### 1. Learning Objectives:

- [x] Writing precondition/postcondition contracts for small functions, and use the C++ assert facility to test preconditions.
- [x] Recognize quadratic, linear, and logarithmic running time behavior in simple algorithms, and write big-O expressions to describe this behavior.
- [ ]  Create and recognize test data that is appropriate for simple problems, including testing boundary conditions and fully exercising code.
### 2. Chapter Contents:

1. Specification, Design, Implementation.
2. Running Time Analysis.
3. Testing and Debugging.
## Notes 0.1 (Data Structure):

### What is Data Structure?
###### A data structure is a way to organize, store, and manage data in a computer so it can be used efficiently.
#### Where we store these data?
when we say a data structure **"stores data"**, we usually mean it stores data in **RAM** while the program is running.
### Why is Data Structure Important?

> They help to manage and organize data.
#### 1. **Efficiency**
Different data structures solve problems in **different ways**, and some are much **faster** than others.
#### 2. **Clean, Organized Code**
Using the right data structure keeps your code **simple and clean**, instead of messy and complicated.
#### 3. **Solving Real-World Problems**
Many real-world problems naturally fit specific data structures.
#### 4. **Mastering Algorithms**
Most algorithms **depend** on data structures, Without learning data structures, you can’t understand many important algorithms.
#### 5. **Memory Optimization**
Some data structures are better for **saving memory**.  
For example, **linked lists** grow as needed, while arrays need a fixed or resizable block of memory.

#### Summary:
Data structures make programs **faster**, **more efficient**, and **easier to write**, and they are essential for solving complex problems and succeeding in coding interviews.

### How to Study Data Structure?
#### 1. Understand the Concept First (Don’t Just Memorize)
Start with a clear explanation of **what** each data structure is and **why** it exists.
#### 2. Take Notes with Patterns
Use simple patterns and examples:
- Write time/space complexity of each operation: insert, delete, search.
- Create a table of trade-offs (example: array vs. linked list).
#### 3. Code Every Data Structure from Scratch
Use GitHub to save your implementations.

#### 4. Solve Problems Related to Each Structure
After learning each structure, solve **3–5 problems** of increasing difficulty

#### 5. Understand When to Use What
Ask yourself:
	 “Which data structure is best for this problem and why?”
 Look at problems and practice **choosing** the right structure before solving.

## Notes 0.2 (Software Development Phases):
### What is the meaning of Software Development Phases?
###### The Software Development Phases are the main steps or stages that developers follow when creating a software application or system. These phases help organize the process so the software is built correctly, meets user needs, and works reliably.

> [!NOTE]  The Phases of Software Development:
> - Specification of the task
> - Design of a solution
> - Implementation **(coding)** of the solution
> - Analysis of the solution
> - Testing and debugging
> - Maintenance and evolution of the system
> - Obsolescence **(outdated)**

>  Note: There is no single sequence for the phases 
## Notes 1.1  (Specification, Design, Implementation):

> One begins with a list of difficult design decisions which are likely to change. Each module is then designed to hide such a decision from the others.

#### Specification:
A detailed description of what a software system should do — its requirements and expected behavior.
#### Design:
The plan or blueprint for how the software will be built to meet the specification — includes structure, components, and how they interact.
#### Implementation:
The actual coding and building of the software based on the design.

### Design Concept: Decomposition (Factoring)

#### Definition:  
Breaking a complex problem/system into smaller, easier-to-understand parts for easier design, coding, and maintenance.

---

#### Types of Decomposition:

- **Algorithmic Decomposition:**  
    Breaks a process into clear, step-by-step instructions (used in structured programming).
    
- **Structured Analysis:**  
    Breaks a software system into functions and data, starting from a system-level view (Tom DeMarco's approach).
    
- **Object-Oriented Decomposition:**  
    Breaks a system into objects or classes that each handle part of the problem (Booch: algorithmic + object-based view).
    
- **Functional Decomposition:**  
    Breaks the function of a system into smaller subsystem functions to manage complexity.
    

---

#### Decomposition Paradigm

- A strategy to structure a program into parts (to reduce complexity).
- Goals:
    - **Minimize dependencies** between parts (low coupling).
    - **Maximize internal focus** of each part (high cohesion).

**Common Paradigms:**
- Procedural
- Modular
- Abstract Data Type (ADT)
- Object-Oriented
#### What are the aspects of a good decomposition?
##### **1. High Cohesion**

Each part (module, function, or component) should focus on a single task or concept.
 Why it's good: Easier to understand, test, and reuse.
 
---

##### **2. Low Coupling**

Components should be as independent from each other as possible.
- **Why it's good**: Changes in one part are less likely to break others.

---

##### **3. Understandability**

Each decomposed unit should be easy to understand on its own.
- **Why it's good**: Makes debugging, maintenance, and collaboration simpler.

---

##### **4. Reusability**

Parts should be designed in a way that they can be reused in different contexts.
- **Why it's good**: Saves time and promotes consistency.

---

##### **5. Testability**

Each unit should be easy to test independently.
- **Why it's good**: Helps catch bugs early and improves reliability.

---

##### **6. Maintainability**

The system should be easy to update or extend.
- **Why it's good**: Over time, code will evolve, and good decomposition makes that easier.

---

##### **7. Clear Interfaces**

Each part should have a well-defined input/output and behavior.
- **Why it's good**: Prevents confusion and bugs when integrating parts together.

---

##### **8. Logical Grouping**

Functions or modules should be grouped based on related functionality.
- **Why it's good**: Mirrors real-world concepts and business logic, making it more intuitive
#### Book:

> [!NOTE] Book
> > When you are working on one component (ex: function), you should not worry about how the other components perform their jobs. But the components do interact. So when you are designing one component you need to know something about what the other components do. The trick is to ==**know only as much as you need, but no more.**== This is called **information hiding**. One technique for incorporating information hiding involves specifying your components' behavior using **preconditions and postconditions**. 

### Preconditions and Postconditions:

> [!NOTE] Abstraction
> > When we focus on what a component (such as a function, method, or object) does rather than how it is implemented, we are using a form of information hiding called **abstraction**.

#### What is Precondition?
A **precondition** is a condition that must be true before a function is called for it to work correctly. The function's correct behavior is only guaranteed if the precondition is satisfied.

> "Before you use this function, make sure this thing is true. Otherwise, the function might not work as expected.


#### What is Postcondition?
**A postcondition** is a statement that describes what will be true after a function has finished executing. If the function is correctly implemented and the **precondition** was true at the time the function was called and the function is completed successfully then the postcondition is true.


> [!NOTE] Design by Contract
>  **Precondition** → **Promise by the caller**
>  - "I (the caller) promise to give you good input."
>  
> **Postcondition** → **Promise by the function**
>  - "I (the function) promise to give correct output if you gave me what I asked for." 

### Small Notes On Implementations:
1) Using declared constants rather than using the actual values directly in the program makes it easier to alter and change the program.
2) When you use well-known formulas may be more easily recognized in their original form.
3) During development components should be designed to help programmers find errors as easy as possible (like printing a message if the precondition fails and either halts the entire program, or performs some other error actions before returning).

## Notes 1.2 (Running Time Analysis):

### What is Running Time Analysis:
Running time analysis, also known as **time complexity analysis**, is the process of evaluating how the time an algorithm takes to run increases with the size of its input. It helps determine how **efficient** an algorithm is, especially for large inputs.

#### Why not measure actual seconds?
The number of seconds can depend on too many extraneous factors
-  Hardware (CPU speed, memory latency)
-  Is the processor is busy with other tasks (Caches, background processes, etc.)
-  Compiler optimizations & Programming language (is it written in Python or C?)
#### So what we are counting?
The analysis counts the number of **operations** required.
###### What is the definition of operation?
There is no precise definition of what constitutes an operation, although an operation should satisfy your intuition of a "small step".


> [!NOTE] Dependence on input size
> For most programs, the number of operations depends on the program's input.
> When the running time depends on the size of the input, then the time can be given as an expression, where part of the expression is the input's size.

### Big-O Notation:

#### What is Big-O notation?

**Big O notation** is a way to describe how fast an algorithm's **time** grows as the **input size increases.** It tells you how efficient an algorithm is, especially when the input becomes very large.

It’s part of a group of notations called **asymptotic notation**, which help us understand the **growth rate** of functions. The **"O"** stands for **"order"**, meaning the general size or behavior of the algorithm.

> There are also other notations:
> You Will Study it more at algorithms.
>1) **o** **(little o)**: a tighter upper bound.
>2) **Ω (Omega)**: a lower bound.
>3) **ω (omega)**: a tighter lower bound.
>4) **Θ (Theta)**: a tight bound (both upper and lower).


> [!NOTE] Result of Big-O:
> the result is called the order of the algorithm, and it is generally more important than the speed of the processor.

#### Orders of Algorithms:

![[Big-O.jpg]]


## Notes 1.3 (Testing and Debugging):

### Software Testing:

#### What is Software Testing?
[Software Testing](https://en.wikipedia.org/wiki/Software_testing) is the act of checking whether software satisfies expectations.

#### Why Software Testing is important?
Software testing can provide objective, independent information about the quality of software and the risk of its failure to a user or sponsor.

Software testing can determine the correctness of software for specific scenarios but cannot determine correctness for all scenarios. It cannot find all [bugs](https://en.wikipedia.org/wiki/Software_bug "Software bug").

### Testing Data:

#### What is Testing Data?
Test data is a set of carefully designed inputs used to find errors in a program.

#### What are the properties of Good Test Data?
1) You must know what output a correct program should produce for each test input ( Do not take it lightly).
2) The test inputs should include those inputs that are most likely to cause errors.
### Testing Methods (for now just 2 methods):

#### Boundary Values:

> [!NOTE] Test Boundary Values
> If you cannot test all possible inputs, at least test the boundary values. For example, if legal inputs range from zero to one million, then be sure to test input 0 and input 10^6. It is a good idea also to consider 0, 1 and -1 to be boundary values whenever they are legal input.
#### Fully Exercising Code:

> [!NOTE] Fully Exercising Code
> 1) Make sure that each line of your code is executed at least once by some of your test data.
> 2) If there is some part of your code that is sometimes skipped altogether, then make sure that there is at least one test input that actually does skip this part of your code.
#### What is Profiler?

> [!NOTE] Profiler
> Software tool that ensures that you are fully exercising your code.
> A typical profiler will generate a listing indicating how often each statement of your program was executed. This can help you spot parts of your program that were not tested.
### Debugging:

> [!NOTE] Debugging Tips
> 1. Never start changing suspicious code on the hope that the change "might work better".
> 2. Instead, you should discover exactly why a test case is failing and limit your changes to corrections of known errors.
> 3. Once you have corrected a known error, all test cases should be rerun.

## Summary:
-  The first step in producing a program is to write a precise description of what the program is supposed to do.
-  One good method for specifying what a function is supposed to do is provide a precondition and postcondition for the function. These from a contract between the programmer who uses the function and the programmer who writes the function.. Using the assert function to check preconditions can significantly reduce debugging time, and the assertion-check can later be turned of if program speed is a consideration.
-  Understanding and using C++ STL can make program development easier. In addition, studying  the data structures of the STL can help you understand trade-offs between different data structures. When you are designing your own data structures, an approach that is compliant with the STL allows others to more easily understand your work, and your own work will readily benefit from other pieces of the STL.
-  An important testing technique is to identify and test boundary values. These are values that lie on a boundary between different kinds of behavior for your program.
-  A second important testing technique is to ensure that your test cases are fully exercising the code. A software tool called a profiler can aid in fully exercising the code.
-  During debugging, you should discover exactly why a test case is failing and limit your changes to corrections of known errors. Once you have corrected a known error, all test cases should be rerun.
