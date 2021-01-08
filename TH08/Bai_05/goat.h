#pragma once
#include "FarmAnimal.h"
#include <iostream>
#include <string>
using namespace std;

class goat:
    public FarmAnimal
{
public:
    void input()
    {
        FarmAnimal::input();
        type = 2;
        milk = 0;
        offspring = 0;
    }
    int getType()
    {
        return 2;
    }
    void makeSound()
    {
        cout << "Maa!" << endl;
    }
    bool checkMilkAmount(int m)
    {
        if (0 <= m && m <= 10)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
