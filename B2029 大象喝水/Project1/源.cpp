#include<iostream>
using namespace std;
int main()
{
	double h, r,v,n;
	cin >> h >> r;
	h /= 10; 
	r /= 10;
	v = 3.14 * r * r * h;
	n = ceil(20/v);
	cout << n;
}