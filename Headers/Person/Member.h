

#ifndef GYMMANAGEMENT_MEMBER_H
#define GYMMANAGEMENT_MEMBER_H

#include "Person.h"
#include "./../Routine/Routine.h"

using namespace std;

class Member : public Person {

    int weight;
    string trainerName;
    Routine* routine;

public:
    Member( string name , string phoneNo , int weight , string trainerName ) ;
    Member(const Member& member);

    void addExerciseToRoutine( string day , Exercise* ex);
    vector<Exercise*> getExercisesOfDay( string day);
    void setExercisesToRoutine(string day , vector<Exercise*> ex);

    void setWeight(int weight);
    void setTrainerName(string trainerName);
    void setRoutine(Routine* routine);
    int getWeight();
    string getTrainerName();
    Routine* getRoutine();
    void print();
    ~Member();

};


#endif //GYMMANAGEMENT_MEMBER_H
