//
// Created by Mark on 12/15/2021.
//
#ifndef CPP1_FINAL_CUPRECEPTACLE_H
#define CPP1_FINAL_CUPRECEPTACLE_H


class CupReceptacle {
public:
    CupReceptacle();
    int static currCupCapacity;
    int static currCupTemp;
    bool setCupDetails(int fluidCapacity, int temp); // will set the final mug details
};


#endif //CPP1_FINAL_CUPRECEPTACLE_H
