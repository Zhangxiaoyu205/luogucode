#include<iostream>
using namespace std;
int main()
{
	int apple[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> apple[i];
	}
	int h;
	cin >> h;
	h += 30;
	int sum = 0;
	for (int j = 0; j < 10; j++)
	{
		if (apple[j] <= h)
		{
			sum++;
		}
	}

	cout << sum << endl;
	return 0;
}