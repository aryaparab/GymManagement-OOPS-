//
// Created by Arya Parab on 26/06/23.
//

#include "CardioExercise.h"

CardioExercise::CardioExercise(string name, string equipment, int time) : Exercise(name, "Cardio", equipment) {
    this->time = time;
}
void CardioExercise::print() {
    cout<<"Name : "<<this->name<<endl;
    cout<<"Type : "<<this->type<<endl;
    cout<<"Equipment : "<<this->equipment<<endl;
    cout<<"Time : "<<this->time<<endl;
}
int CardioExercise::getTime()
{
    return this->time;
}

void  CardioExercise::setTime(int time)
{
    this->time = time;
}

Exercise* CardioExercise:: getCopyOfDerivedObj()
{
    CardioExercise* cardioPtr = dynamic_cast<CardioExercise*>(this);
    CardioExercise* cardioObj = new CardioExercise(*cardioPtr);
    return cardioObj;
}
