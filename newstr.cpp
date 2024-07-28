#include <iostream>
#include <string>

using namespace std;

int main() {
    string num1 = "2";
    string num2 = "2";

    // Convert strings to integers
    int num11 = stoi(num1);
    int num12 = stoi(num2);

    // Multiply the integers
    int mul = num11 * num12;

    // Print the result
    cout << "The result is: " << mul << endl;

    // Cast the result to unsigned char (if needed)
    unsigned char result = static_cast<unsigned char>(mul);

    // Print the result as unsigned char
    cout << "The result as unsigned char is: " << static_cast<int>(result) << endl;

    // Return 0 to indicate successful execution
    return 0;
}
