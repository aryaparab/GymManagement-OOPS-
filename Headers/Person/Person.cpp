
#include "Person.h"

Person::Person(string name ,string phoneNo) {
    this->name = name;
    this->phoneNo = phoneNo;
}


void Person::setName(string name){
    this->name = name;
}

void Person::setPhoneNo(string phoneNo){
    this->phoneNo = phoneNo;

}
string Person:: getName()
{
    return this->name;
}

string Person::getPhoneNo()
{
    return this->phoneNo;
}
