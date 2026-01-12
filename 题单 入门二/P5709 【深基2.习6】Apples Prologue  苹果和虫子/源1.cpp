#include<iostream>
using namespace std;
int main()
{
	int m, t, s;
	cin >> m >> t >> s;
	if (t == 0)
	{
		cout << 0;
		return 0;
	}
	int ate = s / t;
	if (s % t != 0 && ate < m)
	{
		ate++;
	}
	int sum = m - ate;
	if (sum >= 0)
		cout << sum;
	else
		cout << 0;
	return 0;
}