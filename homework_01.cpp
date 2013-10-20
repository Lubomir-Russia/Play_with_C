// Homework 1: Convert a C program to C++
// change to C++ io
// change to one line comments
// change defines of constants to const
// change array to vector<>
// inline any short function
 
// C original code is shown for reference at the end-line comments.

#include <iostream>     // #include <stdio.h>
#include <vector>

using namespace std;
const int Number_of_elements = 40;       // #define N 40

// Sum the elements of a vector (array)
// argument "accum" is passed by reference
inline void sum(int& accum, int Number_of_elements, vector<int> data)
{
    accum = 0;
    for(int i = 0; i < Number_of_elements; ++i)
        accum = accum + data[i];
}

int main()
{
    int accum = 0;
    vector<int> data(Number_of_elements);    // int data[N];
    for(int i = 0; i < Number_of_elements; ++i)
        data[i] = i;

    sum(accum, Number_of_elements, data);
    cout << "sum is " << accum << endl;  // printf("sum is %d\n", accum);
    return 0;
}
