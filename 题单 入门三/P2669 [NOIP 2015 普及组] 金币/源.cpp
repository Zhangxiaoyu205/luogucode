#include<iostream>
using namespace std;
int main()
{
	int j,i=0,fl=0;
	int k,sum=0,n=1;
	cin >> k;
	while (1)
	{
		for (j = 1; j <= n; j++)
		{
			sum += n;
			i++;
			if (i >= k) {
				
				fl = 1; break;
			}
		}
		if (fl == 1) { break; }
		n++;
	}
	cout << sum;
	return 0;
}