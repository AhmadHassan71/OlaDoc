//
// Created by Ahmad on 6/4/2022.
//

#ifndef FINALPROJECT_OOP_ETRANSACTION_H
#define FINALPROJECT_OOP_ETRANSACTION_H
#include <iostream>
#include <cstring>
using namespace std;

    class Feedback 
    {
    protected:
        char feedback[256];
        int rating;
    public:
        void setFeedback(string);
        string getFeedback();
        void setRating(int&);
    };

 // std

#endif //FINALPROJECT_OOP_ETRANSACTION_H
