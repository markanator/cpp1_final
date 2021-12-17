//
// Created by Mark on 12/15/2021.
//
#include "BeanHopper.h"
#include "BeanGrinder.h"
#include "HeatSource.h"
#include "WaterSource.h"
#include "CupReceptacle.h"
#ifndef CPP1_FINAL_COFFEEMACHINE_H
#define CPP1_FINAL_COFFEEMACHINE_H


class CoffeeMachine {
private:
    static BeanHopper bh;
    static BeanGrinder bg;
    static HeatSource hs;
    static WaterSource ws;
    static CupReceptacle *cupsQueue[4];
public:
    CoffeeMachine();
    void startProcess();                            // asks user and brews coffee
    bool makeCupOfCoffee(CupReceptacle *freshCup);  // will make a single cup of coffee
};


#endif //CPP1_FINAL_COFFEEMACHINE_H
