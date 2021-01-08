#pragma once
#include "FarmAnimal.h"
#include "cow.h"
#include "sheep.h"
#include "goat.h"
#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

class farm
{
private:
    int numOfFarmAnimals;
    vector<FarmAnimal*> arr;
public:
    farm(){};
    void input()
    {
        cout << "Number of farm animals: ";
        cin >> numOfFarmAnimals;
        int flag;
        cout << "Select type of farm animal (0.Cow, 1.Sheep, 2.Goat)" << endl;
        for (int i = 0; i < numOfFarmAnimals; i++)
        {
            cout << "Animal type (0, 1, 2): ";
            cin >> flag;
            switch (flag)
            {
                case 0:
                {
                    FarmAnimal* f = new cow();
                    arr.push_back(f);
                    arr[i]->input();
                    break;
                }
                case 1:
                {
                    FarmAnimal* f = new sheep();
                    arr.push_back(f);
                    arr[i]->input();
                    break;
                }
                case 2:
                {
                    FarmAnimal* f = new goat();
                    arr.push_back(f);
                    arr[i]->input();
                    break;
                }
            }
        }
    }
    void output()
    {
        for (int i = 0; i < numOfFarmAnimals; i++)
        {
            arr[i]->output();
            cout << endl;
        }
    }
    void isHungry()
    {
        for (int i = 0; i < numOfFarmAnimals; i++)
        {
            arr[i]->makeSound();
        }
    }
    void giveMilk()
    {
        int flag;
        cout << "Input milk given by animal: \n\tCow: Between 0 and 20 \n\tSheep: Between 0 and 5 \n\tGoat: Between 0 and 10" << endl;
        for (int i = 0; i < numOfFarmAnimals; i++)
        {
            cout << "ID: " << arr[i]->id << endl;
            cout << "Type: ";
            switch (arr[i]->getType())
            {
                case 0:
                {
                    cout << "Cow";
                    break;
                }
                case 1:
                {
                    cout << "Sheep";
                    break;
                }
                case 2:
                {
                    cout << "Goat";
                    break;
                }
            }
            cout << endl;
            cout << "Amount of milk (litre): ";
            cin >> flag;
            while (arr[i]->checkMilkAmount(flag) == 0)
            {
                cout << "Wrong amount. Intput again: ";
                cin >> flag;
            }
            arr[i]->setMilk(flag);
        }
    }
    void countMilkPerType()
    {
        int cowMilk = 0;
        int sheepMilk = 0;
        int goatMilk = 0;
        for (int i = 0; i < numOfFarmAnimals; i++)
        {
            switch (arr[i]->getType())
            {
                case 0:
                {
                    cowMilk += arr[i]->getMilk();
                    break;
                }
                case 1:
                {
                    sheepMilk += arr[i]->getMilk();
                    break;
                }
                case 2:
                {
                    goatMilk+= arr[i]->getMilk();
                    break;
                }
            }
        }
        cout << "Total amount of cow milk (litre): " << cowMilk << endl;
        cout << "Total amount of sheep milk (litre): " << sheepMilk << endl;
        cout << "Total amount of goat milk (litre): " << goatMilk << endl;
    }
    void giveBirth()
    {
        for (int i = 0; i < numOfFarmAnimals; i++)
        {
            cout << "ID: " << arr[i]->id << endl;
            cout << "Type: ";
            switch (arr[i]->getType())
            {
                case 0:
                {
                    cout << "Cow";
                    break;
                }
                case 1:
                {
                    cout << "Sheep";
                    break;
                }
                case 2:
                {
                    cout << "Goat";
                    break;
                }
            }
            cout << endl;
            int flag = rand() % 10;
            cout << "Number of offspring: " << flag << endl;
            arr[i]->setOffspring(flag);
        }
    }
    void countOffspringPerType()
    {
        int cowOffspring = 0;
        int sheepOffspring = 0;
        int goatOffspring = 0;
        for (int i = 0; i < numOfFarmAnimals; i++)
        {
            switch (arr[i]->getType())
            {
                case 0:
                {
                    cowOffspring += arr[i]->getOffspring();
                    break;
                }
                case 1:
                {
                    sheepOffspring += arr[i]->getOffspring();
                    break;
                }
                case 2:
                {
                    goatOffspring+= arr[i]->getOffspring();
                    break;
                }
            }
        }
        cout << "Total number of cow offsprings: " << cowOffspring << endl;
        cout << "Total number of sheep offsprings: " << sheepOffspring << endl;
        cout << "Total number of goat offsprings: " << goatOffspring << endl;
    }
    void addOffspringToFarm()
    {
        cout << "Input new offsprings." << endl;
        for (int i = 0; i < numOfFarmAnimals; i++)
            {
                for (int j = 0; j < arr[i]->getOffspring(); j++)
                {
                    switch (arr[i]->getType())
                    {
                        case 0:
                        {
                            FarmAnimal* fa = new cow();
                            fa->input();
                            arr.push_back(fa);
                            break;
                        }
                        case 1:
                        {
                            FarmAnimal* fa = new sheep();
                            fa->input();
                            arr.push_back(fa);
                            break;
                        }
                        case 2:
                        {
                            FarmAnimal* fa = new goat();
                            fa->input();
                            arr.push_back(fa);
                            break;
                        }
                    }
                    numOfFarmAnimals += 1;
                }
                arr[i]->setOffspring(0);
            }
    }
    ~farm(){};
};
