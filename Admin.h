class SiteSettings;
class Hotel;
class Review;
class Customer;
#define SIZE 10;

class Admin{
    private:
        int adminID;
        char adminEmail[50];
        char userName[50];
        char adminPassword[50];
        SiteSettings *settings[SIZE];
        Hotel *hotels[SIZE];
        Review *reviews[SIZE];
        Customer *customers[SIZE]

    public:
        Admin();
        Admin(int pID, const char pEmail[], const char pUsername[], const char pPassword[]);
        void DisplayAdminDetails();

};