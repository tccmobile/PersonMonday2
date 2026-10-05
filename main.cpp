#include <iostream>
using namespace std;
#include "Person.h"

void myFunction(Person person) {
    cout<<"Inside myFunction"<<endl;
    person.print();
    person.hasBirthday();
    person.print();
    cout<<"Leaving myFunction"<<endl;
}

int main() {
    Person p1;
    Person p2("Bob Jones");
    Person p3("Bob Taylor",75,64,"Old Man");

    Person* PersonPtr1 = new Person();
    Person* PersonPtr2 = new Person("Sue Cook");
    Person* PersonPtr3 = &p3;

   // PersonPtr2 -> print();
    cout<<"Before myFunction"<<endl;
    p3.print();
    myFunction(p3);
    cout<<"After myFunction"<<endl;
    p3.print();

    p1=p3;
    cout<<p1; // lhs can be file, memory, or network stream

    delete PersonPtr1;
    delete PersonPtr2;
   // delete PersonPtr3;
   /* cout<<"Default Constructor"<<endl;
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
    p4.print(); */

    return 0;
}
