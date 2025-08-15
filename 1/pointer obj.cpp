
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1;           // Create an object
    s1.name = "Alice";
    s1.marks = 90;

    Student *ptr = &s1;   // Pointer storing address of s1

    // Access members using pointer
    ptr->display();
    cout << "Accessing via pointer: " << "Name: "<< ptr->name <<" and Marks: "<< ptr->marks << endl;

    return 0;
}
