//
// Created by Ahmad on 6/4/2022.
//

#ifndef FINALPROJECT_OOP_ADMIN_H
#define FINALPROJECT_OOP_ADMIN_H
#include "Patient.h"
#include "Doctor.h"
#include "User.h"
namespace std {

    class Admin : public User{
       // int dummy;
    public:

       
        void writeAdmin();
        void seePatients();
        void searchPatients();
        void seeDoctors();
        void searchDoctors();
        bool verifyAdmin(string , string );
        void adminLogin();

    };

} // std

#endif //FINALPROJECT_OOP_ADMIN_H
