class Admin{
    private:
        int adminID;
        char adminEmail[50];
        char userName[50];
        char adminPassword[50];

    public:
        void AddAdminDetails(int pID, const char pEmail[], const char pUsername[], const char pPassword[]);
        void DisplayAdminDetails();

};