/*
The line void func(char='*', int=45); is not a valid declaration of a function in C++
due to the placement of the default argument values. Default arguments must be specified
in the function declaration, not the function prototype.In C++, you can provide default
values for function parameters, but they must be defined in the function declaration
(prototype) or the function definition, not both.If you declare it as void func(char='*', int=45);
you will get a compilation error because the compiler does not expect default values in a function prototype.
*/
#include <iostream>
using namespace std;
//Function declaration with default parameters
void func(char c = '*', int num = 45);
//Function definition
void func(char c, int num)
{
    cout << "Character: " << c << ", Number: " << num << endl;
}

int main() {
    func();        // Uses default values
    func('#');    // Uses '#' and default for num
    func('!', 100); // Uses '!' and 100
    return 0;
}
