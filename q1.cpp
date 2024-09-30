#include <iostream>
#include<string.h>

// Define the typedef
typedef void (*FuncPtr)(char*, int&);

// Declare the function taking a pointer to character and a reference to integer
void myFunction(char* str, int& num)
{
    num = strlen(str); //set num to length of str
}

// Declare a pointer to such a function
FuncPtr funcPointer;

// Declare a function taking such a pointer as an argument
void anotherFunction(FuncPtr f)
{
    char example[] = "Hello";
    int length;
    f(example, length); // Call the passed function
    std::cout << "Length of string: " << length << std::endl;
}

// Declare a function returning such a pointer
FuncPtr returnFunction()
{
    return myFunction; // Returning the address of myFunction
}

int main() {

    funcPointer =returnFunction(); // Get the function pointer
    anotherFunction(funcPointer); // Call anotherFunction with the pointer
    return 0;
}


