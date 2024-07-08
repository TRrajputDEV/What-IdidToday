#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //to change a number in binary divide it by 2 and store the remender every time till the number become zero
    // if num & 1 = 1 then its odd number . and if num & 1 = 0 then even.

    //code to convert into binary.


   int n; 
   cin >> n; // taking input of the number to change into binary

   float ans = 0; // taking ans initialised with ans = 0 to store 
   int i = 0; // power is always started with 0 for unit place in binary
   while(n != 0) // till the number became zero(0)
   {
    int bit = n & 1; // taking last  binary bit.
    ans = (bit * pow(10, i)) + ans; // changin it to binary with this formula.
    n = n >> 1 ; // shifting to next digit.
    i++;// increasing the value of power till each iteration.
   }
    cout<<" Answer is: "<< ans<< endl;


}