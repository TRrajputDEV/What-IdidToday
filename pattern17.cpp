#include<iostream>
using namespace std;

int main()
{
    int row = 1;
    int n;
    cout<<"Enter the Number: ";
    cin>> n;
    while (row<=n)
    {
        /* code */
        int col =1;
        char ch= 'A'+n-row;
        while (col<=row)
        {
            /* code */
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<"\n";
        row++;
    }
    
}