#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2, 2,  3};
    unordered_map<int , int > freq;

    for(int num : nums)
    {
        freq[num]++;
    }

    // printing frequency 

    for(auto pair : freq)
    {
        cout<< "Element: "<< pair.first << " have frequency : " << pair.second << endl;
    }

    // lets do custom sorting 
    // simple sorting
    sort(nums.begin(), nums.end() , [&] (int n1, int n2)
    {
        if(freq[n1] != freq[n2])
        {
            return freq[n1] < freq[n2]; // freq  same na hai toh toh freq k hisab t increasing order and 
        }
        else{
            return n2 < n1 ; // number k hisab t krde bhia
        }
    });





    for(int i = 0 ; i < nums.size() ; i++)
    {
        cout << nums[i] << " ";
    }

}