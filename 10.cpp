#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float replacementCost;
	cout<< "Enter replacement cost : ";
	cin >> replacementCost;
	
	float minimumInsurance = 80.00/100.00 * replacementCost;
	
	cout<<setprecision(2)<<fixed<< "The reccommended minimum insurance is : "<<minimumInsurance<<" $.";
}
