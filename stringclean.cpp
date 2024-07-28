#include<iostream>
#include<string>
#include<cctype>

using namespace std;


string cleanAndReverseString(string &str)
{
    string cleanstr;
    for(char ch : str)
    {
        if(isalnum(static_cast<unsigned char>(ch)))
        {
            cleanstr += tolower(static_cast<unsigned char>(ch));
        }
    }

    return cleanstr;
}

int main()
{
    std::string input = "Hello, World! 123";
    
    // Clean and reverse the string
    string result = cleanAndReverseString(input);
    
    // Output the result
    cout << "Original: " << input <<endl;
    cout << "Cleaned and Reversed: " << result <<endl;
}
