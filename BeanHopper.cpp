//
// Created by Mark on 12/15/2021.
//
#include "BeanHopper.h"
#include <iostream>

int BeanHopper::currentCapacity = 0;

BeanHopper::BeanHopper() {
    this->currentCapacity = 200;
}

bool BeanHopper::withdrawBeans(int amount) {
    std::cout << "Fetching raw beans" << amount << std::endl;
    if (this->currentCapacity - amount < 0) {
        std::cout << "⚠️ Not enough beans to take out" << std::endl;
        return false;
    }
    std::cout << "✅ Successfully withdrew %d grams." << amount << std::endl;
    this->currentCapacity -= amount;
    return true;
}