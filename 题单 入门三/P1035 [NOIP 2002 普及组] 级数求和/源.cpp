#include<iostream>
using namespace std;
int main()
{
	double n, k,sum=0;
	cin >> k;
	double i=0;
	while(sum <= k)
	{
		i++;
		sum += 1 / i;
	}
		

	
	cout << i;
} 