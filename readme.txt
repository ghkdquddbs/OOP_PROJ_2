###Overview###
This project implements an inf_int class in C++ for handling and displaying infinite precision integers. 
This class allows the storage and representation of large integers that exceed the standard limits of built-in integer types, such as int and long. 
The inf_int class provides basic functionality for managing and printing large integer values, with no arithmetic operations implemented.

###Files###
>>inf_int.h: Header file defining the inf_int class. It includes constructors, destructors, and an overloaded << operator for printing large integers.
>>inf_int.cpp: Implementation of the inf_int class. This file contains the necessary code to manage dynamic memory allocation for storing large integers and to properly display these integers when requested.
>>main.cpp: A simple test file that creates instances of inf_int and prints them to demonstrate the ability to store and display large integers.

###Features###
>>Large Integer Representation: Stores integers as large as the available memory allows, enabling representation of very large numbers.
>>Dynamic Memory Management: Uses dynamic allocation to store the digits of large numbers in reverse order, allowing flexibility in integer size.
>>Operator Overloading for Output: Overloads the << operator to allow easy printing of inf_int objects.

#Compilation
To compile the program, use the following command:
>>g++ main.cpp inf_int.cpp -o inf_int_printer

#Execution
To run the program, use the command:
>>.\inf_int_printer
The program will output examples of large integers stored and printed using the inf_int class.

#Remove .exe file
To remove .exe file, use the command:
>>del inf_int_printer.exe

###Example Output###
The program in main.cpp demonstrates the creation and output of large integers. Sample output may look like this:
b : 100
c : 321111111111122222222222233333333333444444444445555555555
d : 123451987651234572749499923455022211

###Notes###
Ensure that inf_int.h, inf_int.cpp, and main.cpp are in the same directory for compilation.
This version of the inf_int class does not include any arithmetic operations (e.g., addition, subtraction, multiplication) and is solely for printing large integers.
