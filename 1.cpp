#include <iostream>

using namespace std;

int main()
{
	float gallon;
	cout<< "Enter maximum volume of gas : ";
	cin>> gallon;
	float miles; // miles that can be travelled on full tank of gallon
	cout<< "Enter amount of miles car travels on full tank : ";
	cin>> miles;
	
	float milesPerGallon = miles/gallon;
	
	cout<< milesPerGallon << " Miles per Gallon" << "\n";
}
