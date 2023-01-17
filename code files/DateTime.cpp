//
// Created by Ahmad on 6/4/2022.
//

#include "DateTime.h"

using namespace std;

void DateTime:: setSlot(bool Half_1,bool Half_2) 
{
    if (Half_1)
        slot[0] = 1;
    else
        slot[0] = false;
    if (Half_2)
        slot[1] = 1;
    else
        slot[1] = false;

}
void DateTime:: setdate(string de)
{
    strcpy_s(date, de.c_str());
}

 // std