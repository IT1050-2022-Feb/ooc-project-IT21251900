#include"Customer.h"
#include"Admin.h"
//create class 
class Review{
  private:
    int reviewID;
    char reviewContent[50];
  public:
    void AddReviewDetails( int r_ID, char r_Content[]);
    void DisplayReviewDetails();
    
}