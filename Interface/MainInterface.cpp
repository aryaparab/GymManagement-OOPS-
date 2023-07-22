//
// Created by Apple on 15/07/23.
//

#include "MainInterface.h"

bool mainInterface(Gym* g){

    while( true){

        system("clear");

        cout<<" 0 : Quit"<<endl;
        cout<<" 1 : ADMIN"<<endl;
        cout<<" 2 : TRAINER"<<endl;
        cout<<" 3 : MEMBER"<<endl;

        int choice;
        cin>>choice;

        if( choice==0){
            return false;
        }

        else if( choice == 1){
            adminInterface(g);
        }

        else if( choice == 2){
            Trainer* t = g->getTrainers()[0];
            trainerInterface( g, t);
        }
        else if( choice == 3){
            Member*  m = g->getMembers()[0];
            memberInterface( g , m);
        }

    }
}
