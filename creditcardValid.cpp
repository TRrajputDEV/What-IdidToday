#include <iostream>
#include <string> 
// We are going to use the Luhn Algorithm
using namespace std;

// Function declarations
int getDigit(const int number);
int sumOddDigits(const std::string& cardNumber); // Changed to pass by reference
int sumEvenDigits(const std::string& cardNumber); // Changed to pass by reference

// Main function
int main()
{
    std::string cardNumber;
    int result;

    std::cout << "Enter the Card Number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);
    if(result % 10 == 0)
    {
        std::cout << cardNumber << " is valid.";
    }
    else
    {
        std::cout << cardNumber << " is invalid.";
    }
    return 0;
}

// Function definitions
int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}

int sumOddDigits(const std::string& cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 1; i >= 0; i -= 2) // As we wanted all odd positions
    {
        sum += cardNumber[i] - '0';
    }
    return sum; 
}

int sumEvenDigits(const std::string& cardNumber)
{
    int sum = 0;
    for(int i = cardNumber.size() - 2; i >= 0; i -= 2) // As we wanted all even positions
    {
        sum += getDigit((cardNumber[i] - '0') * 2);
    }
    return sum;
}
