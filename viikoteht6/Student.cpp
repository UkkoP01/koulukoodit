#include "student.h"
#include <iostream>
using namespace std;
Student::Student(string n, int a) {
    cout << "parkonst" << endl;
    name = n;
    age = a;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

void Student::setName(const string &newName)
{

    name = newName;
}

string Student::getName()const
{
    return name;
}

int Student::getAge()const
{
    return age;
}

void Student::printStudentInfo()
{
    cout << "name: " << name << "age: " << age << endl;
}
