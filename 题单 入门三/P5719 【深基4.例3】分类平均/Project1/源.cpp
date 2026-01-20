#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	double suma = 0, sumb = 0, suman = 0, sumbn = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			suma += i;
			suman++;
		}
		else
		{
			sumb += i;
			sumbn++;
		}
	
		
	}
	cout << fixed << setprecision(1) << (suman == 0 ? 0 : suma / suman) << " " << (sumbn == 0 ? 0 : sumb / sumbn);
}