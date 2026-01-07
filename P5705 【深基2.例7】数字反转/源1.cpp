#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string a, b;
	cin >> a;
	int j = 0;
	for (int i = a.size() - 1; i >= 0; i--)
	{
		b += a[i];
	}
	cout << b;
}