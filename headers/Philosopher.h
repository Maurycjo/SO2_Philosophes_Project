//
// Created by mniewczas on 3/26/23.
//

#ifndef PHILOZOPHIES_SO2_PROJECT_PHILOSOPHER_H
#define PHILOZOPHIES_SO2_PROJECT_PHILOSOPHER_H


#include "Fork.h"

class Philosopher {
private:
    Fork leftFork, rightFork;
public:
    Philosopher(Fork &leftFork, Fork &rightFork);


};


#endif //PHILOZOPHIES_SO2_PROJECT_PHILOSOPHER_H
