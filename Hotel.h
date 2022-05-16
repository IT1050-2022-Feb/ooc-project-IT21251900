// IT21251900
// Rajapaksha R.M.S.D
// Malabe
// badge 4.1 G1

class Hotel{
  private:
    int hotelID;
    char hotelName[50];
    char hotelAddress[256];
    int hotelContact;
    char hotelEmail[256];
    int pricePerNight;
    int numOfRooms;
    char facilities[1000];
  
  public:
    Hotel();
  
    void AddHotelDetails(int HotelID,char HotelName[50], char HotelAddress[256], int HotelContact, char HotelEmail[256], int PricePerNight ,int NumOfRooms, char Facilities[1000]);
  
    void DisplayHotelDetails();
  
    ~Hotel();
};