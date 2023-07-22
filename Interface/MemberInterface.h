//
// Created by Arya Parab on 06/07/23.
//
#ifndef GYMMANAGEMENT_MEMBERINTERFACE_H
#define GYMMANAGEMENT_MEMBERINTERFACE_H
#include "./../Headers/Gym/Gym.h"




bool displayRoutineInterface( Routine* r , string day);
bool routineInterface( Routine* r);


bool displayTrainerInterface( Trainer* t);
bool memberInterface( Gym* gym, Member* member);

#endif //GYMMANAGEMENT_MEMBERINTERFACE_H
