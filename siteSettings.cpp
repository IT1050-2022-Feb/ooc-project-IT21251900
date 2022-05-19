/*
IT21251214 - Manathunga A.U.U
Group 4.1 G1
Malabe
*/
#include "siteSettings.h"
#include "Admin.h"
#include <iostream>
#include <cstring>
using namespace std;

SiteSettings::SiteSettings(){}

SiteSettings::SiteSettings(int pId, int pNum, const char pEmail[], const char pAddress[], Admin *pa)
{
    siteID = pId;
    siteContactNum = pNum;
    strcpy(siteEmail, pEmail);
    strcpy(siteAddress, pAddress);
}

void SiteSettings::DisplaySiteDetails()
{
    cout << "Site ID: " << siteID << endl
         << "Site Contact Number : " << siteContactNum << endl
         << "Site email : " << siteEmail << endl
         << "Site address : " << siteAddress << endl;
}

void SiteSettings::updateDetails(){
  
}

SiteSettings::~SiteSettings(){
  
}