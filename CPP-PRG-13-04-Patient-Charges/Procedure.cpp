//
//  Procedure.cpp
//  CPP-PRG-13-04-Patient-Charges
//
//  Created by Keith Smith on 11/15/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//

#include "Procedure.hpp"

Procedure::Procedure(std::string procedureName, std::string procedureDate,
                     std::string procedurePractitioner, float procedureCost)
{
    strProcedureName = procedureName;
    strProcedureDate = procedureDate;
    strProcedurePractitioner = procedurePractitioner;
    fltProcedureCost = procedureCost;
}

Procedure::Procedure()
{
    strProcedureName = "";
    strProcedureDate = "";
    strProcedurePractitioner = "";
    fltProcedureCost = 0.0f;
}

void Procedure::setProcedureName(std::string procedureName)
{
    strProcedureName = procedureName;
}

void Procedure::setProcedureDate(std::string procedureDate)
{
    strProcedureDate = procedureDate;
}

void Procedure::setProcedurePractitioner(std::string procedurePractitioner)
{
    strProcedurePractitioner = procedurePractitioner;
}

void Procedure::setProcedureCost(float procedureCost)
{
    fltProcedureCost = procedureCost;
}

std::string Procedure::getProcedureName()
{
    return strProcedureName;
}

std::string Procedure::getProcedureDate()
{
    return strProcedureDate;
}

std::string Procedure::getProcedurePractitioner()
{
    return strProcedurePractitioner;
}

float Procedure::getProcedureCost()
{
    return fltProcedureCost;
}
