#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float male;
	float female;
	
	cout<<"Enter amount of male in class : " << "\n";
	cin>>male;
	cout<<"Enter amount of female in class : " << "\n";
	cin>>female;
	
	float total = male+female;
	float malePercent = male/total*100;
	float femalePercent = female/total*100;
	
	cout<<"Males are "<<malePercent<<" %"<<" of the whole class, while females make up "<<femalePercent<<" %"<<" of the whole class.";
}
