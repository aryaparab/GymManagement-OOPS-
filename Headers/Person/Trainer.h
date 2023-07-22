

#ifndef GYMMANAGEMENT_TRAINER_H
#define GYMMANAGEMENT_TRAINER_H


#include "Person.h"
#include "Member.h"

class Trainer : public Person{

    string type;
    vector<Member*> members;

public:
    Trainer(string name , string phoneNo ,string type  );
    void print();
    Trainer(const Trainer& trainer);
    string getType();
    void setType(string type);
    void addMember(Member* member);
    vector<Member*> getMembers();
    void addExerciseToMember(string name ,string day ,  Exercise* exercise);
    ~Trainer();
};


#endif //GYMMANAGEMENT_TRAINER_H
