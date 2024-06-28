#include <iostream>
#include <string>

// Define a class for Students
class Student {
private:
    std::string name;
    int age;
    std::string className;
    std::string location;

public:
    // Constructor to initialize student details using initialization list
    Student(const std::string& n, int a, const std::string& c, const std::string& l)
        : name(n), age(a), className(c), location(l) {}

    // Getter functions to access student details
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    std::string getClassName() const {
        return className;
    }

    std::string getLocation() const {
        return location;
    }
};

// Define a class for Admin
class Admin {
private:
    std::string accessKey="tushar";

public:
    // Constructor to initialize access key using initialization list
    Admin(const std::string& key) : accessKey(key) {}

    // Function to check if the admin is genuine
    bool authenticate(const std::string& key) const {
        return accessKey == key;
    }

    // Function to display student details
    void displayStudentDetails(const Student& s) const {
        std::cout << "Name: " << s.getName() << std::endl;
        std::cout << "Age: " << s.getAge() << std::endl;
        std::cout << "Class: " << s.getClassName() << std::endl;
        std::cout << "Location: " << s.getLocation() << std::endl;
    }
};

int main() {
    // Create a Student object
    Student student1("John Doe", 20, "Grade 12", "New York");

    // Create an Admin object with access key
    Admin admin("secretkey");

    // Check if the admin is genuine
    if (admin.authenticate("secretkey")) {
        // Display student details
        admin.displayStudentDetails(student1);
    } else {
        std::cout << "Invalid access key!" << std::endl;
    }

    return 0;
}
