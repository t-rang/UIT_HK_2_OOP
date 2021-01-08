#pragma once
#include <string>
#include <iostream>
#include <string>
using namespace std;

class FarmAnimal
{
public:
    int id;
protected:
    int type;
    int milk;
    int offspring;
public:
    FarmAnimal(){};
    virtual void input()
    {
        cout << "ID: ";
        cin >> id;
    };
    virtual void setType(){};
    virtual void output()
    {
        cout << "ID: " << id << endl;
        switch (type)
        {
            case 0:
            {
                cout << "Type: Cow" << endl;
                break;
            }
            case 1:
            {
                cout << "Type: Sheep" << endl;
                break;
            }
            case 2:
            {
                cout << "Type: Goat" << endl;
                break;
            }
        }
        cout << "Last amount of milk given: " << milk << endl;
    };
    virtual int getType()
    {
        return 99;
    }
    virtual void makeSound(){}
    virtual void setMilk (int m)
    {
        milk = m;
    }
    virtual int getMilk()
    {
        return milk;
    }
    virtual bool checkMilkAmount(int m)
    {
        return false;
    }
    virtual void setOffspring(int s)
    {
        offspring = s;
    }
    virtual int getOffspring()
    {
        return offspring;
    }
    ~FarmAnimal(){};
};
