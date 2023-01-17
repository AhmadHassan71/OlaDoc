//
// Created by Ahmad on 6/4/2022.
//

#include "Admin.h"


using namespace std;

void Admin::seePatients()
{
    Patient p1;
    cout << endl << "-----------------------------------------------------------------------" << endl;
    p1.readPatient();
    cout << endl << "-----------------------------------------------------------------------" << endl;
}

void Admin::searchPatients() {

    Patient p1;
    string username;
    cout << endl << "-----------------------------------------------------------------------" << endl;
    cout<<"Enter the username of Patient that you want to search: ";
    cin>>username;
    cout << endl << "-----------------------------------------------------------------------" << endl;
    p1.searchPatient(username);
    cout << endl << "-----------------------------------------------------------------------" << endl;
}
void Admin::seeDoctors() {
    Doctor D;
    D.readDoctor();
}

void Admin::searchDoctors() {

    Doctor D;
    string username;
    cout << endl << "-----------------------------------------------------------------------" << endl;
    cout<<"Enter the username of Doctor that you want to search: ";
    cin>>username;
    cout << endl << "-----------------------------------------------------------------------" << endl;
    D.searchDoctor(username);
    cout << endl << "-----------------------------------------------------------------------" << endl;
}

void Admin:: writeAdmin()
{
    cout<<"Enter your Username : "<<endl;
    cin>>registerUsername;
    cout<<"Enter the Password : "<<endl;
    cin>>registerPassword;

    ofstream AdminFile;
    AdminFile.open("Admin.dat", ios::binary | ios::app);
    if (AdminFile.write((char *)(this), sizeof(Admin)))
    {
        cout << "Success! Your have been registered as an Admin" << endl;
        AdminFile.close();
    }
    else
    {
        cout << "Not Registered ! :'(" << endl;
    }
}

bool Admin::verifyAdmin(string username, string pass)
{
    ifstream file_to_be_read;

    file_to_be_read.open("Admin.dat", ios::in);

    Admin obj;
    bool isFound = false;

    file_to_be_read.read(reinterpret_cast<char*>(&obj), sizeof(obj));
    while(!file_to_be_read.eof())
    {
        if(obj.registerUsername == username && obj.registerPassword == pass)
        {

            isFound=true;
            break;
        }
        file_to_be_read.read(reinterpret_cast<char*>(&obj), sizeof(obj));
    }
    file_to_be_read.close();
    if(isFound == false)
        cout<<"Either this Username doesn't exist OR You have made a mistake in writing the Username OR Password!!"<<endl;
    return isFound;
}

void Admin::adminLogin()
{
    Admin a1;
    cout<<" Enter your Login Username: ";
    cin>>a1.registerUsername;
    cout<<" Enter your Login Password: ";
    cin>>a1.registerPassword;
    while(!verifyAdmin(a1.registerUsername,a1.registerPassword))
    {
        cout<<" Enter your Login Username AGAIN: ";
        cin>>a1.registerUsername;
        cout<<" Enter your Login Password AGAIN: ";
        cin>>a1.registerPassword;
    }
    cout<<"You have succesfully Logged In !!"<<endl;
    cout<<endl<<"Welcome \t "<<a1.registerUsername<<endl;
}
