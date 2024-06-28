#include<iostream>
using namespace std;

int main()
{
    //Enum for simple learning about it 
    enum color{ 
        Red,    // red=0 and blue = 1, green =2
        blue,
        green
    };
    color coloryoulike; // create object for color
    coloryoulike = blue; // assign the value to the object here the output will be 1 
    cout<<" color 1: "<<coloryoulike<< std::endl; // gettin output

    //Enum can also be used in switch case as it can be used in switch .. when we need to use switch but we have the set of char , string and it cant be used in the switch(case). In that case we use Enum

    // Define an enumeration for the days of the week
    enum DaysOfWeek {
        SUNDAY,    // 0
        MONDAY,    // 1
        TUESDAY,   // 2
        WEDNESDAY, // 3
        THURSDAY,  // 4
        FRIDAY,    // 5
        SATURDAY   // 6
    };
    // Declare a variable of type DaysOfWeek
    DaysOfWeek today;

    // Assign a value to the variable
    today = WEDNESDAY;

    // Use a switch statement to print the day
    switch (today) {
        case SUNDAY:
            std::cout << "Today is Sunday." << std::endl;
            break;
        case MONDAY:
            std::cout << "Today is Monday." << std::endl;
            break;
        case TUESDAY:
            std::cout << "Today is Tuesday." << std::endl;
            break;
        case WEDNESDAY:
            std::cout << "Today is Wednesday." << std::endl;
            break;
        case THURSDAY:
            std::cout << "Today is Thursday." << std::endl;
            break;
        case FRIDAY:
            std::cout << "Today is Friday." << std::endl;
            break;
        case SATURDAY:
            std::cout << "Today is Saturday." << std::endl;
            break;
        default:
            std::cout << "Invalid day." << std::endl;
            break;
    }
    return 0;

}