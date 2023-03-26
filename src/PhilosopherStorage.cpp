//
// Created by mniewczas on 3/26/23.
//

#include "../headers/PhilosopherStorage.h"

PhilosopherStorage::PhilosopherStorage(int numberOfPhilosophers) {

    for(int i=0;i<numberOfPhilosophers;i++){
        forkVector.push_back(Fork());
    }
    philosopherVector.push_back(Philosopher(forkVector[numberOfPhilosophers-1], forkVector[0]));
    for(int i=1;i<numberOfPhilosophers;i++){
        philosopherVector.push_back(Philosopher(forkVector[i-1], forkVector[i]));
    }

}
