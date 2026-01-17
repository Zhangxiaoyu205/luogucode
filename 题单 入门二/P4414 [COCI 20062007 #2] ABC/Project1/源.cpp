#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a[3];
	string n;
	int temp;
	cin >> a[0] >> a[1] >> a[2];
	cin >> n;
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
	if(n=="ABC")
	{
		cout << a[0] << " " << a[1] << " " << a[2] << endl;
	}
	if (n == "ACB")
	{
		cout << a[0] << " " << a[2] << " " << a[1] << endl;
	}
	if (n == "BAC")
	{
		cout << a[1] << " " << a[0] << " " << a[2] << endl;
	}
	if (n == "BCA")
	{
		cout << a[1] << " " << a[2] << " " << a[0] << endl;
	}
	if (n == "CAB")
	{
		cout << a[2] << " " << a[0] << " " << a[1] << endl;
	}
	if (n == "CBA")
	{
		cout << a[2] << " " << a[1] << " " << a[0] << endl;
	}
	return 0;
}