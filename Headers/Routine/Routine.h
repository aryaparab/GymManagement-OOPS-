//
// Created by Arya Parab on 26/06/23.
//

#ifndef GYMMANAGEMENT_ROUTINE_H
#define GYMMANAGEMENT_ROUTINE_H
#include "./../Exercise/Exercise.h"
#include "./../Exercise/StrengthExercise.h"
#include "./../Exercise/CardioExercise.h"

class Routine {
    vector<Exercise*> mon;
    vector<Exercise*> tue;
    vector<Exercise*> wed;
    vector<Exercise*> thu;
    vector<Exercise*> fri;
    vector<Exercise*> sat;
    vector<Exercise*>& returnThis(string day);


public:
    Routine();
    vector<Exercise*> getRoutineOfDay(string day );
    Routine(const Routine &routine);
    //vector<Exercise*>& returnThis(string day);


    void setRoutineOfDay( string day , vector<Exercise*> exercise);
    void addExerciseToDay( string day ,  Exercise* exercise);
    void printExercisesOfDay(string day);
    void print();
    ~Routine();
};


#endif //GYMMANAGEMENT_ROUTINE_H
