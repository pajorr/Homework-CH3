#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float score1,score2,score3,score4,score5;
	cout<< "Enter Score 1 : " << "\n";
	cin>>score1;
		cout<< "Enter Score 2 : "<< "\n";
	cin>>score2;
		cout<< "Enter Score 3 : "<< "\n";
	cin>>score3;
		cout<< "Enter Score 4 : "<< "\n";
	cin>>score4;
		cout<< "Enter Score 5 : "<< "\n";
	cin>>score5;
	
	float average = (score1+score2+score3+score4+score5)/5;
	
	cout<<setprecision(1)<< fixed << average;
	
}
