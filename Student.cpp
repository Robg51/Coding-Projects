#pragma once

#include <iostream>

#include "Student.h"

Student::Student(){}

Student::Student(string n, int nc) {

}

void Student::input() {
    cout << "Enter the name of the student:\n";
    cin >> name;
    cout << "How many classes does " << name << " have?\n";
    cin >> numClasses;
    classList.resize(numClasses);
    for (int i = 0; i < numClasses; i++) {
        cout << "Enter the " << i + 1 << "th class of " << name << ": \n";
        cin >> classList[i];
    }
}
void Student::output() {
    cout << name << " has " << numClasses << " classes:" << endl;
    for (int i = 0; i < numClasses; i++) {
        cout << "    " << i + 1 << ": " << classList[i] << endl;
    }
}

void Student::reset() {
    name.clear();
    numClasses = 0;
    classList.resize(0);
}

void Student::setName(string n) {
    name = n;
}

string Student::getName() {
    return name;
}

void Student::setNumClasses(int nc) {
    numClasses = nc;
    classList.resize(numClasses);
}

int Student::getNumClasses() {
    return numClasses;
}

int main() {
    Student s1;
    string ans;
    do{
        s1.input();
        s1.output();
        cout << "would you like to enter in new student data? 'y' for yes 'n' for no.\n";
        s1.reset();
        cin >> ans;
    } while (ans == "y");
}