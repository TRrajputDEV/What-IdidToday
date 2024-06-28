#include<iostream>
using namespace std;

int main()
{
    //struct: Structures (struct):Similar to classes but with all members public by default , Used to group related variables.
    struct aboutStud
    {
        /* data */
        std:: string name;
        int age;
        double cgpa;
    };

    aboutStud student1;// (creating student object)
    student1.age=20;// assisning AGE
    student1.cgpa=7.53;// assigning cgpa
    student1.name="Tushar Tanwar";// assigning name

    cout<<"Name: "<<student1.name<<std::endl;
    cout<<"age: "<<student1.age<<std::endl;
    cout<<"cgpa: "<<student1.cgpa<<std::endl;
    return 0;
}