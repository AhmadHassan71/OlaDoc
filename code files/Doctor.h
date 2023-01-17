//
// Created by Ahmad on 6/4/2022.
//
#include "User.h"
#include "Feedback.h"

#include <iostream>
#ifndef FINALPROJECT_OOP_DOCTOR_H
#define FINALPROJECT_OOP_DOCTOR_H

namespace std {

    class Doctor : public User{
    protected:
        char email[26];
       // Feedback fb;

    public:

      void setEmail(const string& );
      string getEmail () const;



        void readDoctor();
        void writeDoctor();
      //  void checkPatient();
      //  void checkAppointment();
     //   void editDetails();
      //  void editTimings();
        void searchDoctor(string);
        bool CNICorEmail(int&);
        void showDoctor(Doctor);
        bool verifyDoctor(string, string);
        void DoctorLogin();
        bool validateCNIC();
        bool matchCNIC(string);
        void WriteFeedback(Feedback);
    //    void readDoctor();
   //     void writeDoctor();

    };

} // std

#endif //FINALPROJECT_OOP_DOCTOR_H
