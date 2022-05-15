class Reservation{
  protected:
    int reservationId;

  private:
    int checkInDate;
    int chechOutDate;
    int noOfGuests;
    int price;

  public:
    Reservation();
    void DisplayReservationDetails();
};