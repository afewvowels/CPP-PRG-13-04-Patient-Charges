//
//  Procedure.hpp
//  CPP-PRG-13-04-Patient-Charges
//
//  Created by Keith Smith on 11/15/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#ifndef Procedure_hpp
#define Procedure_hpp

#include <stdio.h>
#include <string>

class Procedure
{
private:
    std::string strProcedureName;
    std::string strProcedureDate;
    std::string strProcedurePractitioner;
    float fltProcedureCost;
public:
    Procedure(std::string, std::string, std::string, float);
    
    Procedure();
    
    void setProcedureName(std::string);
    void setProcedureDate(std::string);
    void setProcedurePractitioner(std::string);
    void setProcedureCost(float);
    
    std::string getProcedureName();
    std::string getProcedureDate();
    std::string getProcedurePractitioner();
    float getProcedureCost();
};

#endif /* Procedure_hpp */
