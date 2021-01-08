#pragma once
#include "FarmAnimal.h"
#include <iostream>
#include <string>
using namespace std;

class cow:
    public FarmAnimal
{
public:
    void input()
    {
        FarmAnimal::input();
        type = 0;
        milk = 0;
        offspring = 0;
    }
    int getType()
    {
        return 0;
    }
    void makeSound()
    {
        cout << "Moo!" << endl;
    }
    bool checkMilkAmount(int m)
    {
        if (0 <= m && m <= 20)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
