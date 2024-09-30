/*
The output will be:
3 4 5 6 7
13 14 15 16 17
23 24 25 26 27

Yes, it is valid to pass a 2D array to a function without passing the first dimension. Here’s why:
In C++, 2D arrays are stored in contiguous memory. The compiler needs to know the size of the second
dimension to correctly calculate the address of each element.
When you pass an array to a function, it decays into a pointer to the first element
(in this case, a pointer to the first row of the 2D array). The function needs to know
the size of the second dimension to properly index into the array.
*/

#include <iostream>
/*
The function takes a 2D array m of unspecified first dimension but with a fixed
second dimension of size 5.
It also takes dim1, which specifies how many rows of the array will be processed.
Inside the function, each element of the array is incremented by 2.
*/
void f1(int m[][5], int dim1)
{
    for(unsigned int i = 0; i < dim1; i++)
    {
        for(unsigned int j = 0; j < 5; j++)
        {
            m[i][j] = m[i][j] + 2;  // Increment each element by 2
        }

    }

}
/*
A 2D array m is initialized with 3 rows and 5 columns.
The function f1 is called with m and the number of rows (3).
After returning from f1, a nested loop prints out the modified values of the array.
*/
int main() {
    // Initialize a 2D array.
    int m[3][5] = {{1, 2, 3, 4, 5}, {11, 12, 13, 14, 15}, {21, 22, 23, 34, 25}};

    // Call function f1 to modify the array.
    f1(m, 3);

    // Print the modified array.
    for(unsigned int i = 0; i < 3; i++)
    {
        for(unsigned int j = 0; j < 5; j++)
        {
            std::cout << m[i][j] << " ";
        }

        std::cout << "\n";
    }
}
