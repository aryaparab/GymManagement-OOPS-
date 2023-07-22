//
// Created by Apple on 15/07/23.
//

#include "AdminInterface.h"
using namespace std;


bool addTrainerInterface( Gym* g, Trainer* t){
    g->addTrainer(t);

    while( true){
        system("clear");

        int choice ;
        cout << " 0 : QUIT" << endl;

        cin>>choice;
        if( choice == 0){
            return true;
        }

    }


}

bool getTrainerInterface( Gym* g ) {
    while (true) {

        system("clear");

        int choice;
        string name;
        string num;
        string type;
        cout << " 0 : QUIT" << endl;
        cout << " 1 : RETURN " << endl;
        cout << " 2 : ENTER DETAILS " << endl;
        cin >> choice;
        if (choice == 0) {
            return true;
        } else if (choice == 1) {
            return false;
        } else if (choice == 2) {
            system("clear");
            cout << " ENTER NAME :" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, name);
            cout << " ENTER PHONE NO :" << endl;
            cin >> num;
            cout << " ENTER TYPE :" << endl;
            cin >> type;
            Trainer *t1 = new Trainer(name, num, type);

            if (addTrainerInterface(g, t1)) return true;

        }
    }

}



bool addExerciseInterface( Gym* g ,Exercise* e){
    g->addExercise(e);
    while( true){
        system("clear");

        int choice ;
        cout<<" Exercise Added"<<endl;

        cout << " 0 : QUIT" << endl;


        cin>>choice;
        if( choice == 0){
            return true;
        }

    }

}

bool getCardioExerciseInfoInterface( Gym* g  ){
        while( true){

            system("clear");

            int choice;
            string name;
            string equipment;
            int time;
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

                cout << " ENTER EQUIPMENT :" << endl;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin,equipment);


                cout << " ENTER TIME :" << endl;
                cin >> time;


                Exercise *e1 = new CardioExercise(name, equipment ,time);

                if( addExerciseInterface(g , e1)) return true;

            }
        }

    }
bool getStrengthExerciseInfoInterface( Gym* g) {
    while (true) {

        system("clear");

        int choice;
        string name;
        string equipment;
        string bodyPart;
        int numReps;
        int numSets;
        int avgTime;
        cout << " 0 : QUIT" << endl;
        cout << " 1 : RETURN " << endl;
        cout << " 2 : ENTER DETAILS " << endl;
        cin >> choice;
        if (choice == 0) {
            return true;
        } else if (choice == 1) {
            return false;
        } else if (choice == 2) {
            system("clear");

            cout << " ENTER NAME :" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, name);

            cout << " ENTER EQUIPMENT :" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin, equipment);

            cout << " ENTER BODY  PART :" << endl;
            cin >> bodyPart;

            cout << " ENTER NUMBER OF SETS :" << endl;
            cin >> numSets;

            cout << " ENTER NUMBER OF REPS :" << endl;
            cin >> numReps;

            cout << " ENTER AVERAGE TIME :" << endl;
            cin >> avgTime;


            Exercise *e1 = new StrengthExercise(name, equipment, bodyPart, numSets, numReps, avgTime);

            if (addExerciseInterface(g, e1)) return true;

        }
    }

}
bool choseExerciseInterface(Gym* g){

        while( true){

            system("clear");

            cout<<" 0 : QUIT"<<endl;
            cout<<" 1 : RETURN"<<endl;
            cout<<" 2 : STRENGTH "<<endl;
            cout<<" 3 : CARDIO "<<endl;

            int choice;
            cin>> choice;
            if( choice == 0){
                return false;
            }

            else if( choice==1){
                return true;
            }

            else if( choice ==2){
                if( getStrengthExerciseInfoInterface( g))return true;
            }

            else if( choice ==3){
                if( getCardioExerciseInfoInterface(g)) return true;
            }

        }

    }

bool adminInterface( Gym* g){

    while( true){

        cout<<" 0 : QUIT"<<endl;
        cout<<" 1 : ADD TRAINER "<<endl;
        cout<<" 2 : ADD EXERCISE "<<endl;

        int choice;
        cin>> choice;

        if (choice == 0){
            return true;
        }


        else if( choice == 1){
            if(getTrainerInterface( g )) return true;
        }

        else if( choice == 2){
            if( choseExerciseInterface(g)) return true;
        }
    }



}