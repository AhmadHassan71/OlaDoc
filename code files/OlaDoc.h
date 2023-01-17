//
// Created by Ahmad Hassan | 21I-0403 | CS-C on 6/4/2022.
//
#include <iostream>
#include "User.h"
#include "User.cpp"
#ifndef FINALPROJECT_OOP_OLADOC_H
#define FINALPROJECT_OOP_OLADOC_H

using namespace std;

class OlaDoc
        {
    User user;
		User U;
        public:
            User getUser()
            {
                return user;
            }
            void setUser(User user)
            {
                this->user=user;
            }


    };


#endif //FINALPROJECT_OOP_OLADOC_H
