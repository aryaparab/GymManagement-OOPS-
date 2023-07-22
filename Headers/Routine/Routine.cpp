//
// Created by Arya Parab on 26/06/23.
//

#include "Routine.h"

Routine::Routine()
{

}

Routine::Routine(const Routine &routine)
{

    vector<vector<Exercise*>> exercises={routine.mon , routine.tue , routine.wed , routine.thu , routine.fri , routine.sat};
    vector<string> days = { "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" };

    for( int i=0;i<6;i++)
    {
        setRoutineOfDay( days[i] , exercises[i]);
    }

}

vector<Exercise*>& Routine::returnThis(string day)
{
    if( day == "Monday")
        return this->mon;
    else if( day == "Tuesday")
        return this->tue;
    else if( day == "Wednesday")
        return this->wed;
    else if( day == "Thursday")
        return this->thu;
    else if( day == "Friday")
        return this->fri;
    else if( day == "Saturday")
        return this->sat;
//    else
//        return vector<Exercise*>{};

}

//we get copy cuz if we dont all pointing to same thing so if we delete from outside then it is inside also gone

vector<Exercise*> Routine::getRoutineOfDay(string day )
{
    vector<Exercise*> temp;
    temp = returnThis(day);

    vector<Exercise*> exerciseCopy;
    for( auto exercise : temp)
    {
        Exercise* e1;

        e1 = exercise->getCopyOfDerivedObj();

        exerciseCopy.push_back(e1);
    }
    return exerciseCopy;
}


void Routine ::setRoutineOfDay( string day , vector<Exercise*> exercises)
{
    returnThis(day).clear();

    for( auto exercise:exercises)
    {
        addExerciseToDay(day , exercise);
    }
}
void Routine::addExerciseToDay( string day ,  Exercise* exercise)
{

    returnThis(day).push_back( exercise->getCopyOfDerivedObj() );

}

Routine::~Routine()
{
    this->mon.clear();
    this->tue.clear();
    this->wed.clear();
    this->thu.clear();
    this->fri.clear();
    this->sat.clear();
}

void Routine::printExercisesOfDay(string day)
{
    vector<Exercise*> temp = getRoutineOfDay(day);
    if( !temp.empty())
    {
        cout<<"Exercise for "<<day<<" : "<<endl;
        for( auto exercise : temp)
        {
            exercise->print();
        }

    }
    else
    {
        cout<<"No exercises for "<<day<<" :)"<<endl;

    }
    temp.clear();
}

void Routine::print()
{
    vector<string> days = { "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" };
    for( auto day: days)
    {
        printExercisesOfDay(day);
    }
}
