#include <iostream>

#include "./Interface/MainInterface.h"
using namespace std;
int main() {

    Gym* g1 = new Gym("PYC");
    //memberInterface(g1 , g1->getMembers()[0]);

    //trainerInterface( g1 , g1->getTrainers()[0]);

    mainInterface(g1);




}
