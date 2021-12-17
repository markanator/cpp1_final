//
// Created by Mark on 12/15/2021.
//
#include "CoffeeMachine.h"
#include "BeanHopper.h"
#include "BeanGrinder.h"
#include "HeatSource.h"
#include "WaterSource.h"
#include "CupReceptacle.h"

#include <iostream>
#include <stdlib.h>

CupReceptacle *CoffeeMachine::cupsQueue[] = { NULL, NULL, NULL, NULL };

BeanHopper CoffeeMachine::bh;
BeanGrinder CoffeeMachine::bg;
HeatSource CoffeeMachine::hs;
WaterSource CoffeeMachine::ws;

CoffeeMachine::CoffeeMachine() { }

void CoffeeMachine::startProcess() {
    int cupsToMake = 0;
    std::cout << "❓ How many cups would you like?" << std::endl;
    std::cin >> cupsToMake;

    // don't have enough resources
    if (cupsToMake <= 0) { return; }
    if (cupsToMake > 4) { cupsToMake = 4;}
    std::cout << "Prepping, please wait..." << std::endl;

    while (cupsToMake) {
        this->cupsQueue[cupsToMake] = new CupReceptacle();
        bool didMakeCup = this->makeCupOfCoffee(&(*this->cupsQueue[cupsToMake]));

        if (didMakeCup && this->cupsQueue[cupsToMake]->currCupTemp >= 100) {
            cupsToMake--;
        } else {
            break;
        }
    }
    std::cout << "🏁 Total cups made: %d" << sizeof(this->cupsQueue) << std::endl;
    std::cout << "💰 All done!" << std::endl;
}

bool CoffeeMachine::makeCupOfCoffee(CupReceptacle *freshCup) {
    std::cout << "Making a cup..."  << std::endl;
     int cupBeanAmount = 50, waterReq = 250, coffeeTempReq = 100;
    // grab and grind beans
    bool didGrindBeans = this->bg.grindBeans(&this->bh, cupBeanAmount);
    if (!didGrindBeans) {
        std::cout << "❌ Out of beans!"  << std::endl;
        return false;
    }
    // grab && warm watter
    bool didHeatWater = this->hs.heatWaterForSingleCup(&this->ws, waterReq);
    if (!didHeatWater) {
        std::cout << "❌ Out of water!" << std::endl;
        return false;
    }
    // set cup details
    if (didGrindBeans && didHeatWater) {
        bool didFinishCup = ((CupReceptacle *)&freshCup)->setCupDetails(waterReq, coffeeTempReq);
        return didFinishCup;
    }
    // finished with error
    return false;
}