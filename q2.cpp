/*What does the following mean? What would it be good for?
typedef int (&rifii) (int, int);*/

/*typedef: This keyword is used to create an alias for an existing type.
int (&rifii): This part specifies that rifii is a reference type. The & indicates that it is a reference to a function.
(int, int): These are the parameter types of the function being referenced. In this case, the function takes two int arguments.*/
#include <iostream>
using namespace std;
// Define the typedef
typedef int (&rifii)(int, int);
int add(int a, int b)
{
    return a + b;
}

//function taking rifii as a parameter
void userFunction(rifii func, int x, int y)
{
    cout<< "Result: " << func(x, y) <<endl;
}

int main()
{
    // Use the reference to function
    userFunction(add, 8, 19); // Output: Result: 27
    return 0;
}
