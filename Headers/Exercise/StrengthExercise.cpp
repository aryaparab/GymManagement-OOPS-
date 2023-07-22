//
// Created by Arya Parab on 26/06/23.
//


#include "StrengthExercise.h"

StrengthExercise::StrengthExercise(string name, string equipment, string bodyPart, int numSets, int numReps,
                                   int avgTime) : Exercise(name, "Strength", equipment) {
    this->bodyPart = bodyPart;
    this->numSets = numSets;
    this->numReps = numReps;
    this->avgTime = avgTime;
}

void StrengthExercise::print() {
    cout<<"Name : "<<this->name<<endl;
    cout<<"Type : "<<this->type<<endl;
    cout<<"Equipment : "<<this->equipment<<endl;
    cout<<"BodyPart : "<<this->bodyPart<<endl;
    cout<<"Number of sets : "<<this->numSets<<endl;
    cout<<"Number of rets : "<<this->numReps<<endl;
    cout<<"Average Time : "<<this->avgTime<<endl;
}

string StrengthExercise::getBodyPart()
{
    return this->bodyPart;
}

int StrengthExercise::getNumSets()
{
    return this->numSets;
}

int StrengthExercise::getNumReps()
{
    return this->numReps;
}

int StrengthExercise::getAvgTime()
{
    return this->avgTime;
}

void StrengthExercise::setBodyPart(const string& bodyPart)
{
    this->bodyPart = bodyPart;
}

void StrengthExercise::setNumSets(int numSets)
{
    this->numSets = numSets;
}

void StrengthExercise::setNumReps(int numReps)
{
    this-> numReps = numReps;
}

void StrengthExercise::setAvgTime( int avgTime)
{
    this->avgTime = avgTime;
}

Exercise* StrengthExercise:: getCopyOfDerivedObj()
{
    StrengthExercise* strengthPtr = dynamic_cast<StrengthExercise*>(this);
    //downcast from exercise to strengthexercise then create the object we return as an exercise compiler knows it is se
    StrengthExercise* strengthObj = new StrengthExercise(*strengthPtr);
    return strengthObj;
}
