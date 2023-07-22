//
// Created by Arya Parab on 26/06/23.
//

#ifndef GYMMANAGEMENT_CARDIOEXERCISE_H
#define GYMMANAGEMENT_CARDIOEXERCISE_H



#include "Exercise.h"

class CardioExercise : public Exercise {
    int time;

public:
    CardioExercise(string name, string equipment, int time);

    void print();
    int getTime();
    void setTime(int time);
    Exercise* getCopyOfDerivedObj();

};

#endif //GYMMANAGEMENT_CARDIOEXERCISE_H
