//
// Created by Apple on 15/07/23.
//

#ifndef GYMMANAGEMENT_ADMININTERFACE_H
#define GYMMANAGEMENT_ADMININTERFACE_H

#include "./../Headers/Gym/Gym.h"

bool addTrainerInterface( Gym* g, Trainer* t);
bool getTrainerInterface( Gym* g ) ;

bool addExerciseInterface( Gym* g ,Exercise* e);

bool getCardioExerciseInfoInterface( Gym* g  );
bool getStrengthExerciseInfoInterface( Gym* g);

bool choseExerciseInterface(Gym* g);

bool adminInterface( Gym* g );


#endif //GYMMANAGEMENT_ADMININTERFACE_H
