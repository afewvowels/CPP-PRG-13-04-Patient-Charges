//
//  Patient.cpp
//  CPP-PRG-13-04-Patient-Charges
//
//  Created by Keith Smith on 11/15/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "Patient.hpp"

Patient::Patient(std::string nameFirst, std::string nameMiddle, std::string nameLast,
                 std::string addressStreet, std::string addressCity, std::string addressState,
                 std::string addressZip, std::string phoneNumber, std::string emergencyName,
                 std::string emergencyNumber)
{
    strNameFirst = nameFirst;
    strNameMiddle = nameMiddle;
    strNameLast = nameLast;
    
    strAddressStreet = addressStreet;
    strAddressCity = addressCity;
    strAddressState = addressState;
    strAddressZIP = addressZip;
    
    strPhoneNumber = phoneNumber;
    
    strEmergencyName = emergencyName;
    strEmergencyNumber = emergencyNumber;
}

Patient::Patient()
{
//    strNameFirst = "";
//    strNameMiddle = "";
//    strNameLast = "";
//    
//    strAddressStreet = "";
//    strAddressCity = "";
//    strAddressState = "";
//    strAddressZIP = "";
//    
//    strPhoneNumber = "";
//    
//    strEmergencyName = "";
//    strEmergencyNumber = "";
}

void Patient::setNameFirst(std::string nameFirst)
{
    strNameFirst = nameFirst;
}

void Patient::setNameMiddle(std::string nameMiddle)
{
    strNameMiddle = nameMiddle;
}

void Patient::setNameLast(std::string nameLast)
{
    strNameLast = nameLast;
}

void Patient::setAddressStreet(std::string addressStreet)
{
    strAddressStreet = addressStreet;
}

void Patient::setAddressCity(std::string addressCity)
{
    strAddressCity = addressCity;
}

void Patient::setAddressState(std::string addressState)
{
    strAddressState = addressState;
}

void Patient::setAddressZIP(std::string addressZIP)
{
    strAddressZIP = addressZIP;
}

void Patient::setPhoneNumber(std::string phoneNumber)
{
    strPhoneNumber = phoneNumber;
}

void Patient::setEmergencyName(std::string emergencyName)
{
    strEmergencyName = emergencyName;
}

void Patient::setEmergencyNumber(std::string emergencyNumber)
{
    strEmergencyNumber = emergencyNumber;
}

std::string Patient::getNameFirst()
{
    return strNameFirst;
}

std::string Patient::getNameMiddle()
{
    return strNameMiddle;
}

std::string Patient::getNameLast()
{
    return strNameLast;
}

std::string Patient::getAddressStreet()
{
    return strAddressStreet;
}

std::string Patient::getAddressCity()
{
    return strAddressCity;
}

std::string Patient::getAddressState()
{
    return strAddressState;
}

std::string Patient::getAddressZIP()
{
    return strAddressZIP;
}

std::string Patient::getPhoneNumber()
{
    return strPhoneNumber;
}

std::string Patient::getEmergencyName()
{
    return strEmergencyName;
}

std::string Patient::getEmergencyNumber()
{
    return strEmergencyNumber;
}
