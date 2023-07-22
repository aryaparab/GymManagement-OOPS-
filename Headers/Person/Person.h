

#ifndef GYMMANAGEMENT_PERSON_H
#define GYMMANAGEMENT_PERSON_H
#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    string phoneNo;

public:
    Person(string name, string phoneNo);
    virtual void print() = 0;
    void setName(string name);
    void setPhoneNo(string phoneNo);
    string getName();
    string getPhoneNo();
};


#endif //GYMMANAGEMENT_PERSON_H
