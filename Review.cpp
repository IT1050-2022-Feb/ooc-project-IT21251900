#include <iostream>
#include <cstring>
#include "Review.h"
using namespace std;

void  Review::AddReviewDetails(int r_ID, char r_Content[])
{
  reviewID = r_ID;
  strcpy(reviewContent, r_Content);
}
void Review::DisplayReviewDetails()
{
   cout << "Review ID: " <<  reviewID << endl
        << "Review Content : " << reviewContent << endl;
}
