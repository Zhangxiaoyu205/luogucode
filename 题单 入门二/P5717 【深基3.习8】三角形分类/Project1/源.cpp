#include<iostream>
using namespace std;
int main()
{
	int a[3];
	int temp;
	cin >> a[0] >> a[1] >> a[2];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 1; j < 3 - i; j++)
		{
			if (a[j - 1] > a[j]) {
				temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	if (a[2] + a[1]<=a[0] || a[2]- a[0]>=a[1])
	{
		cout << "Not triangle" << endl;
		return 0;
	}
	if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2])
	{
		cout << "Right triangle" << endl;
	}
	if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2])
	{
		cout << "Acute triangle" << endl;
	}
	if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2])
	{
		cout << "Obtuse triangle" << endl;
	}
	if (a[0] == a[1] || a[1] == a[2])
	{
		cout << "Isosceles triangle" << endl;
	}
	if (a[0] == a[1] && a[1] == a[2])
	{
		cout << "Equilateral triangle" << endl;
	}
	return 0;
}