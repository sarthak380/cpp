#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
    }
    void displayDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    string name;
    int roll;
    float marks;

    cout << "Enter student's name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> roll;

    cout << "Enter marks: ";
    cin >> marks;
    Student s(name, roll, marks);
    cout << "\nStudent Details" << endl;
    s.displayDetails();

    return 0;
}

