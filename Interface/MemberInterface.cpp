//
// Created by Arya Parab on 06/07/23.
//

#include "MemberInterface.h"
#include <map>
using namespace std;
bool displayTrainerInterface( Trainer* t)
{
    system("clear");

    cout<<" 0 : HOME"<<endl;
    cout<<" 1 : BACK"<<endl;

    cout<<"Name : "<<t->getName()<<endl;
    cout<<"Phone No : "<<t->getPhoneNo()<<endl;
    cout<<"Type : "<<t->getType()<<endl;

    int choice;
    cin>>choice;

    if( choice == 0){
        return true ;
    }
    if( choice == 1){
        return false;
    }

}

bool routineInterface( Routine* r)
{
    while( true) {

        system("clear");
        cout << " 0 : HOME" << endl;
        cout << " 1 : BACK" << endl;
        cout << " 2 : MONDAY" << endl;
        cout << " 3 : TUESDAY" << endl;
        cout << " 4 : WEDNESDAY" << endl;
        cout << " 5 : THURSDAY" << endl;
        cout << " 6 : FRIDAY" << endl;
        cout << " 7 : SATURDAY" << endl;

        int choice;
        cin >> choice;

        map<int, string> mp;
        mp[2] = "Monday";
        mp[3] = "Tuesday";
        mp[4] = "Wednesday";
        mp[5] = "Thursday";
        mp[6] = "Friday";
        mp[7] = "Saturday";

        if (choice == 0) {
            return true;
        }

        else if (choice == 1) {
            return false;
        }

        else if(choice <= 7 && choice >= 2)
        {
            if (displayRoutineInterface(r, mp[choice])) return true;
        }
    }
}

bool displayRoutineInterface( Routine* r , string day)
{
    while( true) {

        system("clear");
        cout << " 0 : HOME" << endl;
        cout << " 1 : BACK" << endl;

        r->printExercisesOfDay(day);

        int choice;
        cin>>choice;
        if( choice == 0){
            return true ;
        }
        if( choice == 1){
            return false;
        }

    }

}

bool memberInterface( Gym* gym, Member* member)
{

    while( true) {

        system("clear");

        int choice;
        cout << " 0 : QUIT" << endl;
        cout << " 1 : GET TRAINER INFO" << endl;
        cout << " 2 : GET ROUTINE" << endl;
        cin >> choice;

        if (choice == 0) {
            return false;
        }

        else if (choice == 1) {
            Trainer *t= gym->getTrainerByName(member->getTrainerName());
            displayTrainerInterface(t);
            delete t;
        }

        else if (choice == 2) {
            Routine* r = member->getRoutine();
            routineInterface(r);
            delete r;
        }


    }
}
