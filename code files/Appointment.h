//
// Created by Ahmad on 6/4/2022.
//
#include "Admin.h"
#include "DateTime.h"
#include "Payment.h"
#include "Feedback.h"
#ifndef FINALPROJECT_OOP_APPOINTMENT_H
#define FINALPROJECT_OOP_APPOINTMENT_H

using namespace std; 

    class Appointment 
    {
    protected:
        DateTime dt;
        Payment pt;
        Feedback fb;

    public:
        void seePatients();
        void searchPatients();
        void searchDoctors();
        void seeDoctors();
        void giveFeedback();
        void givePayment();
        
    };

 // std

#endif //FINALPROJECT_OOP_APPOINTMENT_H
