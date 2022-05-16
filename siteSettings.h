class SiteSettings
{
private:
    int siteID;
    int siteContactNum;
    char siteEmail[50];
    char siteAddress[50];

public:
    void AddSiteDetails(int pId, int pNum, const char pEmail[], const char pAddress[]);
    void DisplaySiteDetails();
};