#include<iostream>
using namespace std;

int main()
{
    int a =1 ; // this have full main block can be accessed in complete code
    cout<< a << std::endl;
    if (true)
    {
        /* code */
        int a = 5; // this a = 5 is in the block of if so it have only that scope  
        cout<< a << endl;
    }
    // operator precedence: koi need nhi hai bs apna bracket ache se lagana ()
}