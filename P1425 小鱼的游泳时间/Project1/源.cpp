#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b>>c >> d;
	int e, f;
	int st, et;
	st = a * 60 + b;
	et = c * 60 + d;
	int sum;
	sum = et - st;
	e = sum / 60;
	f = sum % 60;
	cout << e << " " << f;
}