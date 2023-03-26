//
// Created by mniewczas on 3/26/23.
//

#include "../headers/Philosopher.h"

Philosopher::Philosopher(Fork &leftFork, Fork &rightFork) {

    this->leftFork = leftFork;
    this->rightFork = rightFork;

}
