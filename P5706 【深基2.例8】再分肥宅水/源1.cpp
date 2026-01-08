#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double t, n;
	cin >> t >> n;
	double st = t / n, sum = 2 * n;
	cout << fixed << setprecision(3) << st << endl;
	cout << fixed << setprecision(0) << sum;
}