//
// Created by Mark on 12/15/2021.
//
#include "BeanGrinder.h"
#include "BeanHopper.h"

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

BeanGrinder::BeanGrinder() {}

bool BeanGrinder::grindBeans(BeanHopper *bHop, int amount) {
    std::cout << "Attempt to grind beans..." <<std::endl;
    bool hasEnough = bHop->withdrawBeans(amount);
    return hasEnough;
}
