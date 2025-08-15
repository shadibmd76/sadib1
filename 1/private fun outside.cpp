#include <iostream>
using namespace std;

class Student {

    string name;
    int marks;

    public:

    Student (string n, int m)
    {
         name = n;
         marks = m;

    }

   void get_var ()
   {
       cout << "Accessing via pointer: " << "Name: "<< name<<" and Marks: "<< marks<< endl;
   }

    void display();
};

void Student :: display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

int main() {
    Student s1("Alice", 90);           // Create an object
    ///s1.n = "Alice";
    ///s1.m= 90;

    Student *ptr = &s1;   // Pointer storing address of s1

    // Access members using pointer
    ptr->display();
    ptr->get_var();

    return 0;
}

