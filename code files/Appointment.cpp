//
// Created by Ahmad on 6/4/2022.
//

#include "Appointment.h"

using namespace std;

void Appointment::seePatients()
{
    Admin a;
    a.seePatients();
}

void Appointment::searchPatients() {

    Admin a;
    a.searchPatients();
}

void Appointment::seeDoctors() {
    Admin a;
    a.seeDoctors();
}

void Appointment::searchDoctors() {

    Admin a;
    a.searchDoctors();
}

void Appointment::giveFeedback()
{
    string f;
    cout << endl << "-----------------------------------------------------------------------" << endl;
    cout << "Please give your feedback on the service : " << endl;
    cin >> f;
    fb.setFeedback(f);
    cout << endl << "-----------------------------------------------------------------------" << endl;
    int rat;
    cout << "Please give your rating out of 5 : " << endl;
    cin >> rat;
    fb.setRating(rat);
}

void Appointment::givePayment()
{
    int am;

}
// std