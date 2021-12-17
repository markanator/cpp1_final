//
// Created by Mark on 12/15/2021.
//
#include "WaterSource.h"
#ifndef CPP1_FINAL_HEATSOURCE_H
#define CPP1_FINAL_HEATSOURCE_H


class HeatSource {
public:
    HeatSource();
    bool heatWaterForSingleCup(WaterSource *water, int amount);       // takes in a water source and heats to 100°C
};


#endif //CPP1_FINAL_HEATSOURCE_H
