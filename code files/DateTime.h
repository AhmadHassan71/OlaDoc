//
// Created by Ahmad on 6/4/2022.
//

#ifndef FINALPROJECT_OOP_DATETIME_H
#define FINALPROJECT_OOP_DATETIME_H
//#include <cstring>
#include <iostream>
#include <cstring>

using namespace std;

    class DateTime 
    {
    protected:
        char date[10];      //dd-mm-yy
        bool slot[2];
        
    public:
        void setSlot(bool , bool );
        
        void setdate(string );
        
    };



#endif //FINALPROJECT_OOP_DATETIME_H
