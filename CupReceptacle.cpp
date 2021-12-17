//
// Created by Mark on 12/15/2021.
//
#include "CupReceptacle.h"
#include <iostream>

int CupReceptacle::currCupCapacity = 0;
int CupReceptacle::currCupTemp = 30;

CupReceptacle::CupReceptacle() {}


bool CupReceptacle::setCupDetails(int fluidCapacity, int temp) {
    std::cout << "✅ Pouring fresh cup of Black Rifle Coffee Dark Blend into cup..."  << std::endl;
    this->currCupTemp = temp;
    this->currCupCapacity = fluidCapacity;
    return true;
}