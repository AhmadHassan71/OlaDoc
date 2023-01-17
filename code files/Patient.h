//
// Created by Ahmad on 6/4/2022.
//
#include "User.h"
#include <fstream>

#ifndef FINALPROJECT_OOP_PATIENT_H
#define FINALPROJECT_OOP_PATIENT_H

using namespace std;

    class Patient : public User{



    public:


        void readPatient();
        void writePatient();
        void bookAppointment();
        void selectMethod();
        void searchPatient( string);
        void showPatient(Patient);
        bool verifyPatient( string,  string);
        void PatientLogin();
        bool validateCNIC();
        bool matchCNIC( string);


    };



#endif //FINALPROJECT_OOP_PATIENT_H
