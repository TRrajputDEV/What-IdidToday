#include<iostream>
using namespace std;

int main()
{
    /*int a = 4;
    int b = 6;
    cout<<(a&b)<<std::endl; // And simple jo h write in binary and then solve
    cout<<(a|b)<<std::endl;// Or simple
    cout<<(~a)<<std::endl;// not operator 1 phle aaya toh -ve
    cout<<(a^b)<<std::endl;// Xor operator bhai dont take same,(0,1) hoga tabhi 1 nhi toh no (1) only 0
    
    // shift operator
    cout<<(a>>b)<<endl; // point to know always do ~ padding with 0 and by 1 then divide 1 time by 2 then divide 2 times
    cout<<(a>>b)<<endl;
    int n = 10 ;
    
    for(int i = 1; i<=n; i++)
    {
        cout<<i<<" ";
    }*/

    // fibonacci series

    int n = 10;

    int a= 0;
    int b =1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i =1 ; i<= n; i++) // fibo  we do sum of number n = (n-1) + (n-2) so we did the same printed a and b and later we did changed the value to next 
    {
        int NextNumber = a+b;
        cout<<NextNumber<<" ";

        a=b; // here now a =b and b =next this will give next term.
        b=NextNumber;
    }
    cout<<" "<<endl;
    // prime number

    int number ;
    cout<<"Enter the number to check is it prime: ";
    cin>>n;
    bool isPrime =1;
    for(int i = 2; i<n ; i++)// 1 se lekar uss nummber k bich wale usko divide  nhi krne chiye hojyae ga
    {
        if (n%i==0)
        {
            isPrime = 0 ;
            break;
        }
    }

    if (isPrime ==0)
    {
        /* code */
        cout<<" no ";
    }else
    {
        cout<<"yes";
    }
    
    
}