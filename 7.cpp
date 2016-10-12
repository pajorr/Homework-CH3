#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	string movieName;
	
	float adultTickets,childTickets;
	
	cout<< "Enter movie name (no spaces) : " << "\n";
	cin>> movieName;
	cout<< "Enter amount of adult Tickets sold : " << "\n";
	cin>> adultTickets;
	cout<< "Enter amount of child Tickets sold : " << "\n";
	cin>> childTickets;
	
	float grossProfit = adultTickets*10.00 + childTickets*6.00;
	float boxOfficeProfit = (20.00/100.00)*grossProfit;
	float distributorProfit = grossProfit - boxOfficeProfit;
	
	//report

	cout << movieName << "\n";
	cout << "Adult tickets sold : "<< adultTickets << " Tickets \n";
	cout << "Child tickets sold : "<< childTickets << " Tickets \n";
		cout << setprecision(2) << fixed;
	cout << "Gross Profit : "<< grossProfit << " $ \n";
	cout << "Box office profit : "<< boxOfficeProfit << " $ \n";
	cout << "Amount paid to distributor : "<< distributorProfit << " $ \n";
}
