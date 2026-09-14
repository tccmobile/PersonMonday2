//
// Created by Will Smith on 9/14/26.
//

#include "Person.h"

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
    this->age = age;
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
    this->age = age;
    this->height = height;
}

void Person::hasBirthday() {
    age++;
}
