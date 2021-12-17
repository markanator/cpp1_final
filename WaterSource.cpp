//
// Created by Mark on 12/15/2021.
//
#include "WaterSource.h"
#include <iostream>

int WaterSource::maxCapacity = 1000;
int WaterSource::currentCapacity = 1000;
int WaterSource::currentTemp = 30;

WaterSource::WaterSource() {
    this->currentCapacity = this->maxCapacity;
}

bool WaterSource::withdrawWater(int amount) {
    std::cout << "Attempt to pour cold water" << std::endl;
    if (this->currentCapacity - amount < 0) {
        return false;
    }
    this->currentCapacity -= amount;
    return true;
}