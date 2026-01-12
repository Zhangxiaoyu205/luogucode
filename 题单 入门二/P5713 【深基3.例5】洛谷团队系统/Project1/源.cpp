#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int lo=5*n, luo=11+3*n;
	if (lo < luo)cout << "Local";
	else cout << "Luogu";
	return 0;
}