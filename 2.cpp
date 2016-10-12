#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

float a = 15.00;
float b = 12.00;
float c = 9.00;

float ticketSoldA;
float ticketSoldB;
float ticketSoldC;

cout<< "Enter amount of ticket A sold";
cin>> ticketSoldA; 
cout<< "Enter amount of ticket B sold";
cin>> ticketSoldB;
cout<< "Enter amount of ticket C sold";
cin>> ticketSoldC;

float total = ticketSoldA*a + ticketSoldB*b + ticketSoldC*c;
cout<<setprecision(2)<<fixed<<"$"<<total<<"\n"; 
}
