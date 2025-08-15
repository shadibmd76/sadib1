#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    string n;  // public mirror
    int m;     // public mirror

    void set_var(string nameVal, int marksVal) {
        name  = nameVal;
        marks = marksVal;
        // keep mirrors in sync
        n = name;
        m = marks;
    }

    void display();
};

void Student::display() {
    cout << "Name: " << name << ", Marks: " << marks << endl;
}

int main() {
    Student s1;
    s1.set_var("Alice", 90);

    Student* ptr = &s1;
    ptr->display();
    cout << "Accessing via pointer: Name: " << ptr->n
         << " and Marks: " << ptr->m << endl;

    return 0;
}

