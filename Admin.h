class SiteSettings;
class Hotel;
class Review;
/*
IT21251214 - Manathunga A.U.U
Group 4.1 G1
Malabe
*/
class Customer;
class Hotel;
class Review;
class SiteSettings;

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
        Customer *customers[SIZE];

    public:
        Admin();
        Admin(int pID, const char pEmail[], const char pUsername[], const char pPassword[]);
        void DisplayAdminDetails();
        void login();
        void manageCustomers();
        void manageHotels();
        ~Admin();

};