#include<iostream>
using namespace std;
// compliemnting of a binary number 
int main()
{
    int n ;
    cout<<" Enter the Number: ";
    cin>> n ;

    int m = n;
    int mask = 0;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    cout<<"Compliment is : "<<ans;
}