//
// Created by Arya Parab on 24/06/23.
//

#include "Gym.h"

Gym::Gym(string name){
    this->name = name;
    fillData();
}


void Gym::addMember(Member *member)
{
    //we add member to list of members in gym
    this->members.push_back( new Member(*member) );

    //we add member to the trainer already existing in vector of trainers of gym
    string trainerOfMember = member->getTrainerName();
    for( auto trainer : this->trainers){
        if( trainer->getName() == trainerOfMember) {
            trainer->addMember(member);
            break;
        }
    }
}

void Gym::addTrainer(Trainer *trainer)
{
    this->trainers.push_back(new Trainer (*trainer));
}

void Gym::addExercise(Exercise *exercise)
{
    //pushing a copy of exercise into vector
    Exercise* e1 = exercise->getCopyOfDerivedObj();
    this->exercises.push_back( e1);
}

vector<Trainer*> Gym::getTrainers()
{
    vector<Trainer*> temp;
    for( auto trainer:this->trainers)
    {
        temp.push_back( new Trainer(*trainer));
    }
    return temp;
}

vector<Member*> Gym::getMembers()
{
    vector<Member*> temp;
    for( auto member:this->members)
    {
        temp.push_back( new Member(*member));
    }
    return temp;
}

vector<Exercise*> Gym::getExercises()
{
    vector<Exercise*> temp;
    for( auto exercise:this->exercises)
    {
        Exercise* e1 = exercise->getCopyOfDerivedObj();
        temp.push_back( e1);
    }
    return temp;
}

void Gym::addExerciseToMemberRoutine(  Member* m , Exercise* e ,string day){

    //when adding an exercise to a member
    //shud update the member of gym class
    //and trainer -> member-> add routine

    for( auto member : members){
        if( member->getName() == m->getName()){
            member->addExerciseToRoutine( day , e);
            break;
        }
    }

    for( auto trainer : trainers){
        if( trainer->getName() == m->getTrainerName()){

            trainer->addExerciseToMember(m->getName() , day , e);
            break;
        }

    }
}




void Gym::fillData()
{
    StrengthExercise* s1 = new StrengthExercise( "Bench Press" , "Barbell" , "Chest" , 3 , 15 , 20);
    CardioExercise* c1 = new CardioExercise( "Running" , "Treadmill" , 20  );
    StrengthExercise *s2 = new StrengthExercise( "Front Raise" , "Dumbells" , "Shoulders" , 3 , 14 , 25);
    StrengthExercise* s3 = new StrengthExercise("Side Lateral Raise", "Dumbells", "Shoulders", 3, 14, 18);
    StrengthExercise* s4 = new StrengthExercise("Overhead Press", "Barbell", "Shoulders", 3, 15, 20);


    CardioExercise* c2 = new CardioExercise("Cycling" , "Exercise Bike" , 25);
    CardioExercise* c3 = new CardioExercise( "Climbing" , "Stair Mill" , 15);


    Member* m1 = new Member( "Arya Parab" , "123345" , 50 , "Swapna Gadgil");
    Member* m2 = new Member( "Om Dharme" , "902345" , 60 , "Swapna Gadgil");

    Trainer* t1 = new Trainer("Swapna Gadgil" , "888345" , "Personal");
    m1->addExerciseToRoutine("Monday" , s1);
    m1->addExerciseToRoutine( "Monday" , s2);
    m1->addExerciseToRoutine("Wednesday" , s3);
    m1->addExerciseToRoutine("Thursday" , c2);
    m1->addExerciseToRoutine("Thursday" , s4);
    m1->addExerciseToRoutine("Friday" , c1);

    m2->addExerciseToRoutine("Tuesday" , c1 );
    m2->addExerciseToRoutine("Wednesday" , c2);
    m2->addExerciseToRoutine("Wednesday" , c3);
    m2->addExerciseToRoutine("Thursday" , s1);
    m2->addExerciseToRoutine("Friday" , s2);


    t1->addMember(m1);
    t1->addMember(m2);

    addMember(m1);
    addMember(m2);


    addTrainer(t1);
    addExercise(c1);
    addExercise(s1);
    addExercise(s2);
    addExercise(s3);
    addExercise(s4);
    addExercise(c2);
    addExercise(c3);



}

Trainer* Gym::getTrainerByName(string name)
{
    for( auto trainer: this->trainers)
    {
        if( trainer->getName() == name) {
            return new Trainer(*trainer);
        }
    }
    return NULL;
}