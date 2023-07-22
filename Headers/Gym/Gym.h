//
// Created by Arya Parab on 24/06/23.
//

#ifndef GYMMANAGEMENT_GYM_H
#define GYMMANAGEMENT_GYM_H

#include "./../Person/Trainer.h"
#include "./../Person/Member.h"
#include "./../Exercise/Exercise.h"


class Gym {
    string name;
    vector<Trainer*> trainers;
    vector<Member*> members;
    vector<Exercise*> exercises;

public:
    Gym(string name);
    void addTrainer(Trainer* trainer);
    void addMember(Member* member);
    void addExercise(Exercise* exercise);
    vector<Trainer*> getTrainers();
    vector<Member*> getMembers();
    vector<Exercise*> getExercises();
    void fillData();
    void addExerciseToMemberRoutine(  Member* m , Exercise* e ,string day);
    Trainer* getTrainerByName(string name);

};


#endif //GYMMANAGEMENT_GYM_H
