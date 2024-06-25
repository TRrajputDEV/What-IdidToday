#include<iostream>
using namespace std;

int main()
{
    int array[]={1,3,4,5,2,8,9,6,10,7,100,102,101,100}; // created a array.
    int size = sizeof(array)/sizeof(array[0]);// calculating the size of the array !!
    int temp; // creating an temporary variable to store the number.
    for(int i=0 ; i < size-1 ; i++)// iterating through the array.
    {
        for(int j=0 ; j < size-i-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(int i=0 ;i<size;i++)
    {
        cout<<" "<<array[i];
    }
}
































