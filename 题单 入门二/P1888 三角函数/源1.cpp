#include<iostream>
#include<algorithm>
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
	cout << a[0] / __gcd(a[0], a[2]) << '/' << a[2] / __gcd(a[0], a[2]);
}