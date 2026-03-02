#include<string>
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,x;
	cin >> n>>x;
	string a;
	for(int i=1;i<=n;i++)
	{
		a = to_string(i);
		for(int j=0;j<a.size();j++)
		{
			if (a[j] == x + '0')sum++;
		}
	}
	cout << sum;
	return 0;
}