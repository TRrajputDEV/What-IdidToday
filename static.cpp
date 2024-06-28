#include <iostream>

class Counter {
public:
    static int count; // Static data member

    Counter() {
        count++;
    }

    static int getCount() { // Static member function
        return count;
    }
};

// Initialize static data member
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    std::cout << "Count: " << Counter::getCount() << std::endl;

    return 0;
}

/*Static Data Members and Static Member Functions
Theory:

Static Data Members:

Shared among all objects of the class.
Defined outside the class definition.
Static Member Functions:

Can access only static data members.
Called using the class name.*/