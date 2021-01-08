/*
animal (type, sound, milk, offspring // getType(), isHungry(), giveMilk(), giveBirth(), getSound(), setMilk(), setOffspring(), getMilk(), getOffspring(), input, output)
cow (0 – 20 lít)
sheep (0 – 5 lít)
goat (0 – 10 lít)
 
farm (numOfAnimals, animal* arr // input, output, countAnimalsPerType(), giveMilk(), countAllMilk(), isHungry(), giveBirth(), countAllOffspring(),
*/
#include "FarmAnimal.h"
#include "cow.h"
#include "sheep.h"
#include "goat.h"
#include "farm.h"
#include <iostream>
using namespace std;

int main ()
{
    farm f;
    cout << "===========1. Input all farm animals.===========\n" << endl;
    f.input();
    cout << "\n===========2. Output all farm animals.===========\n" << endl;
    f.output();
    cout << "\n===========3. All farm animals give birth.===========\n" << endl;
    f.giveBirth();
    cout << "\n===========4. Count offsprings per type.===========\n" << endl;
    f.countOffspringPerType();
    cout << "\n===========5. Add offsprings to farm.===========\n" << endl;
    f.addOffspringToFarm();
    cout << "\n===========6. All farm animals give milk.===========\n" << endl;
    f.giveMilk();
    cout << "\n===========7. Count milk per type.===========\n" << endl;
    f.countMilkPerType();
    cout << "\n===========8. All farm animals are hungry.===========\n" << endl;
    f.isHungry();
    return 0;
}
