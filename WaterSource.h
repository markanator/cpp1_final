//
// Created by Mark on 12/15/2021.
//
#ifndef CPP1_FINAL_WATERSOURCE_H
#define CPP1_FINAL_WATERSOURCE_H


class WaterSource {
private:
    int static maxCapacity;
    int static currentCapacity;
    int static currentTemp;
public:
    WaterSource();
    bool withdrawWater(int amount);
};


#endif //CPP1_FINAL_WATERSOURCE_H
