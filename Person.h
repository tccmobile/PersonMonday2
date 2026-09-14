//
// Created by Will Smith on 9/14/26.
//

#ifndef PERSONMONDAY2_PERSON_H
#define PERSONMONDAY2_PERSON_H
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    double height;
public:
    string getName() const;
    int getAge() const;
    double getHeight() const;
    void setName(string name);
    void setAge(int age);
    void setHeight(double height);
    Person();
    Person(string name);
    Person(string name, int age, double height);
    void hasBirthday();
};


#endif //PERSONMONDAY2_PERSON_H
