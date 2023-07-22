//
// Created by Arya Parab on 26/06/23.
//

#ifndef GYMMANAGEMENT_EXERCISE_H
#define GYMMANAGEMENT_EXERCISE_H

#include <iostream>

    using namespace std;

    class Exercise {

    protected:
        string name;
        string type;
        string equipment;

    public:
        Exercise(string name, string type, string equipment);
        virtual void print() = 0;


        virtual Exercise* getCopyOfDerivedObj() = 0;

        void setName(string name);
        void setType( string type);
        void setEquipment(string equipment);
        string getName();
        string getType();
        string getEquipment();

    };


#endif //GYMMANAGEMENT_EXERCISE_H
