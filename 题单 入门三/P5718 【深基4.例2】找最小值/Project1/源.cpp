#include<iostream>
using namespace std;
int main()
{
	int n;
	int num, min, i = 1;
	cin >> n;
	while (i < n)
	{
		cin >> num;
		if (i == 1)
		{
			min = num;
		}
		if (num < min)
		{
			min = num;
		}
		i++;
	}
	cout << min;
	return 0;
}