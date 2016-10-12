#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float oneSugar = 1.5/48; //Sugar need for one cookie
	float oneButter = 1.0/48;
	float oneFlour = 2.75/48;
	float HowManyCookies;
	
	cout<< "Enter amount of cookies you want to make : ";
	cin>> HowManyCookies;
	
	float Sugar = oneSugar*HowManyCookies;
	float Butter = oneButter*HowManyCookies;
	float Flour = oneFlour*HowManyCookies;
	
	cout<<setprecision(1)<<fixed<< "You will need, "<<Sugar<<" Cups of Sugar, "<<Butter<<" Cups of Butter, and "<<Flour<<" Cups of flour";
	
}
