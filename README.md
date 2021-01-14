# Low-level programming & Algorithm - Hatching out 🤖

This is a repository of low-level Fundamentals created to learn the main principles behind low-level programming, develop logical skills in coding and basic concepts of computer science.

---

**Index**
1. [About the Project](#about-the-project)
1. [Standart Library](#standart-library)
1. [Libraries and Make Files](#installation)
1. [Preprocessor](#preprocessor)
1. [Data Structure and Algorithms](#data-structure-and-algorithms)
1. [Make Files and Libraries](#make-files-and-libraries)
1. [Bit manipulation and File IO](#bit-manipulation-and-file-io)
1. [Author](#author)

---

## About the project.

**What is a low level programing language ?**
 
> A low-level programming language is a programming language that provides little or no abstraction from a computer's instruction set architecture—commands or functions in the language map closely to processor instructions. Generally, this refers to either machine code or assembly language. Because of the low (hence the word) abstraction between the language and machine language, low-level languages are sometimes described as being "close to the hardware". Programs written in low-level languages tend to be relatively non-portable, due to being optimized for a certain type of system architecture. — [Wikipedia](https://en.wikipedia.org/wiki/Low-level_programming_language)

**What is C programing language ?**

C is a general purpose programming language originally developed by Dennis Ritchie between 1969 and 1972 at Bell Laboratories, as an evolution of the previous B language, itself based on BCPL.

**Why C programing language ?**

C will give you a better understanding of how memory works and what is happening behind high mild languages like python or javascript.

## Standart Library 📁
This Project series is created to get the first look into the C language by creating the most populars functions found in the standard library
### [1. Hello World](./0x00-hello_world)
Achieved knowledges:
* entry point
* What is main
* How to compile using gcc
* How to find the right header to include in your source code

### [2. Variables and conditionals](./0x01-variables_if_else_while)
Achieved Knowledges:
* Aritmetic operators
* Logical operators
* Relational operators
* Booleans
* Conditions
* Variables of types char, int, unsigned int
* What is the ASCII character set
* What are the purpose of the gcc flags -m32 and -m64

### [3. Functions and neested loops](./0x02-functions_nested_loops)
Achieved Knowledges:

* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration* and a definition of a function
* What is a prototype
* Scope of variables

### [4. Debugging](./0x03-debugging)
Achieved Knowledges:
* What is debugging
* What are some methods of debugging manually
* How to read the error messages

### [5. Pointers, Arrays, Strings](./0x05-pointers_arrays_strings)
Achieved Knowledges:
* What are pointers and how to use them
* What are arrays and how to use them
* What are the differences between pointers and arrays
* How to use strings and how to manipulate them
* Scope of variables

### [6. More pointers, arrays and strings](./0x06-pointers_arrays_strings)
Achieved Knowledges:
* Pointers
* Arrays
* Strings

### [7. Even more pointers, arrays and strings](./0x07-pointers_arrays_strings)
Achieved Knowledges:
* What are pointers to pointers and how to use them
* What are multidimensional arrays and how to use them
* What are the most common C standard library functions to manipulate strings

### [8. Recursion](./0x08-recursion)
Achieved Knowledges:
* What is recursion
* How to implement recursion
* In what situations you should implement
recursion
* In what situations you shouldn’t implement recursion

### [9. Argc, Argv](./0x0A-argc_argv)
Achieved Knowledges:
* How to use arguments passed to your program
* What are two prototypes of main that you know of, and in which case do you use one or the other
* How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

### [9. Malloc, Free](./0x0B-malloc_free)
Achieved Knowledges:
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

### [10. Malloc, Free](./0x0C-more_malloc_free)
Achieved Knowledges:
* How to use the exit function
* What are the functions calloc and realloc from the standard library and how to use them

### [11. Structures, typedef](./0x0E-structures_typedef)
Achieved Knowledges:
* What are structures, when, why and how to use them
* How to use typedef

### [12. Function pointers](./0x0F-function_pointers)
Achieved Knowledges:
* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

### [13. Variadic functions](./0x10-variadic_functions)
Achieved Knowledges:
* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier

---

## Preprocessor 📁
How to take advantage of the compiller preprocessor phase
### [1. Preprocessor](./0x0D-preprocessor)
Achieved Knowledges:
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

---

## Data Structure and Algorithms 📁
Algorithms and data structures are generally created independent of underlying languages, most of the complex structures found in high level languages are created in C

### [1. Singly linked lists](./0x12-singly_linked_lists)
Achieved Knowledges:
* When and why using linked lists vs arrays
* How to build and use linked lists

### [2. Singly linked lists](./0x13-more_singly_linked_lists)
Achieved Knowledges:
* How to use linked lists
* Start to look for the right source of information without too much help

### [3. Doubly linked lists](./0x13-more_singly_linked_lists)
Achieved Knowledges:
* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

### [4. Hash tables](./0x1A-hash_tables)
Achieved Knowledges:
* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables

---

## Make Files and Libraries 📁
### [1. Static libraries](./0x09-static_libraries)
Achieved Knowledges:
* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

### [2. Dynamic libraries](./0x18-dynamic_libraries)
* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

### [3. Makefiles](./0x1C-makefiles)
* What are make, Makefiles
* When, why and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common / useful rules
* What are variables and how to set and use them

### [4. FIFO and LIFO](https://github.com/MiguelP4lacios/monty)
* Monty is a interpreted language which manage LIFO and FIFO
* What do LIFO and FIFO mean
* What is a stack, and when to use it
* What is a queue, and when to use it
* What is the proper way to use global variables

### [5. Sorting_algorithms](https://github.com/MiguelP4lacios/sorting_algorithms)
* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

### [6. Binary trees](https://github.com/MiguelP4lacios/binary_trees)
* What is a binary tree
    What is the difference between a binary tree and a Binary Search Tree
    What is the possible gain in terms of time complexity compared to linked lists
    What are the depth, the height, the size of a binary tree
    What are the different traversal methods to go through a binary tree
    What is a complete, a full, a perfect, a balanced binary tree

### [7. Search Algorithms](0x1E-search_algorithms)
* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs


---

## Bit manipulation and File IO 📁
Apart from some assembler files in the projects, this is one of the most low level projects in which the memory will be accessed managin his binary numbers and at the same time file descriptors will be used to create a shell interpreter.

### [1. Bit manipulation](./0x14-bit_manipulation)
Achieved Knowledges:
* Look for the right source of information without too much help
* How to manipulate bits and use bitwise operators

### [2. File I/O](./0x15-file_io)
Achieved Knowledges:
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
0x09

### [3. Simple Shell](https://github.com/MiguelP4lacios/simple_shell)
A simple shell is a program that takes input from you in the form of commands, processes it, and then gives an output. It is the interface through which a user works on the programs and commands.

---

## Author
* **Miguel Palacios** - [MiguelP4lacios](https://github.com/MiguelP4lacios)




