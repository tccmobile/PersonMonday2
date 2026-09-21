//
// Created by Will Smith on 9/14/26.
//

#include "Person.h"

#include <iostream>
#include <ostream>

bool Person::isValidAge(int age) {
    if (age > 0) {
        return true;
    } else {
        return false;
    }
}

string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

double Person::getHeight() const {
    return height;
}

void Person::setName(string name) {
    this->name = name;
}

void Person::setAge(int age) {
    if (isValidAge(age)) {
        this->age = age;
    } else {
        cout<<"Invalid age: "<<age<<endl;
    }

}

void Person::setHeight(double height) {
    this->height = height;
}


Person::Person() {
    name = "John Doe";
    age = 42;
    height = 68;
}

Person::Person(string name) {
    this->name = name;
    age = 42;
    height = 68;
}

Person::Person(string name, int age, double height) {
    this->name = name;

    if (isValidAge(age)) {
        this->age = age;
    } else {
        cout<<"Invalid age: "<<age<<endl;
        cout<<"Assigning default value"<<endl;
        this->age = 42;
    }

    this->height = height;
}

void Person::hasBirthday() {
    age++;
}

void Person::print() const {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<endl;
}
