# CSDP250_Project2
A program that utilizes linked lists (Both Queues and Stacks) to convert a given fractional number to binary.

Decimal to Binary Converter Program 

Overview:
This program converts any positive decimal number to its binary representation. It handles both 
the integer and fractional parts of the decimal number. Users can specify the number of binary 
digits (precision) they want after the decimal point for fractional values. 


Key Features:
 - Converts any positive decimal number to binary.
 - Uses a stack (linked list) for the integer part conversion.
 - Uses a queue (linked list) with recursion for the fractional part conversion.
 - Allows users to specify precision for the fractional part. 


Files:
 - “main.cpp”: Contains the main program logic for user input and output.
 - “pre_decimalStack.h” and “pre_decimalStack.cpp”: Define and implement the “BinaryStack” class to manage the integer part conversion.
 - “post_decimalQueue.h” and “post_decimalQueue.cpp”: Define and implement the “BinaryQueue” class for the fractional part conversion.
 - “README.md”: This file, providing an overview/ explanation of the program. 


Program Structure:
The program is divided into the following components:
 - BinaryStack: Uses a linked list to implement a stack that holds binary digits of the integer part.
 - BinaryQueue: Uses a linked list to implement a queue for binary digits of the fractional part and includes a recursive function for handling the fractional conversion. 


Program Logic:
Integer Part Conversion: Uses a recursive function to convert the integer part of the number to binary, storing each binary digit in a stack. 
Fractional Part Conversion: Multiplies the fractional part by 2, retrieves the integer part of the result as a binary digit, and enqueues it. This is done recursively until the specified precision is reached. 


Error Handling:
Ensures only positive numbers are entered. 
Limits fractional precision to a user-specified range (1-10).
