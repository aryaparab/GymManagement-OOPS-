//
// Created by Arya Parab on 08/07/23.
//

#ifndef GYMMANAGEMENT_TRAINERINTERFACE_H
#define GYMMANAGEMENT_TRAINERINTERFACE_H
#include "./../Headers/Gym/Gym.h"



bool displayMemberInterface( Member* m);
bool addMemberInterface( Gym* g, Member* m);
bool getMemberInterface( Gym* g , Trainer* t);
bool addExerciseToRoutine( Gym* g , Member* m , Exercise* e , string day);
bool chooseDayInterface(  Gym* g ,Member* m , Exercise* ex);
bool chooseExerciseInterface( Gym* g , Member* m );
bool updateRoutineInterface(Gym* g, Member* m);
bool memberFunctionInterface( Gym* g ,Member* m);
bool accessMembersInterface(Gym* g , Trainer* t);
bool trainerInterface(Gym* g ,Trainer* t);


#endif //GYMMANAGEMENT_TRAINERINTERFACE_H
