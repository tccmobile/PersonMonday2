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
    char *nickname;
    bool isValidAge(int age);
public:
    string getName() const;
    int getAge() const;
    double getHeight() const;
    void setName(string name);
    void setAge(int age);
    void setHeight(double height);
    Person();
    Person(string name);
    Person(string name, int age, double height, char *nickname);
    Person(const Person &person);
    void hasBirthday();
    void print() const;
    ~Person();
     Person& operator=(const Person &person);
    friend ostream& operator<<(ostream &os, const Person &person);
};


#endif //PERSONMONDAY2_PERSON_H
