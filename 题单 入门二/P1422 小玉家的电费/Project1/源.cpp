#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double k,sum=0;
	cin >> k;
	if(k<=150)
	{
		sum = k * 0.4463;
	}
	else
	{if(k<=400&&k>150)
	{
		sum += 150 * 0.4463;
		sum += (k - 150) * 0.4663;
	}
	if(k>400)
	{
		sum += 150 * 0.4463;
		sum += 250 * 0.4663;
		sum += (k -400) * 0.5663;
	}
	}
	cout << fixed << setprecision(1) << sum;
}