class Payment{
  private:
    int paymentID;
    char paymentType[10];
    int paymentAmount;
  public:
    Payment();
    void addPaymentDetails(int p_ID, const char p_type[], int p_amount);
    void  displayPaymentDetails();
};