#pragma once
//
// Created by Ahmad on 6/4/2022.
//

#ifndef FINALPROJECT_OOP_USER_H
#define FINALPROJECT_OOP_USER_H

#include <cstring>
#include <string.h>
#include <cstring>
#include <iostream>

using namespace std;

class User {

protected:
    // Common register details
    char registerUsername[26];
    char registerPassword[26];
    char username[26];
    char password[26];
    char FullName[26];
    char CNIC[26];



    //Patient register details

    int balance;


    //Doctor register details

    char specialization[26];
    char yearsOfExperience[26];
    char nameOfHospital[26];
    char AvailabityHours[26];
    char  NameOfCity[26];

public:



    // Setters
/*
    void setRegisterUsername(string&);
    void setRegisterPassword(string&);
    void setUsername(string&);
    void setPassword(string&);
    void setFullName(string&);
    void setCNIC(string&);

    //Patient Special
    void setBalance(const int& Balance);

    //Doctor Special
    void setSpecialization(string&);
    void setYoE(string&);
    void setNameOfHospital(string&);
    void setAvailabilityHours(string&);
    void setNameOfCity(string&);

    // Getters


    string getRegisterUsername() const;
    string getRegisterPassword() const;
    string getUsername() const;
    string getPassword() const;
    string getFullName() const;
    string getCNIC() const;

    int getBalance() const;

    string getSpecialization() const;
    string getNameOfHospital() const;
    string getYoE() const;
    string getNameOfCity() const;
    string getAvailabilityHours() const;


//Setters
void  setRegisterUsername(string& RegisterUsername)
{
    strcpy_s(this->registerUsername, RegisterUsername.c_str());

}
void  setRegisterPassword(string& RegisterPassword)
{
    strcpy_s(this->registerPassword, RegisterPassword.c_str());
}
void  setUsername(string& Username)
{
    strcpy_s(this->username, Username.c_str());
}
void  setPassword(string& Password)
{
    strcpy_s(this->password, Password.c_str());
}

void  setFullName(string& fullname)
{
    strcpy_s(this->FullName, fullname.c_str());
}
void  setCNIC(string& cnic)
{
    strcpy_s(this->CNIC, cnic.c_str());
}


void  setBalance(const int& Balance)
{
    balance = Balance;
}

void  setSpecialization(string& spe)
{
    strcpy_s(this->specialization, spe.c_str());
}

void  setYoE(string& YoE)
{
    strcpy_s(this->yearsOfExperience, YoE.c_str());
}
void  setNameOfHospital(string& hp)
{
    strcpy_s(this->nameOfHospital, hp.c_str());
}
void  setAvailabilityHours(string& ah)
{
    strcpy_s(this->AvailabityHours, ah.c_str());
}
void  setNameOfCity(string& city)
{
    strcpy_s(this->NameOfCity, city.c_str());
}



//Getters
string  getRegisterUsername() const
{
    return this->registerUsername;
}
string  getRegisterPassword()const
{
    return this->registerPassword;
}
string  getUsername() const
{
    return this->username;
}
string  getPassword() const
{
    return this->password;
}

string  getFullName() const
{
    return this->FullName;
}
string  getCNIC() const
{
    return this->CNIC;
}


int  getBalance() const
{
    return this->balance;
}

string  getSpecialization() const
{
    return this->specialization;
}

string  getYoE() const
{
    return this->yearsOfExperience;
}
string  getNameOfHospital() const
{
    return this->nameOfHospital;
}
string  getAvailabilityHours() const
{
    return this->AvailabityHours;
}
string  getNameOfCity() const {
    return this->NameOfCity;
}*/
string  getCNIC() const
{
    return this->CNIC;
}
};
#endif //FINALPROJECT_OOP_USER_H
