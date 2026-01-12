#include<iostream>
using namespace std;
int main()
{
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}
	for(int ii=0;ii<3;ii++)
	{
		for (int j = 1;j<3-ii;j++)
		{if(a[j]<a[j-1])
		{
			int temp = a[j-1];
			a[j-1] = a[j ];
				a[j] = temp;
		}
		}
	}for (int p = 0; p < 3; p++)
	{
		cout << a[p] << " ";
	}
}