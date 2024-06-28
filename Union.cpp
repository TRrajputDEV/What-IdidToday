#include <iostream>
using namespace std;

int main()
{
    // Theory: A union is a user-defined data type similar to a structure. However, members of a union share the same memory location, meaning only one member can hold a value at any given time. Unions are used when the memory needs to be optimized.
union Data
{
    /* data */
    int intVal;
    float floatVal;
    // std::string strVal;  (This will cause an error in most cases due to non-POD type)
};
    Data data;
    // Assign and print integer value
    data.intVal = 10;
    std::cout << "Integer Value: " << data.intVal << std::endl;

    // Assign and print float value
    data.floatVal = 3.14;
    std::cout << "Float Value: " << data.floatVal << std::endl;
    //learning: In union one memeber can hold the value so when we put data.floatVal=3.14 at line 17 it will give some random number output in terminal for intVal as only one member can use it , assign it then print it ,then again assign it then print it... it will help in optimising the program so that it dont use extra memory.
}