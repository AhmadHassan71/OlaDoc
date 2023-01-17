//
// Created by Ahmad Hassan | 21I-0403 | CS-C on 6/4/2022.
//
#include <iostream>
//#include "OlaDoc.h"
#include "User.h"
#include "Patient.h"
//#include "Patient.cpp"
#include "Doctor.h"
#include "Appointment.h"
//#include "Doctor.cpp"
//#include "Admin.cpp"
#include "Admin.h"

using namespace std;


int main()
{
    int selection;
    int value;
    bool ON=true;

    cout<<endl<<"\n------Weclome to the OlaDoc System------\n"<<endl;
    while(ON)
    {
        cout << endl << "-----------------------------------------------------------------------" << endl;
        cout << "To Login or Register, Please First Select your Appropriate Category." << endl;
        cout << "\n\n1. Patient\n\n2. Doctor\n\n3. Administrator" << endl;
        cout << endl << "-----------------------------------------------------------------------" << endl;
        cout << "Enter your choice : ";
        cin >> selection;
        while (selection < 0 && selection > 4)
        {
            cout << endl << "-----------------------------------------------------------------------" << endl;
            cout << "Wrong Entry! please enter again  :  ";
            cin >> selection;
            cout << endl << "-----------------------------------------------------------------------" << endl;
        }
        switch (selection)
        {
            case 1:
                // Patient
                cout << endl << "-----------------------------------------------------------------------" << endl;
                cout << endl << "Welcome Dear Customer! OlaDoc is pleased to make your acquaintance!" << endl;
                cout << endl << "-----------------------------------------------------------------------" << endl;
                while (ON)
                {
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    cout << "\n\nDear Customer! Please select One of the following choices: \n\n1. Register\n\n2. Login" << endl;
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    cin >> value;
                    while (value < 0 && value > 2)
                    {
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cout << "Wrong Entry! please enter again  :  ";
                        cin >> value;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                    }
                    if (value == 1) {
                        //Register with 1
                        Patient p;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        p.writePatient();
                        cout << endl << "-----------------------------------------------------------------------" << endl;


                    }
                    if (value == 2) {
                        //Login with 2
                        Patient p;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        p.PatientLogin();
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cout << endl;

                        Appointment a;
                        int c;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cout << endl << "Please Select from the following choices: \n1. See all Doctors\n2. Search for a Doctor\n3. Book an Appointment\n4. Check up on Appointment" << endl;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cin >> c;

                        while (c < 1 || c >2) {
                            cout << "Wrong Entry! please enter again  :  ";
                            cin >> value;
                        }
                        switch (c)
                        {
                        case 1:
                            cout << endl << "-----------------------------------------------------------------------" << endl;
                            a.seeDoctors();
                            cout << endl << "-----------------------------------------------------------------------" << endl;
                            break;
                        case 2:
                            while (ON) {
                                cout << endl << "-----------------------------------------------------------------------" << endl;
                                a.searchDoctors();
                                cout << endl << "-----------------------------------------------------------------------" << endl;
                                cout << "Enter 0 to exit search doctor menu or 1 to continue : " << endl;
                                cout << endl << "-----------------------------------------------------------------------" << endl;
                                cin >> ON;
                            }
                            break;
                        default:
                            break;
                        }

                    }
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    cout << "Enter 0 to exit patient panel or 1 to continue : " << endl;
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    cin >> ON;
                }
                break;
            case 2:
                //Doctor
                cout << endl << "-----------------------------------------------------------------------" << endl;
                cout << endl << "Welcome Dear Doctor! OlaDoc is pleased to make your acquaintance!" << endl;
                cout << endl << "-----------------------------------------------------------------------" << endl;
                while (ON)
                {
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                cout << "Dear Doctor! Please select One of the following choices: \n1. Register\n2. Login" << endl;
                cout << endl << "-----------------------------------------------------------------------" << endl;
                cin >> value;
                while (value != 1 && value != 2) {
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    cout << "Wrong Entry! please enter again  :  ";
                    cin >> value;
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                }
                if (value == 1) {
                    Doctor d;
                    //Register with 0
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    d.writeDoctor();
                    cout << endl << "-----------------------------------------------------------------------" << endl;

                }
                if (value == 2) {
                    Doctor d;
                    //Login with 1
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    d.DoctorLogin();
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                }
                cout << endl << "-----------------------------------------------------------------------" << endl;
                cout << "Enter 0 to exit doctor panel or 1 to continue : " << endl;
                cin >> ON;
                cout << endl << "-----------------------------------------------------------------------" << endl;
                }
                break;
            case 3:
                //Admin
                Admin a;
                cout << endl << "-----------------------------------------------------------------------" << endl;
                cout << endl << "    Welcome to the Admin Panel     " << endl;
                cout << endl << "-----------------------------------------------------------------------" << endl;
                a.adminLogin();
                while (ON)
                {
                    int c;
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    cout << endl << "Please Select from the following choices: \n1. See all Patient\n2. Search for a Patient\n3. See all Doctors\n4. Search for a Doctor" << endl;
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                    cin >> c;
                    while (c < 1 || c >4) {
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cout << "Wrong Entry! please enter again  :  ";
                        cin >> value;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                    }
                    switch (c)
                    {
                    case 1:
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        a.seePatients();
                        cout << endl << "-----------------------------------------------------------------------" << endl;

                        break;
                    case 2:
                        while (ON)
                        {
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        a.searchPatients();
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cout << "Enter 0 to exit search patient menu or 1 to continue : " << endl;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cin >> ON;
                        }
                        break;
                    case 3:
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        a.seeDoctors();
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        break;
                    case 4:
                        while(ON){
                            cout << endl << "-----------------------------------------------------------------------" << endl;
                        a.searchDoctors();
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cout << "Enter 0 to exit search doctor menu or 1 to continue : " << endl;
                        cout << endl << "-----------------------------------------------------------------------" << endl;
                        cin >> ON;
                    }
                        break;
                    default:
                        break;
                    }
                    cout << endl << "-----------------------------------------------------------------------" << endl;
                cout << "Enter 0 to exit admin panel or 1 to continue : " << endl;
                cout << endl << "-----------------------------------------------------------------------" << endl;
                cin >> ON;
                }
                break;
               
            default:
                cout << endl;
        }
        cout << endl << "-----------------------------------------------------------------------" << endl;
        cout<<"Enter 0 to exit or 1 to continue : "<<endl;
        cout << endl << "-----------------------------------------------------------------------" << endl;
        cin>>ON;
        if(ON==false) {
            cout << endl << "-----------------------------------------------------------------------" << endl;
            cout << "Are you sure that you want to exit?  0 to confirm or 1 to continue  :\a " << endl;
            cin >> ON;
            cout << endl << "-----------------------------------------------------------------------" << endl;
            }
        cout << endl << "-----------------------------------------------------------------------" << endl;
    }
    cout << endl << "---------------------------GOOD BYE------------------------------------" << endl;
    return 0;
}

/*
int main()
{
    Doctor D;
    Feedback f;
    f.setFeedback("You are Good");
    int x = 4;
    f.setRating(x);

    D.WriteFeedback(f);
}*/