/*
 * 
 *Maths puzzle from google c++ education.
 *
 * Horses cost $10, pigs cost $3, and rabbits are only $0.50.
 * A farmer buys 100 animals for $100, How many of each animal did he buy?
 * 
*/

#include <iostream>
using namespace std;

int main()
{
    for (int pig = 0; pig < 100; pig++)
        for (int horse = 0; horse < 100; horse++)
            for (int rabbit = 0; rabbit < 100; rabbit++)
                if ((horse + pig + rabbit) == 100)
                    if (((10 * horse) + (3 * pig) + (0.5 * rabbit)) == 100)
                        cout << "Found : " << horse << " horses " << pig << " pigs " << rabbit << " rabbits " << endl;
}