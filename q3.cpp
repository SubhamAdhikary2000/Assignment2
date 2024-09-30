#include <iostream>
using namespace std;

// Global variable to count the calls
int callCount = 0;

// Function using a global variable
/*
The callCount variable is declared globally, meaning it can be accessed and modified from anywhere in the program.
This approach is straightforward and allows for easy tracking of calls.
Drawback: Using global variables can lead to issues with name collisions and make debugging more difficult.
It also introduces the risk of unintended modifications from other parts of the code.
*/
void countCallsGlobal()
{
    callCount++;
    cout << "I have been called " << callCount << " times" << endl;
}
// Function using a local static variable
/*
The callCount variable is declared as static, meaning it retains its value between
function calls, but it is only accessible within the function.
This encapsulates the counting logic, preventing external code from altering callCount.
Benefit: This method reduces the risk of name collisions and makes the code more modular and easier to maintain.
*/
void countCallsStatic()
{
    static int callCount = 0; // Static local variable
    callCount++;
    cout << "I have been called " << callCount << " times" << endl;
}
/*
A local variable would reset its value every time the function is called.
Therefore, it wouldn’t be able to keep track of the number of calls accurately.
*/
int main()
{
    // Call the function at least 10 times
    for (int i = 0; i < 10; ++i)
    {
        countCallsGlobal();
    }
    // Call the function at least 10 times
    for (int i = 0; i < 10; ++i)
    {
        countCallsStatic();
    }
    return 0;
}
