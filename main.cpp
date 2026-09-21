#include <iostream>
using namespace std;
#include "Person.h"

int main() {
    Person p1;
    Person p2("Bob Jones");
    Person p3("Bob Taylor",75,64);

    cout<<"Default Constructor"<<endl;
    p1.print();
    cout<<endl;

    cout<<"Passing name to constructor"<<endl;
    p2.print();
    cout<<endl;

    cout<<"Passing all values to constructor"<<endl;
    p2.print();
    cout<<endl;

    cout<<"Testing setters"<<endl;
    p1.setName("Sue Cook");
    p1.setAge(45);
    p1.setHeight(50);
    p1.print();
    cout<<endl;

    cout<<"Testing hasBirthday()"<<endl;
    p3.hasBirthday();
    p3.print();
    cout<<endl;

    cout<<"Testing validator"<<endl;
    p2.setAge(-99);
    p2.print();
    cout<<endl;

    Person p4("Jane Jones",-99,62);
    p4.print();

    return 0;
}
