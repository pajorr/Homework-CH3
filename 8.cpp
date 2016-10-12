#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float palletWeight;
	cout << "Enter weight of pallet (in pounds) : ";
	cin >> palletWeight;
	
	float totalWeight;
	cout << "Enter weight of pallet with the gadget (in pounds) : ";
	cin >> totalWeight;
	
	float eachPallet = 12.5; //pounds
	
	float howManyGadget = (totalWeight-palletWeight)/eachPallet;
	
	cout << "Amount of gadgets are " << howManyGadget;
	
}
