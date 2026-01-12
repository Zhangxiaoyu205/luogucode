#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double m, h;
	cin >> m >> h;
	double BMI=m/(h*h);
	if(BMI<18.5)
	{
		cout << "Underweight";
	}
	if(BMI>=18.5&&BMI<24)
	{
		cout << "Normal";
	}
	if(BMI>=24)
	{
		cout << setprecision(4) << fixed << BMI << endl;
		cout << "Overweight" << endl;
	}
}