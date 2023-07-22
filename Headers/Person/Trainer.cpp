
#include "Trainer.h"

Trainer::Trainer(string name , string phoneNo , string type  )
 :Person( name , phoneNo)
{
    this->type = type;

}


Trainer::Trainer(const Trainer& trainer) : Person(trainer.name , trainer.phoneNo)
{
    this->type = trainer.type;
    vector<Member*> temp;
    for( auto member : trainer.members)
    {
        temp.push_back( new Member(*member));
    }
    this->members = temp;

}

void Trainer::print()
{
    cout<<"Name : "<<this->name<<endl;
    cout<<"Phone No : "<<this->phoneNo<<endl;
    cout<<"Type : "<<this->type<<endl;
    cout<<"Members : "<<endl;
    for( auto member:this->members)
    {
        member->print();
        cout<<endl;
    }
}

string Trainer::getType()
{
    return this->type;
}

void Trainer::setType(string type) {
    this->type = type;
}

void Trainer::addMember(Member *member) {

    Member* temp = new Member(*member);
    this->members.push_back(temp);
}

vector<Member*> Trainer::getMembers() {
    vector<Member*> temp;
    for( auto member:this->members)
    {
        temp.push_back(new Member(*member));
    }
    return temp;
}

void Trainer::addExerciseToMember(string name ,string day ,  Exercise* exercise)
{
    for( auto member:this->members)
    {
        if( member->getName() == name)
        {
            member->addExerciseToRoutine(day,exercise);
            break;
        }
    }
}

Trainer::~Trainer() {
    this->members.clear();
}