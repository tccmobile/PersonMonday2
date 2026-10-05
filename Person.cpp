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
    nickname = new char[strlen("Bubba") + 1];
    strcpy(nickname, "Bubba");
    cout<<"Constructing Person: "<<name<<endl;
}

Person::Person(string name) {
    this->name = name;
    age = 42;
    height = 68;
    nickname = new char[strlen("Runt") + 1];
    strcpy(nickname, "Runt");
    cout<<"Constructing Person: "<<name<<endl;
}

Person::Person(string name, int age, double height, char *nickname) {
    this->name = name;

    if (isValidAge(age)) {
        this->age = age;
    } else {
        cout<<"Invalid age: "<<age<<endl;
        cout<<"Assigning default value"<<endl;
        this->age = 42;
    }

    this->height = height;
    this->nickname = new char[strlen(nickname) + 1];
    strcpy(this->nickname, nickname);
    cout<<"Constructing Person: "<<name<<endl;
}

Person::Person(const Person &person) {
    this->name = person.name;
    this->age = person.age;
    this->height = person.height;
    this->nickname = new char[strlen(person.nickname) + 1];
    strcpy(this->nickname, person.nickname);
    cout<<"Constructing Person: "<<name<<endl;
}

void Person::hasBirthday() {
    age++;
}

void Person::print() const {
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<endl;
    cout<<"Nickname: "<<nickname<<endl;
}

Person::~Person() {
    cout<<"Destructing Person: "<<name<<endl;
    delete[] nickname;
}

Person & Person::operator=(const Person &person) {
    if (this != &person) {
        this->name = person.name;
        this->age = person.age;
        this->height = person.height;
        this->nickname = new char[strlen(person.nickname) + 1];
        strcpy(this->nickname, person.nickname);
    }
    return *this;
}


ostream & operator<<(ostream &os, const Person &person) {
    os<<"Name: "<<person.name<<endl;
    os<<"Age: "<<person.age<<endl;
    os<<"Height: "<<person.height<<endl;
    os<<"Nickname: "<<person.nickname<<endl;
    return os;
}
