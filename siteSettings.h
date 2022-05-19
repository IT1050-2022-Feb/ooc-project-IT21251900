/*
IT21251214 - Manathunga A.U.U
Group 4.1 G1
Malabe
*/
class Admin;

class SiteSettings
{
private:
    int siteID;
    int siteContactNum;
    char siteEmail[50];
    char siteAddress[50];
    Admin *a;

public:
    SiteSettings();
    SiteSettings(int pId, int pNum, const char pEmail[], const char pAddress[], Admin *pa);
    void DisplaySiteDetails();
    void updateDetails();
    ~SiteSettings();
};