//
// Created by mniewczas on 3/26/23.
//

#ifndef PHILOZOPHIES_SO2_PROJECT_FORK_H
#define PHILOZOPHIES_SO2_PROJECT_FORK_H


class Fork {
private:
    bool isBusy = false;    //true-busy, false-free
    bool isInRightHand;     //fork is in right side of philosopher who hand it
    bool isInLeftHand;      //the same but left side

public:
    Fork();
};


#endif //PHILOZOPHIES_SO2_PROJECT_FORK_H
