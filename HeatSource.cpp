//
// Created by Mark on 12/15/2021.
//
#include "HeatSource.h"
#include "WaterSource.h"
#include <iostream>

HeatSource::HeatSource() {}

bool heatWaterForSingleCup(WaterSource *water, int amount){
    std::cout << "Heating water..." << std::endl;
    bool hasWaterToHeat = water->withdrawWater(amount);
    if (hasWaterToHeat){
        std::cout << "✅ Heated water for single cup.." << std::endl;
    }
    return hasWaterToHeat;
}
