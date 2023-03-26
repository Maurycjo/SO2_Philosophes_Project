//
// Created by mniewczas on 3/26/23.
//

#ifndef PHILOZOPHIES_SO2_PROJECT_PHILOSOPHERSTORAGE_H
#define PHILOZOPHIES_SO2_PROJECT_PHILOSOPHERSTORAGE_H


#include "Fork.h"
#include <vector>
#include "Philosopher.h"

class PhilosopherStorage {
private:
    std::vector<Fork> forkVector;
    std::vector<Philosopher> philosopherVector;
    int numberOfPhilosophers;
public:
    PhilosopherStorage(int numberOfPhilosophers);

};


#endif //PHILOZOPHIES_SO2_PROJECT_PHILOSOPHERSTORAGE_H
