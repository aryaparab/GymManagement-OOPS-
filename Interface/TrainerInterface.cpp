//
// Created by Arya Parab on 08/07/23.
//

#include "TrainerInterface.h"

bool displayMemberInterface( Member* m){


    while(true){
        int choice;
        system("clear");
        cout << " 0 : HOME" << endl;
        cout << " 1 : RETURN" << endl;

        m->print();

        cin>>choice;
        if( choice == 0){
            return true;
        }

        else if( choice == 1) {
            return false;
        }


    }
}


//adds to gym
bool addMemberInterface( Gym* g, Member* m){
    g->addMember(m);

    while( true){
        system("clear");

        int choice ;

        cout << " 0 : QUIT" << endl;
        cout << " Member added successfully"<<endl;
        cin>>choice;
        if( choice == 0){
            return true;
        }

    }


}
bool getMemberInterface( Gym* g , Trainer* t){
    while( true){

        system("clear");

        int choice;
        string name;
        string num ;
        int w;
        cout << " 0 : QUIT" << endl;
        cout << " 1 : RETURN " << endl;
        cout << " 2 : ENTER DETAILS "<<endl;
        cin>> choice;
        if( choice == 0){
            return true;
        }
        else if( choice ==1 ){
            return false;
        }

        else if( choice == 2) {
            system("clear");
            cout << " ENTER NAME :" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,name);
            cout << " ENTER PHONE NO :" << endl;
            cin >> num;
            cout << " ENTER WEIGHT :" << endl;
            cin >> w;
            Member *m1 = new Member(name, num, w, t->getName());

            if( addMemberInterface(g , m1)) return true;

        }
    }


}



bool addExerciseToRoutine( Gym* g , Member* m , Exercise* e , string day){

    g->addExerciseToMemberRoutine(m, e, day);

    while( true) {
        system( "clear");
        int choice;
        cout << " 0 : HOME" << endl;
        cout << " EXERCISE ADDED" << endl;

        cin >> choice;

        if (choice == 0) {
            return true;
        }
    }
}
bool chooseDayInterface(  Gym* g ,Member* m , Exercise* ex ){

    while(true) {
        system("clear");


        int choice;
        cout << " 0 : HOME" << endl;
        cout << " 1 : RETURN" << endl;
        cout << " 2 : MONDAY" << endl;
        cout << " 3 : TUESDAY" << endl;
        cout << " 4 : WEDNESDAY" << endl;
        cout << " 5 : THURSDAY" << endl;
        cout << " 6 : FRIDAY" << endl;
        cout << " 7 : SATURDAY" << endl;

        cin >> choice;
        vector<string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

        if (choice == 0) {
            return true;
        } else if (choice == 1) {
            return false;
        } else if (choice >= 2 && choice <= 7) {
            if (addExerciseToRoutine(g, m, ex, days[choice - 2])) return true;
        }
    }
}
bool chooseExerciseInterface( Gym* g , Member* m ){

    while( true) {
        system("clear");

        int choice;
        cout << " 0 : HOME" << endl;
        cout << " 1 : RETURN" << endl;
        cout << " 2 : ADD EXERCISE" << endl;


        vector<Exercise *> temp = g->getExercises();
        int i = 3;
        int totalExercises = temp.size();
        for (auto exercise: temp) {
            cout << i << " : " << exercise->getName() << endl;
            i++;
        }


        cin >> choice;

        if (choice == 0) {
            return true;
        } else if (choice == 1) {
            return false;
        } else if (choice >= 3 && choice <= 3 + totalExercises) {

            if (chooseDayInterface(g, m, temp[choice - 3])) return true;
        }
    }
}

bool updateRoutineInterface(Gym* g, Member* m){

    system( "clear");

    int choice;
    cout<< " 0 : HOME" << endl;
    cout<< " 1 : RETURN" <<endl;
    cout<< " 2 : ADD EXERCISE"<<endl;
    cin>> choice;

    if( choice == 0){
        return true;
    }

    else if( choice == 1){
        return false;
    }

    else if( choice == 2){
        if(chooseExerciseInterface(g,m)) return true;

    }

}


//as a trainer now i have member what all can i do
bool memberFunctionInterface( Gym* g ,Member* m){

    while( true ){

        system( "clear");

        int choice;
        cout << " 0 : HOME" << endl;
        cout << " 1 : RETURN" << endl;
        cout << " 2 : GET MEMBER INFO"<<endl;
        cout << " 3 : UPDATE MEMBER ROUTINE"<<endl;

        cin>>choice;

        if( choice == 0){
            return true;
        }

        else if( choice == 1) {
            return false;
        }

        else if( choice == 2) {
            if( displayMemberInterface(m)) return true;
        }

        else if( choice == 3) {
            if(updateRoutineInterface(g,m)) return true;

        }
    }


}

bool accessMembersInterface(Gym* g , Trainer* t){

    while( true){

        system( "clear");

        int choice;
        cout << " 0 : HOME" << endl;
        cout << " 1 : RETURN" << endl;


        //name of members so trainer can select
        vector<Member*> temp ;
        for( auto trainer : g->getTrainers())
        {
            if( trainer->getName() == t->getName() )
                temp = trainer->getMembers();
        }
        int size = temp.size();

        int i = 2;
        for( auto member: temp)
        {
            cout<<i<<" : "<<member->getName()<<endl;
            i++;
        }


        cin>>choice;

        if( choice == 0){
            return true;
        }

        else if( choice == 1) {
            return false;
        }

        else if( choice>=2 && choice<2+size)
        {
            if(memberFunctionInterface(g ,temp[choice-2])) return true;
        }

    }
}

bool trainerInterface(Gym* g ,Trainer* t)
{
    while( true) {

        system("clear");

        int choice;
        cout << " 0 : QUIT" << endl;
        cout << " 1 : ACCESS MEMBER " << endl;
        cout << " 2 : ADD MEMBER" <<endl;


        cin>> choice;

        if (choice == 0) {
            return false;
        }

        else if ( choice == 1){
            accessMembersInterface(g ,t);
        }

        else if ( choice == 2){
            getMemberInterface(g , t);
        }

    }

}