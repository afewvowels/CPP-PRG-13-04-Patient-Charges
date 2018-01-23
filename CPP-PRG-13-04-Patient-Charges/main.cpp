//
//  main.cpp
//  CPP-PRG-13-04-Patient-Charges
//
//  Created by Keith Smith on 11/15/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a class named Patient that has member variablrs for the following data:
//
//  * First name, middle name, last name
//  * Address, city, state, and ZIP code
//  * Phone number
//  * Name and phone number of emergency contact
//
//  The Patient class should have a constructor that accepts an argument for each member
//  variable. The Patient class should also have accessor and mutator functions for
//  each member variable.
//
//  Next, write a class named Procedure that represents a medical procedure that has
//  been performed on a patient. The Procedure class should have member variables for
//  the following data:
//
//  * Name of the procedure
//  * Date of the procedure
//  * Name of the practitioner who performed the procedure
//  * Charges for the procedure
//
//  The Procedure class should have a constructor that accepts an argument for each
//  member variable. The Procedure class should also have accessor and mutator functions
//  for each member variable.
//
//  Next, write a program that creates an instance of the Patient class, intialized with
//  sample data. Then, create three instances of the Procedure class, initialized with the
//  following data:
//
//  Procedure #1:                   Procedure #2:                   Procedure #3:
//  ---------------------------------------------------------------------------------------
//  Procedure name: Physical Exam   Procedure Name: X-ray           Procedure name: Blood test
//  Date: Today's date              Date: Today's date              Date: Today's date
//  Practitioner: Dr. Irvine        Practitioner: Dr. Jamison       Practitioner: Dr. Smith
//  Charge: 250.00                  Charge: 500.00                  Charge: 200.00
//
//  The program should display the patient's information, information about all three of
//  the procedures, and the total charges of the three procedures.

#include <iostream>
#include <iomanip>
#include <string>
#include "Patient.hpp"
#include "Procedure.hpp"

using namespace std;

Patient initializePatient();
Procedure intitializeProcedure1();
Procedure intitializeProcedure2();
Procedure intitializeProcedure3();
void displayResults(Patient, Procedure, Procedure, Procedure);

int main()
{
    Patient patPatient = initializePatient();
    Procedure proProcedure1 = intitializeProcedure1();
    Procedure proProcedure2 = intitializeProcedure2();
    Procedure proProcedure3 = intitializeProcedure3();
    
    displayResults(patPatient, proProcedure1, proProcedure2, proProcedure3);
    
    return 0;
}

Patient initializePatient()
{
    Patient patient;
    
    std::string strTemp;
    
    cout << "Please enter the patient's first name: ";
    getline(cin, strTemp);
    patient.setNameFirst(strTemp);
    
    cout << "Please enter the patient's middle name: ";
    getline(cin, strTemp);
    patient.setNameMiddle(strTemp);
    
    cout << "Please enter the patient's last name: ";
    getline(cin, strTemp);
    patient.setNameLast(strTemp);
    
    cout << "Please enter the patient's street address: ";
    getline(cin, strTemp);
    patient.setAddressStreet(strTemp);
    
    cout << "Please enter the patient's city of residence: ";
    getline(cin, strTemp);
    patient.setAddressCity(strTemp);
    
    cout << "Please enter the patient's state of residence: ";
    getline(cin, strTemp);
    patient.setAddressState(strTemp);
    
    cout << "Please enter the patient's ZIP code: ";
    getline(cin, strTemp);
    patient.setAddressZIP(strTemp);
    
    cout << "Please enter the patient's phone number: ";
    getline(cin, strTemp);
    patient.setPhoneNumber(strTemp);
    
    cout << "Please enter the patient's emergency contact's name: ";
    getline(cin, strTemp);
    patient.setEmergencyName(strTemp);
    
    cout << "Please enter the patient's emergency contact's number: ";
    getline(cin, strTemp);
    patient.setEmergencyNumber(strTemp);
    
    return patient;
}

Procedure intitializeProcedure1()
{
    Procedure procedure;
    
    procedure.setProcedureName("Physical Exam");
    procedure.setProcedureDate("10/11/17");
    procedure.setProcedurePractitioner("Dr. Irvine");
    procedure.setProcedureCost(250.0f);
    
    return procedure;
}

Procedure intitializeProcedure2()
{
    Procedure procedure;
    
    procedure.setProcedureName("X-ray");
    procedure.setProcedureDate("10/11/17");
    procedure.setProcedurePractitioner("Dr. Jamison");
    procedure.setProcedureCost(500.0f);
    
    return procedure;
}

Procedure intitializeProcedure3()
{
    Procedure procedure;
    
    procedure.setProcedureName("Blood test");
    procedure.setProcedureDate("10/11/17");
    procedure.setProcedurePractitioner("Dr. Smith");
    procedure.setProcedureCost(200.0f);
    
    return procedure;
}

void displayResults(Patient patient, Procedure procedure1, Procedure procedure2, Procedure procedure3)
{
    const int INT_WIDTH = 10;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << left << setw(INT_WIDTH) << "Patient name:" << endl;
    cout << left << setw(INT_WIDTH) << patient.getNameFirst() << " ";
    cout << left << setw(INT_WIDTH) << patient.getNameMiddle() << " ";
    cout << left << setw(INT_WIDTH) << patient.getNameLast() << endl;
    
    cout << left << setw(INT_WIDTH) << "Patient address:" << endl;
    cout << left << setw(INT_WIDTH) << patient.getAddressStreet() << endl;
    cout << left << setw(INT_WIDTH) << patient.getAddressCity() << ", ";
    cout << left << setw(INT_WIDTH) << patient.getAddressState() << " ";
    cout << left << setw(INT_WIDTH) << patient.getAddressZIP() << endl;
    
    cout << left << setw(INT_WIDTH) << "Patient phone number:" << endl;
    cout << left << setw(INT_WIDTH) << patient.getPhoneNumber() << endl;
    
    cout << left << setw(INT_WIDTH) << "Emergency contact info:" << endl;
    cout << left << setw(INT_WIDTH) << patient.getEmergencyName() << endl;
    cout << left << setw(INT_WIDTH) << patient.getEmergencyNumber() << endl;
    cout << endl;
    
    cout << left << setw(INT_WIDTH) << "Procedure 1:" << endl;
    cout << left << setw(INT_WIDTH) << procedure1.getProcedureName() << endl;
    cout << left << setw(INT_WIDTH) << procedure1.getProcedureDate() << endl;
    cout << left << setw(INT_WIDTH) << procedure1.getProcedurePractitioner() << endl;
    cout << left << "$" << procedure1.getProcedureCost() << endl;
    cout << endl;
    
    cout << left << setw(INT_WIDTH) << "Procedure 2:" << endl;
    cout << left << setw(INT_WIDTH) << procedure2.getProcedureName() << endl;
    cout << left << setw(INT_WIDTH) << procedure2.getProcedureDate() << endl;
    cout << left << setw(INT_WIDTH) << procedure2.getProcedurePractitioner() << endl;
    cout << left << "$" << procedure2.getProcedureCost() << endl;
    cout << endl;
    
    cout << left << setw(INT_WIDTH) << "Procedure 3:" << endl;
    cout << left << setw(INT_WIDTH) << procedure3.getProcedureName() << endl;
    cout << left << setw(INT_WIDTH) << procedure3.getProcedureDate() << endl;
    cout << left << setw(INT_WIDTH) << procedure3.getProcedurePractitioner() << endl;
    cout << left << "$" << procedure3.getProcedureCost() << endl;
    cout << endl;
}
