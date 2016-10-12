#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

string month1,month2,month3;
float rain1,rain2,rain3;

cout << "Enter 1st Month : ";
cin >> month1;
cout << "Enter 2nd Month : ";
cin >> month2;
cout << "Enter 3rd Month : ";
cin >> month3;

cout << "Enter inches of rain for " << month1 << "\n";
cin >> rain1;
cout << "Enter inches of rain for " << month2 << "\n";
cin >> rain2;
cout << "Enter inches of rain for " << month3 << "\n";
cin >> rain3;

float averageInches = (rain1+rain2+rain3)/3;

cout<<setprecision(1)<<fixed<< "The average rainfall for "<<month1<<" "<<month2<<" "<<month3<<" "<<averageInches;

}
