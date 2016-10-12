#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	float calorie = 100; // 30 cookies in bag "10 servings" = 3 cookies each serving. 300 calories in each serving divided by 3 = 100 calories each cookie.
	float cookieAte;
	cout << "Enter amount of cookie ate : ";
	cin >> cookieAte;
	
	float calorieGained = cookieAte*calorie;
	
	cout << calorieGained << " Calories";
}
