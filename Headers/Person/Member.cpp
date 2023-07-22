
#include "Member.h"
Member::Member( string name , string phoneNo , int weight , string trainerName ) :
Person(name , phoneNo ) {
    this->weight = weight;
    this->trainerName = trainerName;
    this->routine = new Routine();

}
//derived copy constructor calls the base class constructor
Member::Member( const Member& member) :Person(member.name , member.phoneNo)
{

    this->weight = member.weight;
    this->trainerName = member.trainerName;
    this->routine = new Routine(*member.routine);

}


void Member::setWeight(int weight)
{
    this->weight = weight;
}

void Member::setTrainerName(string trainerName)
{
    this->trainerName = trainerName;
}


//in
void Member::setRoutine(Routine* routine)
{
    delete this->routine;
    Routine* r1 = new Routine(*routine);
    this->routine = r1;
}


int Member::getWeight()
{
    return this->weight;
}

string Member::getTrainerName()
{
    return this->trainerName;
}

Routine* Member:: getRoutine()
{
    Routine* temp = new Routine(*this->routine);
    return temp;
}

void Member::addExerciseToRoutine( string day , Exercise* ex)
{
    this->routine->addExerciseToDay( day , ex);
}

vector<Exercise*> Member::getExercisesOfDay( string day)
{
    return this->routine->getRoutineOfDay(day);

}

void Member::setExercisesToRoutine(string day , vector<Exercise*> ex)
{
    this->routine->setRoutineOfDay(day,ex);
}

void Member::print() {

    cout<<"Name : "<<this->name<<endl;
    cout<<"Phone no : "<<this->phoneNo<<endl;
    cout<<"Weight : "<<this->weight<<endl;
    cout<<"Trainer Name : "<<this->trainerName<<endl;
    this->routine->print();
}

Member::~Member(){
    delete this->routine;
}
