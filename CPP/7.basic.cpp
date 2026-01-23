#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    int roll;
    string course;

    public:
    Student(string name, int roll, string course) {
        this->name = name;
        this->roll = roll;
        this->course = course;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {

    Student s1("Rem", 9, "Mana");
    s1.display();
    cout << endl;
    Student *s2 = new Student("Ram", 10, "Magus");
    s2->display();

    return 0;
}