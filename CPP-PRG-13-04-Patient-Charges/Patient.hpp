//
//  Patient.hpp
//  CPP-PRG-13-04-Patient-Charges
//
//  Created by Keith Smith on 11/15/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef Patient_hpp
#define Patient_hpp

#include <stdio.h>
#include <string>

class Patient
{
private:
    std::string strNameFirst;
    std::string strNameMiddle;
    std::string strNameLast;
    
    std::string strAddressStreet;
    std::string strAddressCity;
    std::string strAddressState;
    std::string strAddressZIP;
    
    std::string strPhoneNumber;
    
    std::string strEmergencyName;
    std::string strEmergencyNumber;
    
    
    
public:
    Patient(std::string, std::string, std::string, std::string,
            std::string, std::string, std::string, std::string,
            std::string, std::string);
    
    Patient();
    
    void setNameFirst(std::string);
    void setNameMiddle(std::string);
    void setNameLast(std::string);
    
    void setAddressStreet(std::string);
    void setAddressCity(std::string);
    void setAddressState(std::string);
    void setAddressZIP(std::string);
    
    void setPhoneNumber(std::string);
    
    void setEmergencyName(std::string);
    void setEmergencyNumber(std::string);
    
    std::string getNameFirst();
    std::string getNameMiddle();
    std::string getNameLast();
    
    std::string getAddressStreet();
    std::string getAddressCity();
    std::string getAddressState();
    std::string getAddressZIP();
    
    std::string getPhoneNumber();
    
    std::string getEmergencyName();
    std::string getEmergencyNumber();
};

#endif /* Patient_hpp */
