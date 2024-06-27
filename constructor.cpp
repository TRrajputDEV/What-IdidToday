//GOD CREATED COMPILERS BEFORE HUMANS
//getter : make a private attribute READABLE
//setter: make  a private attribute WRITABLE
#include<iostream>
using namespace std;

class Isstudent
{
    public: //here it can access it globally
        bool IsStudent= true;
    void Stud()//this is a method defined here 
    {
        std:: cout<< " Yes He/She belongs to the University";
    }


};
class student : public Isstudent // here is the use of innheritence in c++
{
    private://this is an private domain now variable defined inside this cant be accessed outside the class
    int hidden = 6969;// here this number is hidden from the user this is abstraction!!
    public:
        std:: string name;
        int age;
        double cgpa;
    student(std:: string name , int age, double cgpa)// here this is an constructor ...
    {
        this->name= name;
        this->age = age;
        this-> cgpa= cgpa;
    }
    int getHidden()// this is to get the hidden value !!
    {
        return hidden;
    }
    void sethidden(int hidden) // set hiden!!! bro
    {
        this->hidden=hidden;
    }

};

// main 
int main()
{
    std:: string name;
    int age;
    double cgpa;
    cout<<"Enter The name of the student: ";
    std:: getline(std:: cin, name);
    cout<<"Enter the Age of the student: ";
    cin>>age;
    cout<<"Enter the cgpa: ";
    cin>> cgpa;
    // create instances of  class
    student student1(name,age,cgpa);

    student student2(name="Rahul",age,cgpa);

    cout<< student1.name<< std::endl;
    cout<< student1.age<< std::endl;
    cout<< student1.cgpa<< std::endl;
    cout<< student2.name<< std::endl;
    cout<< student2.age<< std::endl;
    cout<< student2.cgpa<< std::endl;

    cout<<student1.getHidden();


    return 0;
}